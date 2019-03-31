#!/usr/bin/python
# -*- coding: utf-8 -*

import hashlib
import sys
import binascii
from Crypto.Cipher import AES

def info(msg):
	print("[\033[34;1mi\033[0m] %s" % (msg))

def ok(msg):
	print("[\033[32;1m+\033[0m] %s" % (msg))

def warn(msg):
	print("[\033[33;1mw\033[0m] %s" % (msg))

def error(msg):
	print("[\033[31;1m!\033[0m] %s" % (msg))

def Gate(A,B,C,D):
	return ((A & 1) & (B & 1)) | ((C & 1) & (D & 1))

Buttons = 0

def secure_device(A,B,OP):
	global Buttons
	"""
	TODO : 
		- Implémentation de la communication avec le secure element
			* Entrées A et B (A0 = bit de poids faible)
			* Entrée OP
			* Sortie Out (Out0 = bit de poids faible)
			* Les boutons permettent à l'utilisateur de rentrer sa combinaison secrète pour le déchiffrement
		- Supprimer les docs de conception 
	"""

    # Output
	O = 0;		
	BT1 = (Buttons >> 0) & 1;
	BT2 = (Buttons >> 1) & 1;
	BT3 = (Buttons >> 2) & 1;
	BT4 = (Buttons >> 3) & 1;

	A0 = (A >> 0) & 1;
	A1 = (A >> 1) & 1;
	A2 = (A >> 2) & 1;
	A3 = (A >> 3) & 1;
	A4 = (A >> 4) & 1;
	A5 = (A >> 5) & 1;
	A6 = (A >> 6) & 1;
	A7 = (A >> 7) & 1;

	B0 = (B >> 0) & 1;
	B1 = (B >> 1) & 1;
	B2 = (B >> 2) & 1;
	B3 = (B >> 3) & 1;
	B4 = (B >> 4) & 1;
	B5 = (B >> 5) & 1;
	B6 = (B >> 6) & 1;
	B7 = (B >> 7) & 1;

	OP0 = (OP >> 0) & 1;
	OP1 = (OP >> 1) & 1;

	# Gate Array C
	C0 = Gate(A6, BT3, A7, ~BT3);
	C1 = Gate(A5, BT3, A6, ~BT3);
	C2 = Gate(A4, BT3, A5, ~BT3);
	C3 = Gate(A3, BT3, A4, ~BT3);
	C4 = Gate(A2, BT3, A3, ~BT3);
	C5 = Gate(A1, BT3, A2, ~BT3);
	C6 = Gate(A0, BT3, A1, ~BT3);
	C7 = Gate(A0, ~BT3, A7, BT3);

	# Gate Array D
	D0 = Gate(B6, BT4, B7, ~BT4);
	D1 = Gate(B5, BT4, B6, ~BT4);
	D2 = Gate(B4, BT4, B5, ~BT4);
	D3 = Gate(B3, BT4, B4, ~BT4);
	D4 = Gate(B2, BT4, B3, ~BT4);
	D5 = Gate(B1, BT4, B2, ~BT4);
	D6 = Gate(B0, BT4, B1, ~BT4);
	D7 = Gate(B0, ~BT4, B7, BT4);

	# Gate Array E
	E0 = Gate(OP0, ~BT1, ~OP0, BT1);
	E1 = Gate(OP1, ~BT2, ~OP1, BT2);

	# Output O0
	X0 = C7 ^ D7;
	R0 = C7 & D7;
	T0 = C7 | D7;
	S0 = Gate(X0, E0, X0, ~E0);
	U0 = Gate(R0, ~E0, E0, T0);
	O0 = Gate(S0, E1, U0, ~E1);

	# Output O1
	X1 = C6 ^ D6;
	R1 = C6 & D6;
	T1 = C6 | D6;
	U1 = Gate(R1, ~E0, E0, T1);
	Y0 = R0 ^ X1;
	V0 = (R0 & X1) | R1;
	S1 = Gate(Y0, E0, X1, ~E0);
	O1 = Gate(S1, E1, U1, ~E1);

	# Output O2
	X2 = C5 ^ D5;
	R2 = C5 & D5;
	T2 = C5 | D5;
	U2 = Gate(R2, ~E0, E0, T2);
	Y1 = V0 ^ X2;
	V1 = (V0 & X2) | R2;
	S2 = Gate(Y1, E0, X2, ~E0);
	O2 = Gate(S2, E1, U2, ~E1);

	# Output O3
	X3 = C4 ^ D4;
	R3 = C4 & D4;
	T3 = C4 | D4;
	U3 = Gate(R3, ~E0, E0, T3);
	Y2 = V1 ^ X3;
	V2 = (V1 & X3) | R3;
	S3 = Gate(Y2, E0, X3, ~E0);
	O3 = Gate(S3, E1, U3, ~E1);

	# Output O47
	X4 = C3 ^ D3;
	R4 = C3 & D3;
	T4 = C3 | D3;
	U4 = Gate(R4, ~E0, E0, T4);
	Y3 = V2 ^ X4;
	V3 = (V2 & X4) | R4;
	S4 = Gate(Y3, E0, X4, ~E0);
	O4 = Gate(S4, E1, U4, ~E1);

	# Output O5
	X5 = C2 ^ D2;
	R5 = C2 & D2;
	T5 = C2 | D2;
	U5 = Gate(R5, ~E0, E0, T5);
	Y4 = V3 ^ X5;
	V4 = (V3 & X5) | R5;
	S5 = Gate(Y4, E0, X5, ~E0);
	O5 = Gate(S5, E1, U5, ~E1);

	# Output O6
	X6 = C1 ^ D1;
	R6 = C1 & D1;
	T6 = C1 | D1;
	U6 = Gate(R6, ~E0, E0, T6);
	Y5 = V4 ^ X6;
	V5 = (V4 & X6) | R6;
	S6 = Gate(Y5, E0, X6, ~E0);
	O6 = Gate(S6, E1, U6, ~E1);

	# Output O7
	X7 = C0 ^ D0;
	R7 = C0 & D0;
	T7 = C0 | D0;
	U7 = Gate(R7, ~E0, E0, T7);
	Y6 = V5 ^ X7;
	V6 = (V5 & X7) | R7;
	S7 = Gate(Y6, E0, X7, ~E0);
	O7 = Gate(S7, E1, U7, ~E1);

	# Gen output byte
	O = O | (O0 << 0);
	O = O | (O1 << 1);
	O = O | (O2 << 2);
	O = O | (O3 << 3);
	O = O | (O4 << 4);
	O = O | (O5 << 5);
	O = O | (O6 << 6);
	O = O | (O7 << 7);

	return O;	


