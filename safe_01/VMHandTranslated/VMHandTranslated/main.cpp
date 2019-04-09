#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#pragma warning( disable : 4102)
#pragma warning( disable : 4101)

#include "Table.h"

__forceinline uint64_t DW_OP_reg(int Reg) {
	return 0x8888888;
}

__forceinline uint64_t DW_OP_lit(uint64_t lit) {
#ifdef Unroll
	printf("S%d = %d;\n", StackPtr, lit);
#endif

	return lit;
}

__forceinline uint64_t DW_OP_const1u(uint8_t Const) {
#ifdef Unroll
	printf("S%d = 0x%X;\n", StackPtr, Const);
#endif

	return Const;
}

__forceinline uint64_t DW_OP_const4u(uint32_t Const, bool Print = true) {
#ifdef Unroll
	if (Print) {
		printf("S%d = 0x%X;\n", StackPtr, Const);
	}
#endif
	return Const;
}

__forceinline uint64_t DW_OP_const8u(uint64_t Const) {
#ifdef Unroll
	printf("S%d = 0x%llX;\n", StackPtr, Const);
#endif

	return Const;
}

__forceinline uint64_t DW_OP_plus(uint64_t A, uint64_t B) {
#ifdef Unroll
	printf("S%d = S%d  + S%d;\n", StackPtr, StackPtr, StackPtr + 1);
#endif

	return A + B;
}

__forceinline uint64_t DW_OP_minus(uint64_t A, uint64_t B) {
#ifdef Unroll
	printf("S%d = S%d  - S%d;\n", StackPtr, StackPtr, StackPtr + 1);
#endif

	return A - B;
}

__forceinline uint64_t DW_OP_and(uint64_t A, uint64_t B) {
#ifdef Unroll
	printf("S%d = S%d  & S%d;\n", StackPtr, StackPtr, StackPtr + 1);
#endif

	return A & B;
}

__forceinline uint64_t DW_OP_or(uint64_t A, uint64_t B) {
#ifdef Unroll
	printf("S%d = S%d | S%d;\n", StackPtr, StackPtr, StackPtr + 1);
#endif
	return A | B;
}

__forceinline uint64_t DW_OP_shr(uint64_t A, uint64_t B) {
#ifdef Unroll
	printf("S%d = S%d  >> S%d;\n", StackPtr, StackPtr, StackPtr + 1);
#endif

	return A >> B;
}

__forceinline uint64_t DW_OP_shl(uint64_t A, uint64_t B) {
#ifdef Unroll
	printf("S%d = S%d  << S%d;\n", StackPtr, StackPtr, StackPtr + 1);
#endif
	return A << B;
}

__forceinline uint64_t DW_OP_xor(uint64_t A, uint64_t B) {
#ifdef Unroll
	printf("S%d = S%d  ^ S%d;\n", StackPtr, StackPtr, StackPtr + 1);
#endif
	return A ^ B;
}

__forceinline uint64_t DW_OP_mul(uint64_t A, uint64_t B) {
#ifdef Unroll
	printf("S%d = S%d  * S%d;\n", StackPtr, StackPtr, StackPtr + 1);
#endif

	return A * B;
}

__forceinline void DW_OP_swap(uint64_t& A, uint64_t& B) {
	uint64_t t = A;
	A = B;
	B = t;
}

__forceinline uint64_t DW_OP_dup(uint64_t V) {
	return V;
}

__forceinline void DW_OP_drop() {
}

__forceinline void DW_OP_skip(uint64_t Size) {
	exit(0);
}

__forceinline uint64_t DW_OP_pick(uint64_t Offset) {
	int i = 0;
	exit(0);
	return Offset;
}

__forceinline uint64_t DW_OP_bra(uint64_t V) {
	exit(0);
	return 0;
}

__forceinline void DW_OP_rot(uint64_t& A, uint64_t& B, uint64_t& C) {
	uint64_t t1, t2, t3;

	t1 = A;
	t2 = B;
	t3 = C;

#ifdef Unroll
	printf("STemp1 = S%d;\n", StackPtr - 1);
	printf("STemp2 = S%d;\n", StackPtr - 2);
	printf("STemp3 = S%d;\n", StackPtr - 3);
	printf("S%d = STemp2;\n", StackPtr - 1);
	printf("S%d = STemp3;\n", StackPtr - 2);
	printf("S%d = STemp1;\n", StackPtr - 3);
#endif

	A = t2;
	B = t3;
	C = t1;
}

__forceinline uint64_t DW_OP_deref(uint64_t VA) {
	uint64_t index = (VA - 0x400648); // / 4;

#ifdef Unroll
	printf("S%d = *(uint64_t *)(&Table_00400648[S%d - 0x400648]);\n", StackPtr,
		StackPtr);
#endif

	return *(uint64_t*)(&Table_00400648[index]);
}

__forceinline uint64_t DW_OP_deref_size(int Size, uint64_t Ptr) {
	int index = (Ptr - 0x400648) / 4;

#ifdef Unroll
	printf("S%d = *(uint32_t *)(&Table_00400648[S%d - 0x400648]);\n", StackPtr,
		StackPtr);
#endif

	return ((uint32_t*)Table_00400648)[index];
}

#define LODWORD(x) (*((uint32_t*)&(x))) // low dword
#define HIDWORD(x) (*((uint32_t*)&(x)+1))
#define _DWORD uint32_t
#define _QWORD uint64_t
	
