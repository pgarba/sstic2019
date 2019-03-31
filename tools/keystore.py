import ctypes
import fcntl
import hashlib
import binascii
import os
from Crypto.Cipher import AES


def info(msg):
	print("[\033[34;1mi\033[0m] %s" % (msg))

def ok(msg):
	print("[\033[32;1m+\033[0m] %s" % (msg))

def warn(msg):
	print("[\033[33;1mw\033[0m] %s" % (msg))

def error(msg):
	print("[\033[31;1m!\033[0m] %s" % (msg))



class key_container(ctypes.Structure):
	_fields_ = [
		('key_id', ctypes.c_uint64),
		('key_type', ctypes.c_int),
		('key_len', ctypes.c_uint16),
		('key_data', ctypes.c_byte*0x20),
	]

def add_key(key_id,key_type,key_len,key_data):
	tee_key = key_container()
	tee_key.key_id = key_id
	tee_key.key_type = key_type
	tee_key.key_len = key_len
	tee_key.key_data = (ctypes.c_byte * 0x20).from_buffer_copy(key_data)


	fd = open('/dev/sstic', 'r')
	success = True

	try:
		fcntl.ioctl(fd, 0xC1105306, tee_key)
	except:
		success = False
	finally:
		fd.close()
		return success

def read_aes_key(key_id):
	tee_key = key_container()
	tee_key.key_id = key_id
	tee_key.key_len = 0x20

	fd = open('/dev/sstic', 'r')
	ret = -1
	try:
		fcntl.ioctl(fd, 0xC1105305, tee_key)
		if((tee_key.key_type!=2)|(tee_key.key_len!=0x20)):
			ret = -1
		else:
			ret = tee_key.key_data
	except:
		ret = -1
	finally:
		fd.close()
		return ret

def decrypt_container(file_path,key):
	f=open("%s/.encrypted"%file_path,"rb")
	data = f.read()
	f.close()
	aes = AES.new(key,AES.MODE_CBC,data[:0x10])
	decrypted = aes.decrypt(data[0x10:])

	file_name = "%s/decrypted_file"%file_path
	f=open(file_name,"wb")
	f.write(decrypted)
	f.close()
	os.chmod(file_name, 493)

def decrypt(id):
	key = read_aes_key(id)
	if (key != -1):
		path = "/root/safe_%02d"%(id-1)
		decrypt_container(path,key)
		ok("Container %s/.encrypted decrypted to %s/decrypted_file"%(path,path))

	else:
		warn("No key for safe_%02d" %(id-1 ))