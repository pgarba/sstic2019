#!/usr/bin/python
from keystore import add_key
from decrypt_containers import decrypt
import hashlib
import binascii
import sys

def info(msg):
	print("[\033[34;1mi\033[0m] %s" % (msg))

def ok(msg):
	print("[\033[32;1m+\033[0m] %s" % (msg))

def warn(msg):
	print("[\033[33;1mw\033[0m] %s" % (msg))

def error(msg):
	print("[\033[31;1m!\033[0m] %s" % (msg))

def check_key(data):
	h = hashlib.scrypt(data,salt =b"k3yst0r3_s4lt",n=1<<0xd,r=1<<3,p=1<<1,dklen=32).hex()
	if h == "09f92b149bf4db858f11c0798fe82a8d60ca095afb2033c1ecad50b032be3bd9":
		return 2
	elif h == "aaf74929bbe5c154d9db83e6201cb0f3e9d8ff859843fd3db05b4ce00dae18e0":
		return 3
	elif h == "648bb878b84bbc360e2a6ba0c6e5729e5aa88e816c784f6293405bbe262a368d":
		return 4
	else:
		return -1


if __name__ == "__main__":
	if len(sys.argv)>1 and len(sys.argv[1]) in [32, 64]:
		data=""
		if len(sys.argv[1]) == 64:
			data = binascii.unhexlify(sys.argv[1])
		elif len(sys.argv[1]) == 32:
			data = bytes(sys.argv[1],"utf8")
		ret = check_key(data)
		if(ret!=-1):
			ok("Key with key_id %08x ok"%ret)
			add_key(ret,2,0x20,data)
			ok("Key added into keystore")
			if data.startswith(b'SSTIC'):
				flag = data.decode("utf8")
			else:
				flag = "SSTIC{%s}" % data.hex()
			ok("Envoyez le flag %s à l'adresse challenge2019@sstic.org pour valider votre avancée" % flag)
			decrypt(ret)
			if ret==3:
				warn("You must reboot in order to decrypt Secure OS")
		else:
			error("Wrong key")
	else:
		warn("Usage : add_key.py key or key_in_hex_format")