def step1():
	r = secure_device(0x35,0x27,3)
	r = secure_device(0x7e,r,3)
	r = secure_device(0x66,r,2)
	r = secure_device(0x8,r,1)
	r = secure_device(0x13,r,0)
	r = secure_device(0x1f,r,1)
	r = secure_device(0xa,r,2)
	r = secure_device(0xd3,r,0)
	r = secure_device(0xc6,r,3)

	return r

def step2():
	r= secure_device(0xde,0xab,0)
	r= secure_device(0x67,r,3)
	r= secure_device(0x2a,r,2)
	r= secure_device(0x6d,r,1)
	r= secure_device(0x4a,r,3)
	r= secure_device(0xe7,r,0)
	r= secure_device(0x1c,r,1)
	r= secure_device(0x35,r,0)
	r= secure_device(0xde,r,3)
	r= secure_device(0xf7,r,0)
	r= secure_device(0xda,r,2)
	return r

def step3():
	r = secure_device(0x14,0x23,3)
	r = secure_device(0x72,r,0)
	r = secure_device(0x48,r,3)
	r = secure_device(0x53,r,1)
	r = secure_device(0xa7,r,0)
	r = secure_device(0x5f,r,1)
	r = secure_device(0x3,r,3)
	r = secure_device(0xb7,r,3)
	r = secure_device(0x73,r,1)
	r = secure_device(0x37,r,3)
	r = secure_device(0xc5,r,2)
	r = secure_device(0xa4,r,1)
	r = secure_device(0x30,r,0)
	r = secure_device(0xdd,r,2)
	return r


def step4():
	r = secure_device(0xb0,0x42,2)
	r = secure_device(0xbc,r,2)
	r = secure_device(0xfc,r,2)
	r = secure_device(0x54,r,3)
	r = secure_device(0x30,r,2)
	r = secure_device(0x97,r,1)
	r = secure_device(0xe8,r,2)
	r = secure_device(0xd6,r,0)
	r = secure_device(0x26,r,0)
	r = secure_device(0xeb,r,0)
	r = secure_device(0x68,r,1)
	r = secure_device(0x26,r,0)
	r = secure_device(0x9,r,3)
	r = secure_device(0x2a,r,2)
	r = secure_device(0xa9,r,3)
	return r


def step5():
	r = secure_device(0xff,0x12,0)
	r = secure_device(0xfd,r,1)
	r = secure_device(0xe5,r,1)
	r = secure_device(0x26,r,3)
	r = secure_device(0x85,r,3)
	r = secure_device(0x63,r,1)
	r = secure_device(0x93,r,3)
	r = secure_device(0xba,r,2)
	r = secure_device(0x97,r,0)
	r = secure_device(0xab,r,1)
	r = secure_device(0x6e,r,3)
	r = secure_device(0xfd,r,0)
	r = secure_device(0x4c,r,3)
	r = secure_device(0x50,r,0)
	r = secure_device(0xa,r,2)
	r = secure_device(0xfc,r,3)
	r = secure_device(0xe3,r,2)
	r = secure_device(0xa6,r,3)
	r = secure_device(0x64,r,2)
	r = secure_device(0x8e,r,3)
	r = secure_device(0xc1,r,1)
	return r