unsigned __int64 __fastcall VM_Func(uint64_t *Flag)
{
	uint64_t v1; // rax
	__int64 v2; // rbp
	__int64 v3; // r9
	unsigned __int64 v4; // r12
	signed __int64 v5; // rcx
	signed __int64 v6; // rdi
	unsigned __int64 v7; // rsi
	signed __int64 v8; // rcx
	signed __int64 v9; // r11
	unsigned __int64 v10; // rbp
	unsigned __int64 v11; // rbx
	__int64 v12; // rdi
	unsigned int v13; // eax
	__int64 v14; // rdi
	unsigned __int64 v15; // rdx
	unsigned __int64 v16; // rax
	signed __int64 v17; // rax
	signed __int64 v18; // rcx
	__int64 v19; // rax
	signed __int64 v20; // rsi
	unsigned __int64 v21; // r12
	unsigned __int64 v22; // rdi
	signed __int64 v23; // r11
	__int64 v24; // r9
	unsigned __int64 v25; // rcx
	__int64 v26; // r10
	__int128 v27; // t0
	signed __int64 v28; // rax
	unsigned __int64 v29; // rsi
	unsigned __int64 v30; // rsi
	unsigned __int64 v31; // rsi
	unsigned __int64 v32; // rbx
	int v33; // edi
	unsigned int v34; // edi
	unsigned __int64 v35; // rdi
	unsigned __int64 v36; // rdi
	unsigned __int64 v37; // rdi
	unsigned __int64 v38; // rsi
	unsigned __int64 v39; // rsi
	unsigned __int64 v40; // rsi
	signed __int64 v41; // rdi
	signed __int64 v42; // rsi
	unsigned int v43; // esi
	signed __int64 v44; // rdi
	signed __int64 v45; // rbx
	unsigned __int64 v46; // rbp
	unsigned __int64 v47; // rbx
	unsigned int v48; // ecx
	unsigned int v49; // ecx
	unsigned __int64 v50; // rcx
	__int64 v51; // rcx
	__int64 v52; // r12
	unsigned int v53; // ebx
	unsigned __int64 v54; // rbx
	unsigned int v55; // eax
	unsigned __int64 v56; // rax
	unsigned int v57; // esi
	__int64 v58; // rax
	__int64 v59; // rax
	unsigned __int64 v60; // rax
	unsigned int v61; // ecx
	unsigned __int64 v62; // rcx
	signed __int64 v63; // rax
	unsigned __int64 v64; // rcx
	unsigned __int64 v65; // rcx
	unsigned __int64 v66; // rax
	unsigned __int64 v67; // rsi
	unsigned __int64 v68; // rsi
	__int64 v69; // rcx
	unsigned __int64 v70; // rcx
	unsigned __int64 v71; // rax
	unsigned __int64 v72; // rcx
	unsigned __int64 v73; // rcx
	unsigned __int64 v74; // rcx
	unsigned __int64 v75; // rcx
	unsigned __int64 v76; // rax
	unsigned __int64 v77; // rax
	unsigned __int64 v78; // rax
	unsigned __int64 v79; // rax
	__int64 v80; // rax
	unsigned __int64 v81; // rcx
	unsigned __int64 v82; // rax
	unsigned __int64 v83; // rsi
	unsigned __int64 v84; // rax
	signed __int64 v85; // rax
	unsigned __int64 v86; // rax
	unsigned __int64 v87; // rax
	unsigned __int64 v88; // rax
	__int64 v89; // rax
	unsigned __int64 v90; // rax
	__int64 v91; // rcx
	__int64 v92; // rax
	__int64 v93; // rbx
	__int64 v94; // rdx
	unsigned __int64 v95; // rax
	__int64 v97; // rsi
	unsigned __int64 v98; // rax
	__int64 v99; // rbx
	__int64 v100; // rax
	signed __int64 v101; // rbp
	unsigned __int64 v102; // r12
	__int64 v103; // rsi
	__int64 v104; // rcx
	unsigned int v105; // edi
	__int64 v106; // rdi
	unsigned __int64 v107; // rsi
	unsigned __int64 v108; // rsi
	__int64 v109; // rax
	__int64 v110; // rcx
	__int64 v111; // rbx
	__int64 v113; // [rsp+0h] [rbp-230h]
	__int64 v114; // [rsp+8h] [rbp-228h]
	__int64 v115; // [rsp+10h] [rbp-220h]
	__int64 v116; // [rsp+18h] [rbp-218h]
	__int64 v117; // [rsp+20h] [rbp-210h]
	__int64 v118; // [rsp+28h] [rbp-208h]
	__int64 v119; // [rsp+30h] [rbp-200h]
	__int64 v120; // [rsp+38h] [rbp-1F8h]
	__int64 v121; // [rsp+40h] [rbp-1F0h]
	__int64 v122; // [rsp+48h] [rbp-1E8h]
	__int64 v123; // [rsp+50h] [rbp-1E0h]
	unsigned __int64 v124; // [rsp+58h] [rbp-1D8h]
	unsigned __int64 v125; // [rsp+60h] [rbp-1D0h]
	__int64 v126; // [rsp+68h] [rbp-1C8h]
	uint64_t v127; // [rsp+70h] [rbp-1C0h]
	__int64 v128; // [rsp+78h] [rbp-1B8h]
	uint64_t v129; // [rsp+80h] [rbp-1B0h]
	uint64_t v130; // [rsp+88h] [rbp-1A8h]
	uint64_t v131; // [rsp+90h] [rbp-1A0h]
	__int64 v132; // [rsp+98h] [rbp-198h]
	__int64 v133; // [rsp+A0h] [rbp-190h]
	__int64 v134; // [rsp+A8h] [rbp-188h]
	__int64 v135; // [rsp+B0h] [rbp-180h]
	__int64 v136; // [rsp+B8h] [rbp-178h]
	__int64 v137; // [rsp+C0h] [rbp-170h]
	__int64 v138; // [rsp+C8h] [rbp-168h]
	__int64 v139; // [rsp+D0h] [rbp-160h]
	__int64 v140; // [rsp+D8h] [rbp-158h]
	__int64 v141; // [rsp+E0h] [rbp-150h]
	__int64 v142; // [rsp+E8h] [rbp-148h]
	__int64 v143[27]; // [rsp+F0h] [rbp-140h]
	unsigned __int64 v144; // [rsp+1C8h] [rbp-68h]
	unsigned __int64 v145; // [rsp+1D0h] [rbp-60h]
	__int64 v146; // [rsp+1D8h] [rbp-58h]
	unsigned __int64 v147; // [rsp+1E0h] [rbp-50h]
	__int64 v148; // [rsp+1E8h] [rbp-48h]

	v1 = *Flag;
	v127 = v1;
	v2 = Flag[1];
	v128 = v2;
	v3 = Flag[2];
	v129 = Flag[2];
	v4 = Flag[3];
	v130 = Flag[3];
	v131 = v1;
	v132 = v2;
	v133 = 0i64;
	v5 = 8i64;
	v6 = 0i64;
	do
	{
		v7 = v3;
		*(&v125 + v5) = v2;
		*(&v124 + v5) = v1;
		*(&v123 + v5) = v6;
		*(&v126 + v5) = 0i64;
		*(&v127 + v5) = v3;
		*(&v128 + v5) = v4;
		v8 = v5 + 3;
		v3 = v1;
		v124 = 0i64;
		while (1)
		{
			*(&v126 + v8) = 4i64;
			v123 = v8 + 3;
			v125 = v8;
			*(&v132 + v8) = 8i64;
			v9 = -4i64;
			do
			{
				v10 = v4;
				v11 = v7 ^ ((v7 >> 32) + v4);
				v12 = (unsigned int)v4 & HIDWORD(v7);
				v13 = v11 + *(_DWORD *)((char *)Table_00400648 + (((v4 & 0xFF00000000i64) + 115964116992i64) >> 30));
				v4 = (unsigned int)(v4 - v11) | ((v13 ^ (v4 >> 40)) << 32);
				v14 = v12 << 32;
				v7 = v14 | v13;
				++v9;
			} while (v9);
			v15 = v125;
			*(&v125 + v125) = v4;
			*(&v124 + v15) = v7;
			*(&v127 + v15) = 0i64;
			*(&v128 + v15) = v10 >> 32;
			*(&v129 + v15) = v14;
			*(&v130 + v15) = 32i64;
			*(&v131 + v15) = 32i64;
			v16 = v124;
			*(&v126 + v15) = v124;
			if (v16)
			{
				v3 = *(&v118 + v15);
				v17 = -7i64;
			}
			else
			{
				v17 = -4i64;
			}
			v18 = v123;
			*(&v126 + v15) = v3;
			v19 = *(&v126 + v15 + v17);
			*(&v128 + v15) = v3;
			*(&v127 + v15) = v19;
			*(&v126 + v15) = 0i64;
			v20 = 0i64;
			do
			{
				v21 = *(&v121 + v18);
				v22 = *(&v122 + v18);
				*(&v128 + v18) = v22;
				*(&v127 + v18) = v21;
				*(&v126 + v18) = v20;
				*(&v129 + v18) = 0i64;
				v23 = v18 + 5;
				*(&v142 + v18) = 3i64;
				v123 = v18;
				v143[v18] = 26i64;
				v24 = 0i64;
				v148 = v20;
				do
				{
					v25 = (unsigned int)v21 ^ (unsigned __int64)*(unsigned int *)((char *)Table_00400648
						+ (((v24 << 32) + 51539607552i64) >> 30));
					v147 = v21 >> 32;
					v125 = (unsigned int)(HIDWORD(v21) + 1165518130);
					v146 = (unsigned int)v22;
					v145 = v22 >> 32;
					*(_QWORD *)&v27 = v22;
					*((_QWORD *)&v27 + 1) = v22 >> 32;
					v26 = v27 >> 60;
					v144 = v25;
					v28 = v25 - ((v21 >> 32) + 1165518130);
					v29 = 3723938192i64;
					v124 = (unsigned int)v22 ^ v125;
					if ((v124 & 0x80000000) == 0i64)
						v29 = 1890974914i64;
					v30 = v29 - (v29 >> 2);
					v31 = -65151
						* (((unsigned int)(((v30 >> 26) | ((v30 & 0x3FFFFFE) << 6)) >> 2) | ((unsigned int)(v30 >> 26) << 30)) ^ ((unsigned int)(v30 >> 26) | ((v30 & 0x3FFFFFE) << 6)))
						+ (-2084832
							* (((unsigned int)(((v30 >> 26) | ((v30 & 0x3FFFFFE) << 6)) >> 2) | ((unsigned int)(v30 >> 26) << 30)) ^ ((unsigned int)(v30 >> 26) | ((v30 & 0x3FFFFFE) << 6))) | (-65151 * (((unsigned int)(((v30 >> 26) | ((v30 & 0x3FFFFFE) << 6)) >> 2) | ((unsigned int)(v30 >> 26) << 30)) ^ ((unsigned int)(v30 >> 26) | ((v30 & 0x3FFFFFE) << 6))) >> 27));
					v32 = v31 ^ ((v31 >> 23) | ((v31 & 0x7FFFFF) << 9));
					LODWORD(v32) = (v32 ^ 8 * v32) + (32 * (v32 ^ 8 * v32) | ((v32 ^ 8 * v32) >> 27));
					v33 = (v32 + (((_DWORD)v32 << 26) | ((unsigned int)v32 >> 6))) ^ (((unsigned int)v32
						+ (((_DWORD)v32 << 26) | ((unsigned int)v32 >> 6))) >> 3);
					v34 = v33 - ((((unsigned int)v32 + (((_DWORD)v32 << 26) | ((unsigned int)v32 >> 6))) >> 30) + 4 * v33);
					v35 = 513 * v34 ^ (((unsigned __int64)(513 * v34) >> 23) | 262656 * v34);
					LODWORD(v31) = 513
						* ((((unsigned int)((v35 ^ (v35 >> 3)) >> 3) | (((unsigned int)v35 ^ (unsigned int)(v35 >> 3)) << 29)) << 6) | (((unsigned int)((v35 ^ (v35 >> 3)) >> 3) | (((unsigned int)v35 ^ (unsigned int)(v35 >> 3)) << 29)) >> 26));
					v36 = (unsigned __int64)(513
						* ((((unsigned int)((v35 ^ (v35 >> 3)) >> 3) | (((unsigned int)v35 ^ (unsigned int)(v35 >> 3)) << 29)) << 6) | (((unsigned int)((v35 ^ (v35 >> 3)) >> 3) | (((unsigned int)v35 ^ (unsigned int)(v35 >> 3)) << 29)) >> 26))) >> 3;
					v37 = ((v36 | ((v31 & 7) << 29)) >> 26) | ((v36 & 0x3FFFFFF) << 6);
					LODWORD(v31) = (v37 ^ (v37 >> 3) ^ (((v37 ^ (v37 >> 3)) >> 23) | (((unsigned int)v37 ^ (unsigned int)(v37 >> 3)) << 9)))
						- (((v37 ^ (v37 >> 3) ^ (((v37 ^ (v37 >> 3)) >> 23) | ((unsigned __int64)(((unsigned int)v37 ^ (unsigned int)(v37 >> 3)) & 0x7FFFFF) << 9))) >> 6) | (((unsigned int)v37 ^ (unsigned int)(v37 >> 3) ^ ((unsigned int)((v37 ^ (v37 >> 3)) >> 23) | (((unsigned int)v37 ^ (unsigned int)(v37 >> 3)) << 9))) << 26));
					v38 = (((unsigned int)v31 + (((_DWORD)v31 << 26) | ((unsigned int)v31 >> 6)) + 1519294305) >> 10)
						+ (((_DWORD)v31 << 26) | ((unsigned int)v31 >> 6))
						+ (_DWORD)v31
						+ 1519294305;
					LODWORD(v38) = ((v38 >> 3) | ((unsigned __int8)v38 << 29))
						- ((((v38 >> 3) | ((v38 & 7) << 29)) >> 6) | ((unsigned int)(v38 >> 3) << 26));
					v39 = ((unsigned int)v38 + (32 * (_DWORD)v38 | ((unsigned int)v38 >> 27)) - 770681577 + 754100993) ^ 0xD2105517i64;
					LODWORD(v39) = ((((unsigned int)v39 + (32 * (_DWORD)v39 | (unsigned int)(v39 >> 27))) ^ 0xD2105517ui64) >> 26)
						+ ((((_DWORD)v39 + (32 * (_DWORD)v39 | (unsigned int)(v39 >> 27))) ^ 0xD2105517) << 6)
						+ 1519294305;
					v40 = ((((_DWORD)v39 << 6) | ((unsigned int)v39 >> 26)) << 6) | ((unsigned int)v39 >> 20) & 0x3F;
					v41 = (-127i64
						* (513
							* ((_DWORD)v40
								- (unsigned int)(v40 >> 2)
								+ ((((_DWORD)v40 - (unsigned int)(v40 >> 2)) << 26) | (((unsigned int)v40 - (unsigned int)(v40 >> 2)) >> 6))
								+ 1519294305)
							- (513
								* ((_DWORD)v40
									- (unsigned int)(v40 >> 2)
									+ ((((_DWORD)v40 - (unsigned int)(v40 >> 2)) << 26) | (((unsigned int)v40 - (unsigned int)(v40 >> 2)) >> 6))
									+ 1519294305) >> 2)) ^ -1016
						* (513
							* ((_DWORD)v40
								- (unsigned int)(v40 >> 2)
								+ ((((_DWORD)v40 - (unsigned int)(v40 >> 2)) << 26) | (((unsigned int)v40
									- (unsigned int)(v40 >> 2)) >> 6))
								+ 1519294305)
							- (513
								* ((_DWORD)v40
									- (unsigned int)(v40 >> 2)
									+ ((((_DWORD)v40 - (unsigned int)(v40 >> 2)) << 26) | (((unsigned int)v40
										- (unsigned int)(v40 >> 2)) >> 6))
									+ 1519294305) >> 2)))
						+ 1519294305;
					v42 = v41
						+ (((-127
							* (513
								* ((_DWORD)v40
									- (unsigned int)(v40 >> 2)
									+ ((((_DWORD)v40 - (unsigned int)(v40 >> 2)) << 26) | (((unsigned int)v40 - (unsigned int)(v40 >> 2)) >> 6))
									+ 1519294305)
								- (513
									* ((_DWORD)v40
										- (unsigned int)(v40 >> 2)
										+ ((((_DWORD)v40 - (unsigned int)(v40 >> 2)) << 26) | (((unsigned int)v40 - (unsigned int)(v40 >> 2)) >> 6))
										+ 1519294305) >> 2)) ^ -1016
							* (513
								* ((_DWORD)v40
									- (unsigned int)(v40 >> 2)
									+ ((((_DWORD)v40 - (unsigned int)(v40 >> 2)) << 26) | (((unsigned int)v40
										- (unsigned int)(v40 >> 2)) >> 6))
									+ 1519294305)
								- (513
									* ((_DWORD)v40
										- (unsigned int)(v40 >> 2)
										+ ((((_DWORD)v40 - (unsigned int)(v40 >> 2)) << 26) | (((unsigned int)v40
											- (unsigned int)(v40 >> 2)) >> 6))
										+ 1519294305) >> 2)))
							+ 1519294305) >> 10)
						+ 1519294305;
					v43 = v42 - (((unsigned int)v42 >> 30) + 4 * v42);
					v44 = -6i64;
					v45 = v43;
					do
					{
						v46 = v45 ^ 0xD2105517i64 ^ ((((unsigned int)v45 ^ 0xD2105517) << 9) | (unsigned int)((v45 ^ 0xD2105517ui64) >> 23));
						LODWORD(v46) = v46 - (4 * v46 | (v46 >> 30));
						v47 = (((_DWORD)v46
							+ (((_DWORD)v46 << 26) | ((unsigned int)v46 >> 6))
							+ (((unsigned int)v46 + (((_DWORD)v46 << 26) | ((unsigned int)v46 >> 6))) >> 10)) ^ ((unsigned __int64)((_DWORD)v46 + (((_DWORD)v46 << 26) | ((unsigned int)v46 >> 6)) + (((unsigned int)v46 + (((_DWORD)v46 << 26) | ((unsigned int)v46 >> 6))) >> 10)) >> 3)) >> 3;
						v48 = ((_DWORD)v47 << 6)
							+ ((v47 | (((((_DWORD)v46
								+ (((_DWORD)v46 << 26) | ((unsigned int)v46 >> 6))
								+ (((unsigned int)v46 + (((_DWORD)v46 << 26) | ((unsigned int)v46 >> 6))) >> 10)) ^ ((unsigned __int64)((_DWORD)v46 + (((_DWORD)v46 << 26) | ((unsigned int)v46 >> 6)) + (((unsigned int)v46 + (((_DWORD)v46 << 26) | ((unsigned int)v46 >> 6))) >> 10)) >> 3)) & 7) << 29)) >> 26)
							+ 1519294305;
						v49 = (32 * v48 | (v48 >> 27)) + v48 + 1519294305;
						v50 = ((v49 + ((v49 << 26) | (v49 >> 6)) + 1502713721) ^ ((v49 + ((v49 << 26) | (v49 >> 6)) + 1502713721) >> 3))
							- 770681577
							+ 754100993;
						v51 = (((unsigned int)(v50 >> 3) | ((unsigned __int8)v50 << 29)) ^ 8
							* ((unsigned int)(v50 >> 3) | ((unsigned __int8)v50 << 29)))
							+ (unsigned int)((((v50 >> 3) | ((v50 & 7) << 29)) ^ 8 * ((v50 >> 3) | ((v50 & 7) << 29))) >> 10);
						v45 = v51 ^ 8 * v51;
						++v44;
					} while (v44);
					v52 = (unsigned int)v28;
					v53 = -127 * ((v43 ^ v45) - ((v43 ^ (unsigned __int64)v45) >> 2) + 1502713721);
					v54 = v53 - ((v53 << 26) | (v53 >> 6));
					v55 = -127
						* ((v54 >> 26)
							+ ((_DWORD)v54 << 6)
							+ 1519294305
							+ (32 * ((v54 >> 26) + ((_DWORD)v54 << 6) + 1519294305) | (((unsigned int)(v54 >> 26)
								+ ((_DWORD)v54 << 6)
								+ 1519294305) >> 27)))
						+ ((-127
							* ((unsigned int)(v54 >> 26)
								+ ((_DWORD)v54 << 6)
								+ 1519294305
								+ (32 * ((unsigned int)(v54 >> 26) + ((_DWORD)v54 << 6) + 1519294305) | (((unsigned int)(v54 >> 26)
									+ ((_DWORD)v54 << 6)
									+ 1519294305) >> 27))) >> 6) | (((unsigned int)(v54 >> 26) + ((_DWORD)v54 << 6) + 1519294305 + (32 * ((unsigned int)(v54 >> 26) + ((_DWORD)v54 << 6) + 1519294305) | (((unsigned int)(v54 >> 26) + ((_DWORD)v54 << 6) + 1519294305) >> 27))) << 26));
					v56 = v55 - ((v55 << 26) | (v55 >> 6));
					v57 = (((_DWORD)v56 << 6) | (v56 >> 26))
						+ (((unsigned int)v56 >> 21) & 0x1F | 32 * (((_DWORD)v56 << 6) | (v56 >> 26)));
					v58 = 513
						* (((unsigned int)((((unsigned __int64)v57 >> 3) | ((unsigned __int64)(v57 & 7) << 29)) >> 6) | (v57 >> 3 << 26))
							+ ((v57 >> 3) | ((unsigned __int8)v57 << 29)));
					LODWORD(v58) = 513
						* ((((v58 ^ (unsigned __int64)(8 * v58)) >> 26) | (((unsigned int)v58 ^ 8 * (_DWORD)v58) << 6)) ^ 0xD2105517 ^ ((((((v58 ^ (unsigned __int64)(8 * v58)) >> 26) | (((v58 ^ 8 * v58) & 0x3FFFFFF) << 6)) ^ 0xD2105517) >> 23) | ((((unsigned int)((v58 ^ (unsigned __int64)(8 * v58)) >> 26) | (((unsigned int)v58 ^ 8 * (_DWORD)v58) << 6)) ^ 0xD2105517) << 9)));
					LODWORD(v58) = ((((_DWORD)v58
						+ ((unsigned int)v58 >> 10)
						- ((((_DWORD)v58 + ((unsigned int)v58 >> 10)) << 26) | (((unsigned int)v58
							+ ((unsigned int)v58 >> 10)) >> 6))) << 6) | (((_DWORD)v58 + ((unsigned int)v58 >> 10) - ((((_DWORD)v58 + ((unsigned int)v58 >> 10)) << 26) | (((unsigned int)v58 + ((unsigned int)v58 >> 10)) >> 6))) >> 26))
						- 770681577
						+ 754100993;
					v59 = (unsigned int)v58 + (((_DWORD)v58 << 26) | ((unsigned int)v58 >> 6)) + 1519294305;
					v60 = ((unsigned int)v59 ^ 8 * (_DWORD)v59)
						+ (32 * ((unsigned int)v59 ^ 8 * (_DWORD)v59) | (unsigned int)((v59 ^ (unsigned __int64)(8 * v59)) >> 27));
					v61 = (((unsigned int)v60 ^ ((unsigned int)(v60 >> 2) | ((v60 & 3) << 30)) ^ ((unsigned int)((v60 ^ ((v60 >> 2) | ((v60 & 3) << 30))) >> 2) | ((((unsigned __int8)v60 ^ (unsigned __int8)(v60 >> 2)) & 3) << 30))) << 6) | ((v60 ^ ((v60 >> 2) | ((v60 & 3) << 30)) ^ (((v60 ^ ((v60 >> 2) | ((v60 & 3) << 30))) >> 2) | ((unsigned __int64)(((unsigned __int8)v60 ^ (unsigned __int8)(v60 >> 2)) & 3) << 30))) >> 26);
					v62 = v61 - ((v61 << 26) | (v61 >> 6));
					v63 = (v62 ^ (v62 >> 3))
						- ((v62 ^ (v62 >> 3)) >> 2)
						+ 4278386712u
						- ((((unsigned int)v62 ^ (unsigned int)(v62 >> 3))
							- (unsigned int)((v62 ^ (v62 >> 3)) >> 2)
							- 770681577
							+ 754100993) >> 2);
					LODWORD(v63) = v63
						- (((((unsigned int)v62 ^ (unsigned int)(v62 >> 3))
							- (unsigned int)((v62 ^ (v62 >> 3)) >> 2)
							- 770681577
							+ 754100993
							- ((((unsigned int)v62 ^ (unsigned int)(v62 >> 3))
								- (unsigned int)((v62 ^ (v62 >> 3)) >> 2)
								- 770681577
								+ 754100993) >> 2)) >> 30)
							+ 4 * v63);
					v64 = -127
						* ((_DWORD)v63 + ((unsigned int)v63 >> 10) - (((unsigned int)v63 + ((unsigned int)v63 >> 10)) >> 2));
					v65 = 513
						* (((unsigned int)v64 ^ ((-127
							* ((_DWORD)v63
								+ ((unsigned int)v63 >> 10)
								- (((unsigned int)v63 + ((unsigned int)v63 >> 10)) >> 2)) >> 23) | ((_DWORD)v64 << 9)))
							+ (unsigned int)((v64 ^ ((v64 >> 23) | ((v64 & 0x7FFFFF) << 9))) >> 10)) ^ 0xD2105517i64;
					LODWORD(v63) = (v65 ^ ((v65 >> 23) | ((_DWORD)v65 << 9)))
						- (((v65 ^ ((v65 >> 23) | ((v65 & 0x7FFFFF) << 9))) >> 6) | (((unsigned int)v65 ^ ((unsigned int)(v65 >> 23) | ((_DWORD)v65 << 9))) << 26))
						+ 1519294305;
					v66 = ((unsigned int)((((unsigned __int64)(unsigned int)v63 >> 3) | ((unsigned __int64)(v63 & 7) << 29)) >> 6) | ((unsigned int)v63 >> 3 << 26))
						+ (((unsigned int)v63 >> 3) | ((unsigned __int8)v63 << 29));
					v67 = (((v66 & 0x3FFFFFF) << 6) | (v66 >> 26)) ^ (((v66 & 0x3FFFFFF) << 6 >> 23) | ((unsigned __int64)((((_DWORD)v66 << 6) | (unsigned int)(v66 >> 26)) & 0x7FFFFF) << 9)) ^ 0xD2105517;
					v68 = (-127 * ((((unsigned int)v67 ^ 8 * (_DWORD)v67) << 6) | (unsigned int)((v67 ^ 8 * v67) >> 26))
						- ((-127 * ((((unsigned int)v67 ^ 8 * (_DWORD)v67) << 6) | (unsigned int)((v67 ^ 8 * v67) >> 26)) >> 30)
							- 508 * ((((unsigned int)v67 ^ 8 * (_DWORD)v67) << 6) | (unsigned int)((v67 ^ 8 * v67) >> 26)))) ^ (((unsigned __int64)(-127 * ((((unsigned int)v67 ^ 8 * (_DWORD)v67) << 6) | (unsigned int)((v67 ^ 8 * v67) >> 26)) - ((-127 * ((((unsigned int)v67 ^ 8 * (_DWORD)v67) << 6) | (unsigned int)((v67 ^ 8 * v67) >> 26)) >> 30) - 508 * ((((unsigned int)v67 ^ 8 * (_DWORD)v67) << 6) | (unsigned int)((v67 ^ 8 * v67) >> 26)))) >> 23) | ((unsigned __int64)((-127 * ((((unsigned int)v67 ^ 8 * (_DWORD)v67) << 6) | (unsigned int)((v67 ^ 8 * v67) >> 26)) - ((-127 * ((((unsigned int)v67 ^ 8 * (_DWORD)v67) << 6) | (unsigned int)((v67 ^ 8 * v67) >> 26)) >> 30) - 508 * ((((unsigned int)v67 ^ 8 * (_DWORD)v67) << 6) | (unsigned int)((v67 ^ 8 * v67) >> 26)))) & 0x7FFFFF) << 9));
					v69 = (_DWORD)v68
						+ ((unsigned int)(v68 >> 6) | ((_DWORD)v68 << 26))
						- (((unsigned int)v68 + ((unsigned int)(v68 >> 6) | ((_DWORD)v68 << 26))) >> 2);
					v70 = v69 ^ 8 * v69 ^ ((v69 ^ (unsigned __int64)(8 * v69)) >> 3);
					v71 = ((unsigned __int64)(((unsigned int)v70 ^ (unsigned int)(v70 >> 3))
						- ((unsigned int)((v70 ^ (v70 >> 3)) >> 6) | (((unsigned int)v70 ^ (unsigned int)(v70 >> 3)) << 26))) >> 3) | (((((unsigned int)v70 ^ (unsigned int)(v70 >> 3)) - ((unsigned int)((v70 ^ (v70 >> 3)) >> 6) | (((unsigned int)v70 ^ (unsigned int)(v70 >> 3)) << 26))) & 7i64) << 29);
					LODWORD(v70) = (((v71 ^ 8 * v71) >> 26) | (((unsigned int)v71 ^ 8 * (_DWORD)v71) << 6))
						- ((((v71 ^ 8 * v71) >> 26) | (((v71 ^ 8 * v71) & 0x3FFFFFF) << 6)) >> 2);
					LODWORD(v71) = (v70 ^ (((_DWORD)v70 << 9) | ((unsigned int)v70 >> 23))) + 1519294305;
					LODWORD(v71) = v71
						- (((unsigned int)v71 >> 30)
							+ 4 * v71)
						- (((unsigned int)v71 - (((unsigned int)v71 >> 30) + 4 * (_DWORD)v71)) >> 2);
					LODWORD(v71) = -65151
						* ((v71 + ((unsigned int)v71 >> 10)) ^ ((((_DWORD)v71 + ((unsigned int)v71 >> 10)) << 30) | (((unsigned int)v71 + ((unsigned int)v71 >> 10)) >> 2)));
					LODWORD(v71) = (((unsigned int)v71 >> 20) & 0x3F | ((((_DWORD)v71 << 6) | ((unsigned int)v71 >> 26)) << 6))
						+ ((((_DWORD)v71 << 6) | ((unsigned int)v71 >> 26)) & 0x3FFFFFF | ((unsigned int)v71 >> 20 << 26));
					v72 = (unsigned int)v71 + (((_DWORD)v71 << 26) | ((unsigned int)v71 >> 6));
					LODWORD(v72) = (v72 ^ ((((unsigned int)v71 + (((_DWORD)v71 << 26) | ((unsigned int)v71 >> 6))) >> 23) | ((_DWORD)v72 << 9)))
						+ (((v72 ^ ((v72 >> 23) | ((v72 & 0x7FFFFF) << 9))) >> 6) | (((unsigned int)v72 ^ ((((unsigned int)v71 + (((_DWORD)v71 << 26) | ((unsigned int)v71 >> 6))) >> 23) | ((_DWORD)v72 << 9))) << 26));
					v73 = 513
						* (513 * ((unsigned int)v72 ^ 8 * (_DWORD)v72) ^ 4104 * ((unsigned int)v72 ^ 8 * (_DWORD)v72) ^ (unsigned int)((513 * ((unsigned int)v72 ^ 8 * (_DWORD)v72) ^ 8 * (unsigned __int64)(513 * ((unsigned int)v72 ^ 8 * (_DWORD)v72))) >> 3))
						+ (16416
							* (513 * ((unsigned int)v72 ^ 8 * (_DWORD)v72) ^ 4104 * ((unsigned int)v72 ^ 8 * (_DWORD)v72) ^ (unsigned int)((513 * ((unsigned int)v72 ^ 8 * (_DWORD)v72) ^ 8 * (unsigned __int64)(513 * ((unsigned int)v72 ^ 8 * (_DWORD)v72))) >> 3)) | (513 * (513 * ((unsigned int)v72 ^ 8 * (_DWORD)v72) ^ 4104 * ((unsigned int)v72 ^ 8 * (_DWORD)v72) ^ (unsigned int)((513 * ((unsigned int)v72 ^ 8 * (_DWORD)v72) ^ 8 * (unsigned __int64)(513 * ((unsigned int)v72 ^ 8 * (_DWORD)v72))) >> 3)) >> 27));
					v74 = 513
						* (((unsigned int)(v73 >> 26) | ((_DWORD)v73 << 6)) ^ (unsigned int)(((v73 >> 26) | ((v73 & 0x3FFFFFF) << 6)) >> 3));
					LODWORD(v71) = v74 ^ ((v74 >> 2) | ((v74 & 3) << 30)) ^ 0xD2105517 ^ ((v74 ^ ((v74 >> 2) | ((v74 & 3) << 30)) ^ 0xD2105517) >> 3);
					LODWORD(v74) = (((((unsigned int)v71 ^ 8 * (_DWORD)v71)
						- 770681577
						+ 754100993
						+ (32 * (((unsigned int)v71 ^ 8 * (_DWORD)v71) - 770681577 + 754100993) | ((((unsigned int)v71 ^ 8 * (_DWORD)v71) - 770681577 + 754100993) >> 27))) >> 26) | ((((unsigned int)v71 ^ 8 * (_DWORD)v71) - 770681577 + 754100993 + (32 * (((unsigned int)v71 ^ 8 * (_DWORD)v71) - 770681577 + 754100993) | ((((unsigned int)v71 ^ 8 * (_DWORD)v71) - 770681577 + 754100993) >> 27))) << 6))
						- ((((unsigned __int64)(((unsigned int)v71 ^ 8 * (_DWORD)v71)
							- 770681577
							+ 754100993
							+ (32 * (((unsigned int)v71 ^ 8 * (_DWORD)v71) - 770681577 + 754100993) | ((((unsigned int)v71 ^ 8 * (_DWORD)v71) - 770681577 + 754100993) >> 27))) >> 26) | ((unsigned __int64)((((unsigned int)v71 ^ 8 * (_DWORD)v71) - 770681577 + 754100993 + (32 * (((unsigned int)v71 ^ 8 * (_DWORD)v71) - 770681577 + 754100993) | ((((unsigned int)v71 ^ 8 * (_DWORD)v71) - 770681577 + 754100993) >> 27))) & 0x3FFFFFF) << 6)) >> 2);
					LODWORD(v71) = v74 + ((unsigned int)v74 >> 10);
					v75 = (unsigned __int64)((((unsigned int)v71 >> 10)
						+ (_DWORD)v71
						+ 1519294305
						+ (32 * (((unsigned int)v71 >> 10) + (_DWORD)v71 + 1519294305) | ((((unsigned int)v71 >> 10) + (unsigned int)v71 + 1519294305) >> 27))) & 0x3FFFFFF) << 6;
					v76 = v75 | ((unsigned __int64)(((unsigned int)v71 >> 10)
						+ (_DWORD)v71
						+ 1519294305
						+ (32 * (((unsigned int)v71 >> 10) + (_DWORD)v71 + 1519294305) | ((((unsigned int)v71 >> 10) + (unsigned int)v71 + 1519294305) >> 27))) >> 26);
					LODWORD(v76) = v76 - ((v75 >> 30) + 4 * v76);
					v77 = -127 * (((_DWORD)v76 + (32 * (_DWORD)v76 | ((unsigned int)v76 >> 27))) ^ 0xD2105517);
					v78 = -127
						* ((((_DWORD)v77 << 6) | (unsigned int)(v77 >> 26))
							+ (((unsigned int)v77 >> 21) & 0x1F | 32 * (((_DWORD)v77 << 6) | (unsigned int)(v77 >> 26)))) ^ ((unsigned __int64)(-127 * ((((_DWORD)v77 << 6) | (unsigned int)(v77 >> 26)) + (((unsigned int)v77 >> 21) & 0x1F | 32 * (((_DWORD)v77 << 6) | (unsigned int)(v77 >> 26))))) >> 3) ^ 0xD2105517;
					LODWORD(v75) = (v78 ^ (v78 >> 3))
						- (((v78 ^ (v78 >> 3)) >> 6) | (((unsigned int)v78 ^ (unsigned int)(v78 >> 3)) << 26));
					LODWORD(v78) = (((unsigned int)v75 >> 3) | ((unsigned __int8)v75 << 29))
						+ (((((unsigned __int64)(unsigned int)v75 >> 3) | ((v75 & 7) << 29)) >> 6) | ((unsigned int)v75 >> 3 << 26));
					v79 = ((unsigned int)v78 - (((_DWORD)v78 << 26) | ((unsigned int)v78 >> 6))) ^ 0xD2105517i64;
					LODWORD(v68) = v79 ^ ((v79 >> 2) | ((_DWORD)v79 << 30));
					v80 = ((unsigned int)(v68 + 1519294305) >> 10) + (unsigned int)v68 + 1519294305;
					v81 = (unsigned __int64)((((unsigned int)v80 ^ 8 * (_DWORD)v80)
						- ((unsigned int)((v80 ^ (unsigned __int64)(8 * v80)) >> 6) | (((unsigned int)v80 ^ 8 * (_DWORD)v80) << 26))) & 0x3FFFFFF) << 6;
					v82 = v81 | ((unsigned __int64)(((unsigned int)v80 ^ 8 * (_DWORD)v80)
						- ((unsigned int)((v80 ^ (unsigned __int64)(8 * v80)) >> 6) | (((unsigned int)v80 ^ 8 * (_DWORD)v80) << 26))) >> 26);
					v83 = ((unsigned int)v82 ^ ((unsigned int)(v81 >> 23) | ((_DWORD)v82 << 9)))
						- (unsigned int)((v82 ^ ((v81 >> 23) | ((v82 & 0x7FFFFF) << 9))) >> 2);
					LODWORD(v82) = (v83 ^ (v83 >> 3)) - ((v83 >> 30) + 4 * (v83 ^ (v83 >> 3)));
					LODWORD(v82) = v82 + (((unsigned int)v82 >> 6) | ((_DWORD)v82 << 26)) - 770681577 + 754100993;
					LODWORD(v81) = v82 + (((unsigned int)v82 >> 6) | ((_DWORD)v82 << 26));
					v84 = (unsigned int)v82 + (((unsigned int)v82 >> 6) | ((_DWORD)v82 << 26));
					LODWORD(v84) = v81 + (32 * v84 | (v84 >> 27)) - 770681577 + 754100993;
					LODWORD(v84) = 513
						* (16129
							* ((((_DWORD)v84 - (((unsigned int)v84 >> 30) + 4 * (_DWORD)v84)) << 29) | (((unsigned int)v84 - (((unsigned int)v84 >> 30) + 4 * (_DWORD)v84)) >> 3))
							- 16580584)
						+ (513
							* (16129
								* ((((_DWORD)v84 - (((unsigned int)v84 >> 30) + 4 * (_DWORD)v84)) << 29) | (((unsigned int)v84 - (((unsigned int)v84 >> 30) + 4 * (_DWORD)v84)) >> 3))
								- 16580584) >> 10);
					LODWORD(v84) = -65151 * (v84 ^ (((_DWORD)v84 << 30) | ((unsigned int)v84 >> 2)));
					v85 = 513 * ((unsigned int)v84 ^ (((_DWORD)v84 << 30) | ((unsigned int)v84 >> 2))) ^ 0xD2105517i64;
					LODWORD(v85) = (((v85 ^ 8 * v85) - ((v85 ^ (unsigned __int64)(8 * v85)) >> 2)) ^ (((((unsigned int)v85 ^ 8 * (_DWORD)v85)
						- (unsigned int)((v85 ^ (unsigned __int64)(8 * v85)) >> 2)) >> 2) | (((((unsigned __int8)v85 ^ (unsigned __int8)(8 * v85)) - (unsigned __int8)((v85 ^ (unsigned __int64)(8 * v85)) >> 2)) & 3) << 30)))
						+ (((((unsigned int)v85 ^ 8 * (_DWORD)v85)
							- (unsigned int)((v85 ^ (unsigned __int64)(8 * v85)) >> 2)) ^ (((unsigned __int64)(((unsigned int)v85 ^ 8 * (_DWORD)v85) - (unsigned int)((v85 ^ (unsigned __int64)(8 * v85)) >> 2)) >> 2) | ((unsigned __int64)((((unsigned __int8)v85 ^ (unsigned __int8)(8 * v85)) - (unsigned __int8)((v85 ^ (unsigned __int64)(8 * v85)) >> 2)) & 3) << 30))) >> 10);
					v86 = -127
						* (513 * ((_DWORD)v85 - ((unsigned int)v85 >> 2))
							- 16580584
							- ((513 * ((unsigned int)v85 - ((unsigned int)v85 >> 2)) - 16580584) >> 2))
						+ (-4064
							* (513 * ((_DWORD)v85 - ((unsigned int)v85 >> 2))
								- 16580584
								- ((513 * ((unsigned int)v85 - ((unsigned int)v85 >> 2)) - 16580584) >> 2)) | (-127
									* (513
										* ((_DWORD)v85
											- ((unsigned int)v85 >> 2))
										- 16580584
										- ((513
											* ((unsigned int)v85
												- ((unsigned int)v85 >> 2))
											- 16580584) >> 2)) >> 27));
					LODWORD(v86) = (((v86 ^ ((v86 >> 23) | ((_DWORD)v86 << 9)))
						+ (((v86 ^ ((v86 >> 23) | ((v86 & 0x7FFFFF) << 9))) >> 6) | (((unsigned int)v86 ^ ((unsigned int)(v86 >> 23) | ((_DWORD)v86 << 9))) << 26))) ^ 8 * ((v86 ^ ((v86 >> 23) | ((_DWORD)v86 << 9))) + (((v86 ^ ((v86 >> 23) | ((v86 & 0x7FFFFF) << 9))) >> 6) | (((unsigned int)v86 ^ ((unsigned int)(v86 >> 23) | ((_DWORD)v86 << 9))) << 26))))
						+ 1502713721;
					LODWORD(v81) = -127 * (v86 + (((_DWORD)v86 << 26) | ((unsigned int)v86 >> 6)));
					v87 = -127 * ((unsigned int)v86 + (((_DWORD)v86 << 26) | ((unsigned int)v86 >> 6)));
					LODWORD(v87) = v81 + ((v87 >> 6) | ((_DWORD)v87 << 26));
					v88 = 513 * ((unsigned int)v87 ^ (((_DWORD)v87 << 30) | ((unsigned int)v87 >> 2)));
					LODWORD(v83) = (((v88 ^ ((v88 >> 23) | ((_DWORD)v88 << 9)))
						+ (((v88 ^ ((v88 >> 23) | ((v88 & 0x7FFFFF) << 9))) >> 6) | (((unsigned int)v88 ^ ((unsigned int)(v88 >> 23) | ((_DWORD)v88 << 9))) << 26))) ^ (((((unsigned int)v88 ^ ((unsigned int)(v88 >> 23) | ((_DWORD)v88 << 9))) + ((unsigned int)((v88 ^ ((v88 >> 23) | ((v88 & 0x7FFFFF) << 9))) >> 6) | (((unsigned int)v88 ^ ((unsigned int)(v88 >> 23) | ((_DWORD)v88 << 9))) << 26))) >> 2) | (((((unsigned __int8)v88 ^ (unsigned __int8)(v88 >> 23)) + (unsigned __int8)((v88 ^ ((v88 >> 23) | ((v88 & 0x7FFFFF) << 9))) >> 6)) & 3) << 30)))
						- (((((unsigned int)v88 ^ ((unsigned int)(v88 >> 23) | ((_DWORD)v88 << 9)))
							+ ((unsigned int)((v88 ^ ((v88 >> 23) | ((v88 & 0x7FFFFF) << 9))) >> 6) | (((unsigned int)v88 ^ ((unsigned int)(v88 >> 23) | ((_DWORD)v88 << 9))) << 26))) ^ (((unsigned __int64)(((unsigned int)v88 ^ ((unsigned int)(v88 >> 23) | ((_DWORD)v88 << 9))) + ((unsigned int)((v88 ^ ((v88 >> 23) | ((v88 & 0x7FFFFF) << 9))) >> 6) | (((unsigned int)v88 ^ ((unsigned int)(v88 >> 23) | ((_DWORD)v88 << 9))) << 26))) >> 2) | ((unsigned __int64)((((unsigned __int8)v88 ^ (unsigned __int8)(v88 >> 23)) + (unsigned __int8)((v88 ^ ((v88 >> 23) | ((v88 & 0x7FFFFF) << 9))) >> 6)) & 3) << 30))) >> 2);
					v89 = ((unsigned int)v83 ^ (((_DWORD)v83 << 9) | ((unsigned int)v83 >> 23)) ^ 8
						* ((unsigned int)v83 ^ (((_DWORD)v83 << 9) | ((unsigned int)v83 >> 23))) ^ 8 * ((unsigned int)v83 ^ (((_DWORD)v83 << 9) | ((unsigned int)v83 >> 23)) ^ 8 * ((unsigned int)v83 ^ (((_DWORD)v83 << 9) | ((unsigned int)v83 >> 23)))))
						+ 1502713721;
					v90 = 513
						* (((unsigned int)v89 ^ 8 * (_DWORD)v89)
							- ((unsigned int)((v89 ^ (unsigned __int64)(8 * v89)) >> 6) | (((unsigned int)v89 ^ 8 * (_DWORD)v89) << 26))) ^ 0xD2105517i64;
					LODWORD(v81) = (((unsigned __int8)v90 << 29) | (v90 >> 3))
						- (((v90 & 7) << 29 >> 30)
							+ 4 * (((unsigned __int8)v90 << 29) | (v90 >> 3)));
					LODWORD(v90) = v81
						+ (((unsigned int)(v81 + 1519294305) >> 6) | (((_DWORD)v81 + 1519294305) << 26))
						+ 1519294305;
					v91 = -127 * ((unsigned int)v90 + (((_DWORD)v90 << 26) | ((unsigned int)v90 >> 6)));
					LODWORD(v90) = (v91 ^ 8 * v91)
						+ (((v91 ^ (unsigned __int64)(8 * v91)) >> 6) | (((unsigned int)v91 ^ 8 * (_DWORD)v91) << 26))
						- (((((unsigned int)v91 ^ 8 * (_DWORD)v91)
							+ ((unsigned int)((v91 ^ (unsigned __int64)(8 * v91)) >> 6) | (((unsigned int)v91 ^ 8 * (_DWORD)v91) << 26))) >> 30)
							+ 4
							* ((v91 ^ 8 * v91)
								+ (((v91 ^ (unsigned __int64)(8 * v91)) >> 6) | (((unsigned int)v91 ^ 8 * (_DWORD)v91) << 26))))
						+ (((((unsigned int)v91 ^ 8 * (_DWORD)v91)
							+ ((unsigned int)((v91 ^ (unsigned __int64)(8 * v91)) >> 6) | (((unsigned int)v91 ^ 8 * (_DWORD)v91) << 26))
							- (((((unsigned int)v91 ^ 8 * (_DWORD)v91)
								+ ((unsigned int)((v91 ^ (unsigned __int64)(8 * v91)) >> 6) | (((unsigned int)v91 ^ 8 * (_DWORD)v91) << 26))) >> 30)
								+ 4
								* (((unsigned int)v91 ^ 8 * (_DWORD)v91)
									+ ((unsigned int)((v91 ^ (unsigned __int64)(8 * v91)) >> 6) | (((unsigned int)v91 ^ 8 * (_DWORD)v91) << 26))))) << 26) | ((((unsigned int)v91 ^ 8 * (_DWORD)v91) + ((unsigned int)((v91 ^ (unsigned __int64)(8 * v91)) >> 6) | (((unsigned int)v91 ^ 8 * (_DWORD)v91) << 26)) - (((((unsigned int)v91 ^ 8 * (_DWORD)v91) + ((unsigned int)((v91 ^ (unsigned __int64)(8 * v91)) >> 6) | (((unsigned int)v91 ^ 8 * (_DWORD)v91) << 26))) >> 30) + 4 * (((unsigned int)v91 ^ 8 * (_DWORD)v91) + ((unsigned int)((v91 ^ (unsigned __int64)(8 * v91)) >> 6) | (((unsigned int)v91 ^ 8 * (_DWORD)v91) << 26))))) >> 6));
					v92 = (unsigned int)(-127 * v90);
					v93 = v125;
					v94 = v124;
					v22 = v124 | (v26 << 32);
					v95 = (unsigned __int64)(((((((((unsigned int)v92 ^ 8 * (_DWORD)v92 ^ 0xD2105517)
						- (unsigned int)((v92 ^ 8 * v92 ^ 0xD2105517ui64) >> 2)) ^ 0xD2105517)
						+ 1519294305
						+ (((((((unsigned int)v92 ^ 8 * (_DWORD)v92 ^ 0xD2105517)
							- (unsigned int)((v92 ^ 8 * v92 ^ 0xD2105517ui64) >> 2)) ^ 0xD2105517)
							+ 1519294305) << 26) | ((((((unsigned int)v92 ^ 8 * (_DWORD)v92 ^ 0xD2105517)
								- (unsigned int)((v92 ^ 8 * v92 ^ 0xD2105517ui64) >> 2)) ^ 0xD2105517)
								+ 1519294305) >> 6))) ^ 0xD2105517) << 30) | (-127 * ((((((unsigned int)v92 ^ 8 * (_DWORD)v92 ^ 0xD2105517) - (unsigned int)((v92 ^ 8 * v92 ^ 0xD2105517ui64) >> 2)) ^ 0xD2105517) + 1519294305 + (((((((unsigned int)v92 ^ 8 * (_DWORD)v92 ^ 0xD2105517) - (unsigned int)((v92 ^ 8 * v92 ^ 0xD2105517ui64) >> 2)) ^ 0xD2105517) + 1519294305) << 26) | ((((((unsigned int)v92 ^ 8 * (_DWORD)v92 ^ 0xD2105517) - (unsigned int)((v92 ^ 8 * v92 ^ 0xD2105517ui64) >> 2)) ^ 0xD2105517) + 1519294305) >> 6))) ^ 0xD2105517) >> 2)) ^ (unsigned int)v26 ^ -127 * ((((((unsigned int)v92 ^ 8 * (_DWORD)v92 ^ 0xD2105517) - (unsigned int)((v92 ^ 8 * v92 ^ 0xD2105517ui64) >> 2)) ^ 0xD2105517) + 1519294305 + (((((((unsigned int)v92 ^ 8 * (_DWORD)v92 ^ 0xD2105517) - (unsigned int)((v92 ^ 8 * v92 ^ 0xD2105517ui64) >> 2)) ^ 0xD2105517) + 1519294305) << 26) | ((((((unsigned int)v92 ^ 8 * (_DWORD)v92 ^ 0xD2105517) - (unsigned int)((v92 ^ 8 * v92 ^ 0xD2105517ui64) >> 2)) ^ 0xD2105517) + 1519294305) >> 6))) ^ 0xD2105517) ^ (unsigned int)v125) << 32;
					v21 = v95 | v52;
				} while (v24++ != v148);
				v97 = v123;
				*(&v140 + v123) = 32i64;
				*(&v139 + v97) = v95;
				*(&v141 + v97) = 32i64;
				*(&v132 + v97) = v147;
				*(&v133 + v97) = v146;
				*(&v134 + v97) = v145;
				*(&v135 + v97) = v144;
				*(&v136 + v97) = v94;
				*(&v137 + v97) = (unsigned int)v26;
				*(&v138 + v97) = v93;
				*(&v127 + v97) = v21;
				*(&v126 + v97) = v22;
				v98 = *(&v124 + v97);
				*(&v128 + v97) = 0i64;
				v99 = (unsigned int)v98;
				*(&v129 + v97) = (unsigned int)v98;
				*(&v131 + v97) = 32i64;
				v100 = v98 >> 32;
				*(&v130 + v97) = v100;
				v101 = 0i64;
				while (1)
				{
					v3 = v22;
					*(&v126 + v23) = v100;
					*(&v125 + v23) = v99;
					*(&v124 + v23) = v100;
					*(&v127 + v23) = 0i64;
					v103 = 0i64;
					do
					{
						v104 = v99;
						v105 = v99 ^ (v100 + Table_00400648[2 * v103]);
						v99 = v105;
						v100 = (v104 | ((unsigned __int64)((unsigned int)v100 ^ (Table_00400648[2 * v103++ + 1] | v105)) << 32)) >> 32;
					} while (v103 != 6);
					*(&v128 + v23) = 0i64;
					*(&v129 + v23) = 6i64;
					*(&v124 + v23) = v100;
					*(&v123 + v23) = v105;
					v106 = (unsigned int)*(&v120 + v23);
					v107 = (unsigned __int64)*(&v120 + v23) >> 32;
					*(&v125 + v23) = v106;
					*(&v127 + v23) = 32i64;
					*(&v126 + v23) = v107;
					if (v101)
						break;
					*(&v128 + v23) = 14i64;
					*(&v127 + v23) = v99;
					*(&v126 + v23) = v100;
					v102 = (v100 ^ (((v99 ^ (unsigned __int64)v106) >> 28) | 16 * ((v99 ^ v106) & 0xFFFFFFF)) | ((unsigned __int64)(((unsigned int)((v100 ^ v107) >> 18) | (((unsigned int)v100 ^ (unsigned int)v107) << 14)) ^ (unsigned int)v99) << 32)) ^ v21;
					*(&v121 + v23) = v3;
					*(&v120 + v23) = v102;
					*(&v122 + v23) = 1i64;
					v99 = (unsigned int)v102;
					*(&v123 + v23) = (unsigned int)v102;
					*(&v125 + v23) = 32i64;
					v100 = v102 >> 32;
					*(&v124 + v23) = v102 >> 32;
					v101 = 1i64;
					v22 = v102;
					v21 = v3;
					--v23;
				}
				*(&v128 + v23) = 18i64;
				*(&v127 + v23) = 0xFFFFFFFFi64;
				*(&v126 + v23) = v100;
				*(&v125 + v23) = 32i64;
				v108 = (unsigned __int64)((unsigned int)((v100 ^ v99 ^ v107) >> 14) | (((unsigned int)v100 ^ (unsigned int)v99 ^ (unsigned int)v107) << 18)) << 32;
				*(&v124 + v23) = v108;
				v18 = v23 - 4;
				v4 = (((v100 ^ (unsigned __int64)v106) >> 6) | (((v100 ^ v106) & 0x3F) << 26) | v108) ^ v21;
				v109 = *(&v119 + v23);
				v20 = v109 + 1;
				*(&v119 + v23) = v109 + 1;
				*(&v121 + v23) = v3;
				*(&v120 + v23) = v4;
				*(&v123 + v23) = 15i64;
				*(&v122 + v23) = v109 - 14;
			} while (v109 != 14);
			*(&v121 + v23) = v20;
			*(&v120 + v23) = *(&v118 + v23);
			*(&v119 + v23) = *(&v117 + v23);
			v110 = *(&v116 + v23);
			*(&v118 + v23) = v110;
			v1 = *(&v114 + v23);
			v2 = *(&v115 + v23);
			*(&v117 + v23) = v2;
			*(&v116 + v23) = v4;
			*(&v115 + v23) = v3;
			if (v110)
				break;
			v8 = v23 - 7;
			*(&v115 + v23) = v4;
			*(&v114 + v23) = v3;
			*(&v116 + v23) = 1i64;
			*(&v117 + v23) = v3;
			*(&v118 + v23) = v4;
			v124 = 1i64;
			v7 = v3;
		}
		*(&v118 + v23) = v2;
		*(&v117 + v23) = v1;
		v111 = *(&v113 + v23);
		v6 = v111 + 1;
		*(&v119 + v23) = v111 + 1;
		*(&v121 + v23) = 4i64;
		v5 = v23 - 6;
		*(&v120 + v23) = v111 - 3;
	} while (v111 != 3);
	return (v4 ^ 0x658302A68E8E1C24i64)
		+ (v3 ^ 0xDC7564F1612E5347ui64)
		+ (v2 ^ 0xD9C69B74A86EC613ui64)
		+ (v1 ^ 0x65850B36E76AAED5i64);
}


int main(void) {
	char Flag[] = "SSTIC{1111111122222222333333334}"; // Only => 2DB6A6078FFCF147
	return VM_Func((uint64_t *) Flag);
}