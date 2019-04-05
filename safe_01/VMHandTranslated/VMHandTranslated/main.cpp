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
	
uint64_t __fastcall VM_Func(uint64_t *Flag)
{
	uint64_t v1; // rcx
	uint64_t v2; // rsi
	__int64 v3; // rdx
	unsigned __int64 v4; // r9
	uint64_t *v5; // rax
	unsigned __int64 *v6; // rcx
	unsigned __int64 v7; // r14
	unsigned __int64 v8; // r11
	__int64 v9; // rax
	unsigned __int64 v10; // rsi
	__int64 v11; // rcx
	unsigned int v12; // ebp
	unsigned __int64 v13; // r10
	__int64 v14; // rbp
	unsigned __int64 v15; // rcx
	unsigned __int64 v16; // r15
	__int64 i; // rdi
	unsigned __int64 v18; // rax
	__int64 v19; // rcx
	__int64 v20; // rbx
	__int64 v21; // r12
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // r12
	unsigned __int64 v25; // rax
	__int64 v26; // rdx
	unsigned __int64 v27; // rdi
	unsigned __int64 v28; // rbp
	__int64 v29; // rsi
	unsigned int v30; // ebp
	unsigned __int64 v31; // rbx
	__int64 v33; // [rsp+0h] [rbp-70h]
	__int64 v34; // [rsp+8h] [rbp-68h]
	__int64 v35; // [rsp+10h] [rbp-60h]
	__int64 v36; // [rsp+18h] [rbp-58h]
	uint64_t v37; // [rsp+20h] [rbp-50h]
	uint64_t v38; // [rsp+28h] [rbp-48h]
	unsigned __int64 v39; // [rsp+30h] [rbp-40h]
	unsigned __int64 v40; // [rsp+38h] [rbp-38h]

	v1 = *Flag;
	v2 = Flag[1];
	v38 = Flag[2];
	v37 = Flag[3];
	v34 = 0LL;
	v3 = v2;
	v33 = v2;
	v4 = 0LL;
	while (2)
	{
		v39 = v4;
		v4 = v1;
		v35 = 0LL;
		v5 = &v38;
		v6 = &v37;
		while (2)
		{
			v34 = v3;
			v33 = v4;
			v7 = *v5;
			v8 = *v6;
			v9 = -4LL;
			do
			{
				v10 = v7 ^ ((v7 >> 32) + v8);
				v11 = (unsigned int)v8 & HIDWORD(v7);
				v12 = v10 + *(_DWORD *)&Table_00400648[((v8 & 0xFF00000000LL) + 0x1B00000000LL) >> 30];
				v8 = (unsigned int)(v8 - v10) | ((v12 ^ (v8 >> 40)) << 32);
				v7 = v12 | (unsigned __int64)(v11 << 32);
				++v9;
			} while (v9);
			v13 = v3;
			if (v35)
			{
				v4 = v38;
				v13 = v37;
			}
			v36 = 0LL;
			v14 = 0LL;
		LABEL_10:
			v15 = v7;
			v16 = v8;
			for (i = 0LL; ; ++i)
			{
				v18 = (unsigned int)v15 ^ (unsigned __int64)*(unsigned int *)&Table_00400648[((i << 32) + 0xC00000000LL) >> 30];
				v19 = (v15 >> 32) + 1165518130;
				v20 = (unsigned int)v16 ^ (unsigned int)v19;
				if (((v16 ^ v19) & 0x80000000) != 0LL)
					break;
				v21 = (v16 >> 60) | (v16 >> 28) & 0xFFFFFFF0;
				v22 = (unsigned int)(v18 - v19);
				v23 = (unsigned int)v21 ^ (unsigned int)v19;
				v24 = v20 | (v21 << 32);
				v15 = (v22 | (v23 << 32)) ^ 0x818F694A00000000LL;
				if (i == v14)
				{
					v25 = v13 >> 32;
					v26 = 0LL;
					v27 = (unsigned int)v13;
					v40 = v13 >> 32;
					while (1)
					{
						v29 = -48LL;
						do
						{
							v30 = v27 ^ (v25 + *(_DWORD *)(v29 + 4196800));
							v31 = v27 | ((unsigned __int64)((unsigned int)v25 ^ (v30 | *(_DWORD *)(v29 + 4196804))) << 32);
							v27 = (unsigned int)v27 ^ ((_DWORD)v25 + *(_DWORD *)(v29 + 4196800));
							v25 = v31 >> 32;
							v29 += 8LL;
						} while (v29);
						if (v26)
							break;
						v28 = v15 ^ ((v31 >> 32) ^ ((((unsigned int)v4 ^ v27) >> 28) | (16 * (((unsigned int)v4 ^ v27) & 0xFFFFFFF))) | (((((HIDWORD(v31) ^ HIDWORD(v4)) << 14) | (((v31 >> 32) ^ (v4 >> 32)) >> 18)) ^ v30) << 32));
						v26 = (unsigned int)v28;
						v27 = v28 >> 32;
						v4 = v28;
						v15 = 1LL;
						LODWORD(v25) = 32;
					}
					v16 = (unsigned __int64)((((unsigned int)v27 ^ (unsigned int)v40 ^ (unsigned int)v15) << 18) | (unsigned int)((v27 ^ v40 ^ v15) >> 14)) << 32;
					v13 = v24 ^ (v16 | ((v27 ^ (unsigned int)v13) >> 6) | (((v27 ^ (unsigned int)v13) & 0x3F) << 26));
					if (v36 != 14)
					{
						v14 = ++v36;
						goto LABEL_10;
					}
					v15 = 15LL;
					v36 = 15LL;
					v14 = 0LL;
					i = 32LL;
				}
				else
				{
					v16 = v24;
				}
			}
			v34 = v4;
			if (!v35)
			{
				v34 = v33;
				v33 = v13;
				v35 = 1LL;
				v5 = (uint64_t *)&v33;
				v6 = (unsigned __int64 *)&v34;
				v3 = v13;
				continue;
			}
			break;
		}
		v1 = v39;
		if (v39 != 3)
		{
			v3 = v33;
			continue;
		}
		return ((v16 >> 32) ^ 0x658302A68E8E1C24LL)
			+ ((unsigned int)v16 ^ 0xDC7564F1612E5347LL)
			+ (v20 ^ 0xD9C69B74A86EC613LL)
			+ (v18 ^ 0x65850B36E76AAED5LL);
	}
}


int main(void) {
	char Flag[] = "SSTIC{1111111122222222333333334}"; // Only => 2DB6A6078FFCF147
	return VM_Func((uint64_t *) Flag);
}