def step6():
	r = secure_device(0x90,0x77,1)
	r = secure_device(0x8e,r,0)
	r = secure_device(0xbd,r,2)
	r = secure_device(0x39,r,2)
	r = secure_device(0x4c,r,2)
	r = secure_device(0xc5,r,2)
	r = secure_device(0xb6,r,3)
	r = secure_device(0x93,r,1)
	r = secure_device(0x9f,r,3)
	r = secure_device(0xd6,r,3)
	r = secure_device(0x6e,r,2)
	r = secure_device(0x39,r,3)
	r = secure_device(0x40,r,1)
	r = secure_device(0x14,r,2)
	r = secure_device(0xe6,r,3)
	return r

def step7():
	r = secure_device(0xf,0xab,3)
	r = secure_device(0xa2,r,1)
	r = secure_device(0x7c,r,0)
	r = secure_device(0x34,r,1)
	r = secure_device(0x14,r,1)
	r = secure_device(0xe7,r,0)
	r = secure_device(0xb9,r,0)
	r = secure_device(0xf1,r,2)
	r = secure_device(0xd5,r,1)
	r = secure_device(0x4e,r,2)
	r = secure_device(0xe,r,2)
	r = secure_device(0x6,r,0)
	r = secure_device(0x7d,r,2)
	r = secure_device(0x87,r,3)
	r = secure_device(0xbc,r,0)
	r = secure_device(0xd4,r,3)
	r = secure_device(0x8a,r,1)
	r = secure_device(0xe7,r,3)
	r = secure_device(0x9e,r,1)
	r = secure_device(0x58,r,0)
	r = secure_device(0x24,r,2)
	r = secure_device(0x44,r,3)
	r = secure_device(0xc9,r,1)
	r = secure_device(0xd4,r,1)
	r = secure_device(0x1d,r,3)
	r = secure_device(0xcd,r,0)
	r = secure_device(0xde,r,1)
	r = secure_device(0x54,r,0)
	r = secure_device(0x5e,r,2)
	r = secure_device(0x46,r,1)
	r = secure_device(0x21,r,0)
	r = secure_device(0xff,r,1)
	r = secure_device(0x51,r,0)
	r = secure_device(0x78,r,1)
	r = secure_device(0x2f,r,3)
	r = secure_device(0xed,r,2)
	r = secure_device(0x4b,r,3)
	r = secure_device(0x4d,r,2)
	return r

def step8():
	r = secure_device(0x88,0x74,0)
	r = secure_device(0x48,r,2)
	r = secure_device(0x11,r,2)
	r = secure_device(0x76,r,0)
	r = secure_device(0x2b,r,3)
	r = secure_device(0xf8,r,2)
	return r



def init():
	r = secure_device(0x46,0x92,0)
	r = secure_device(0xdf,r,2)
	r = secure_device(0x3e,r,0)
	r = secure_device(0x3a,r,3)
	r = secure_device(0x36,r,2)
	r = secure_device(0x8e,r,2)
	r = secure_device(0xc9,r,3)
	r = secure_device(0xe7,r,1)
	r = secure_device(0x29,r,2)
	r = secure_device(0xc2,r,2)
	r = secure_device(0x79,r,0)
	r = secure_device(0x2a,r,2)
	r = secure_device(0x4c,r,3)
	r = secure_device(0xde,r,0)
	r = secure_device(0x88,r,0)
	r = secure_device(0x8b,r,2)
	r = secure_device(0x97,r,3)
	r = secure_device(0x6a,r,2)
	r = secure_device(0x60,r,1)
	r = secure_device(0x0f,r,0)
	r = secure_device(0x5b,r,3)
	r = secure_device(0xd0,r,2)
	r = secure_device(0xa9,r,1)
	r = secure_device(0xe3,r,3)
	r = secure_device(0xd0,r,1)
	r = secure_device(0x27,r,0)
	r = secure_device(0x90,r,0)
	r = secure_device(0x3b,r,1)
	r = secure_device(0x66,r,2)
	r = secure_device(0xe2,r,0)
	r = secure_device(0x24,r,3)
	r = secure_device(0xee,r,1)
	r = secure_device(0xf2,r,3)
	return r


def main():	
	global Buttons

	info("Dechiffrement du conteneur\n")

	info("Initialisation du secure element")

	info("Merci d'appuyer les 4 boutons du secure element puis appuyer sur entrée")		
	Buttons = 0xf
	#input()
	if init()!=0xa1:
		error("Mauvaise initialisation, vérifiez l'état du sécure élement")
		sys.exit(0)
	else:
		ok("Initialisation, check 1 OK")
	
	info("Merci de relâcher les 4 boutons du secure element puis appuyer sur entrée")
	#input()
	Buttons = 0x0
	if init()!=0xe0:
		error("Mauvaise initialisation, vérifiez l'état du sécure élement")
		sys.exit(0)
	else:
		ok("Initialisation, check 2 OK")


	warn("Calcul de la clef de déchiffrement du conteneur, préparez vous à appuyer sur les boutons")
	

	info("Step 1, appuyez sur entrée quand la combinaison de boutons est enfoncée")
	#input()
	s1 = step1()
	print hex(s1)
	info("Step 2, appuyez sur entrée quand la combinaison de boutons est enfoncée")
	#input()
	s2 = step2()
	print hex(s2)
	info("Step 3, appuyez sur entrée quand la combinaison de boutons est enfoncée")
	#input()
	s3 = step3()
	print hex(s3)
	info("Step 4, appuyez sur entrée quand la combinaison de boutons est enfoncée")
	#input()
	s4 = step4()
	print hex(s4)
	info("Step 5, appuyez sur entrée quand la combinaison de boutons est enfoncée")
	#input()
	s5 = step5()
	print hex(s5)
	info("Step 6, appuyez sur entrée quand la combinaison de boutons est enfoncée")
	#input()
	s6 = step6()
	print hex(s6)
	info("Step 7, appuyez sur entrée quand la combinaison de boutons est enfoncée")
	#input()
	s7 = step7()
	print hex(s7)
	info("Step 8, appuyez sur entrée quand la combinaison de boutons est enfoncée")
	#input()
	s8 = step8()
	print hex(s8)

	s1table = []
	for i in range (0,16):
		Buttons = i & 0xF
		s1 = step1()
		s1table.append(s1)

	s2table = []
	for i in range (0,16):
		Buttons = i & 0xF
		s2 = step2()
		s2table.append(s2)

	s3table = []
	for i in range (0,16):
		Buttons = i & 0xF
		s3 = step3()
		s3table.append(s3)

	s4table = []
	for i in range (0,16):
		Buttons = i & 0xF
		s4 = step4()
		s4table.append(s4)

	s5table = []
	for i in range (0,16):
		Buttons = i & 0xF
		s5 = step5()
		s5table.append(s5)

	s6table = []
	for i in range (0,16):
		Buttons = i & 0xF
		s6 = step6()
		s6table.append(s6)

	s7table = []
	for i in range (0,16):
		Buttons = i & 0xF
		s7 = step7()
		s7table.append(s7)

	s8table = []
	for i in range (0,16):
		Buttons = i & 0xF
		s8 = step8()
		s8table.append(s8)

	i = 0
	while i < 0xFFFFFFFF:				
		Buttons = i & 0xF
		#s1 = step1()
		s1 = s1table[Buttons]
		Buttons = (i >> 4) & 0xF;
		#s2 = step2()		
		s2 = s2table[Buttons]
		Buttons = (i >> 8) & 0xF;
		#s3 = step3()
		s3 = s3table[Buttons]
		Buttons = (i >> 12) & 0xF;
		#s4 = step4()
		s4 = s4table[Buttons]
		Buttons = (i >> 16) & 0xF;
		s5 = s5table[Buttons]
		#s5 = step5()
		Buttons = (i >> 20) & 0xF;
		s6 = s6table[Buttons]
		#s6 = step6()
		Buttons = (i >> 24) & 0xF;
		s7 = s7table[Buttons]
		#s7 = step7()
		Buttons = (i >> 28) & 0xF;
		s8 = s8table[Buttons]
		#s8 = step8()
		key = bytearray([s1,s2,s3,s4,s5,s6,s7,s8])	
		h = hashlib.sha256(key).hexdigest()
		# print h		

		if i % 0x01000000 == 0:
			print ("%08X" % i)
			print h

		if "00c8bb35d44dcbb2712a11799d8e1316045d64404f337f4ff653c27607f436ea" == h:
			ok("Hash ok")
			info("Dérivation de la clef AES safe_01")
			aes_key = hashlib.scrypt(key,salt =b"sup3r_s3cur3_k3y_d3r1v4t10n_s4lt",n=1<<0xd,r=1<<3,p=1<<1,dklen=32)
			info("aes key : %s" % aes_key.hex())
			info("Vous pouvez sauvegarder cette clef en utilisant /root/tools/add_key.py key")
		#else:
		#	error("Mauvais hash, déchiffrement impossible")

		i = i+1

if __name__ == '__main__':
	main()
