#include <stdint.h>
#include <emmintrin.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const uint8_t Table_00400648[] =
{
		0xDE, 0xDD, 0x9D, 0x48, 0xF1, 0x90, 0x79, 0x06, 0xA9, 0x74, 0xBF, 0x95, 0xE7, 0x1E, 0x94, 0x77,
		0xE3, 0x80, 0x6D, 0x0E, 0x8B, 0xAF, 0xED, 0x2D, 0x42, 0xCD, 0x92, 0xFB, 0xC0, 0x67, 0xE8, 0xD0,
		0xFB, 0xA3, 0xB3, 0xF2, 0x47, 0xCE, 0x39, 0x6C, 0xE0, 0x99, 0x4F, 0xE7, 0x21, 0xF2, 0x24, 0x5A,
		0xEA, 0x8F, 0x37, 0xD6, 0xC4, 0xA8, 0x3C, 0xE2, 0xBC, 0xB1, 0xE3, 0x84, 0xBF, 0x10, 0x5E, 0xCE,
		0xDA, 0x64, 0xB3, 0xA2, 0xF0, 0x50, 0xF2, 0x41, 0x40, 0x70, 0xE9, 0x0F, 0x66, 0x52, 0xC0, 0x1C,
		0x4B, 0x7E, 0xF8, 0x16, 0xB7, 0x26, 0x5E, 0x51, 0xCB, 0x8D, 0xA4, 0xEE, 0xE4, 0x57, 0xB3, 0x62,
		0x41, 0x20, 0xBD, 0x39, 0x7A, 0x38, 0xCD, 0x72, 0x8B, 0xAC, 0x7A, 0xF3, 0x9B, 0xB3, 0x63, 0x59,
		0xDD, 0x5A, 0xF7, 0x30, 0xBC, 0xEC, 0x3F, 0x10, 0x7A, 0x2E, 0x39, 0x00, 0xDF, 0x7A, 0xDF, 0x35,
		0x13, 0xBD, 0x9A, 0xE1, 0x5C, 0xB3, 0xF8, 0xDA, 0x14, 0x82, 0x79, 0xF8, 0x05, 0x23, 0x0C, 0xB3,
		0xE9, 0x80, 0x79, 0x06, 0x40, 0xD9, 0x00, 0x69, 0x6F, 0x87, 0x5E, 0x03, 0x14, 0x70, 0x85, 0xA3,
		0x62, 0xE1, 0xC8, 0x56, 0x56, 0x8F, 0x74, 0xE9, 0x09, 0xE4, 0xD4, 0x91, 0x09, 0x5A, 0xC7, 0xDC,
		0x2F, 0xF5, 0x65, 0xAC, 0x07, 0xDD, 0x71, 0x85, 0xF6, 0xDC, 0x9E, 0x01, 0xEB, 0xF9, 0xCE, 0x51,
		0x7D, 0xB1, 0xB1, 0x1E, 0x6F, 0x44, 0xBE, 0x0A, 0xFE, 0x7C, 0x27, 0x3B, 0xBC, 0x69, 0x38, 0x84,
		0x98, 0xA2, 0x3E, 0xB2, 0x51, 0x6F, 0x29, 0x7C, 0x72, 0x99, 0x79, 0xCD, 0x64, 0x0A, 0x18, 0x62,
		0xD5, 0x52, 0xC0, 0x0A, 0x05, 0x62, 0x07, 0xF0, 0x93, 0x31, 0x18, 0x13, 0x94, 0xCB, 0x08, 0xB9,
		0x3C, 0xCD, 0xF4, 0x4B, 0x8A, 0xD4, 0xE5, 0xDE, 0x74, 0x9A, 0x4F, 0xF6, 0xD0, 0x15, 0x4A, 0xD6,
		0x34, 0xD4, 0xCA, 0xB2, 0x3B, 0x01, 0xE9, 0x64, 0xD2, 0xC1, 0x6C, 0xF4, 0xDB, 0xE9, 0x78, 0x9D,
		0x16, 0x92, 0x78, 0x11, 0xE6, 0x89, 0x56, 0x33, 0xDB, 0x7E, 0x4C, 0x07, 0x85, 0x61, 0xEB, 0xE6,
		0x0B, 0x17, 0x20, 0xD0, 0x15, 0xAA, 0x04, 0xF3, 0x9E, 0xB6, 0xF2, 0xBC, 0xEA, 0xD2, 0xB3, 0x4E,
		0x5C, 0x4D, 0x8D, 0xD7, 0xC4, 0xBF, 0xD2, 0x7E, 0xF3, 0xF0, 0xEB, 0x58, 0x3F, 0x1C, 0x59, 0x8B,
		0x6B, 0x1F, 0x04, 0xD3, 0x88, 0xAE, 0x5C, 0x00, 0x5C, 0x6F, 0x69, 0xBA, 0xDE, 0x8E, 0x6C, 0xC1,
		0x27, 0xBB, 0xBC, 0x9A, 0x77, 0x8D, 0xD7, 0x56, 0x20, 0x3E, 0x5B, 0x76, 0x2D, 0x21, 0x37, 0xCF,
		0xCF, 0x2D, 0x2E, 0x19, 0x06, 0x28, 0xAF, 0x8C, 0x5B, 0x57, 0x9A, 0xBC, 0xCE, 0x21, 0x64, 0x77,
		0xEB, 0xB9, 0x7F, 0x52, 0x40, 0x43, 0xF8, 0x69, 0xD7, 0x7B, 0xBC, 0xAD, 0x29, 0xC3, 0xF2, 0x73,
		0x7F, 0x8A, 0x7F, 0x73, 0xE4, 0xD3, 0x01, 0xE3, 0xB2, 0xBE, 0x7E, 0x05, 0x58, 0xB8, 0x59, 0x58,
		0x79, 0x19, 0xC4, 0x2C, 0x39, 0xA6, 0x69, 0xEC, 0x23, 0xD5, 0xB0, 0x53, 0x32, 0xF5, 0xA2, 0x39,
		0x5D, 0xE3, 0x29, 0x8B, 0x81, 0xCE, 0xE2, 0x44, 0x6D, 0xA1, 0x10, 0xCC, 0x58, 0xFF, 0xD9, 0x44,
		0x14, 0x2C, 0x10, 0x77, 0x7D, 0x81, 0x57, 0xFB, 0xC8, 0xC8, 0xF7, 0x3C, 0x8A, 0x86, 0x22, 0x12,
		0xD1, 0xD5, 0x73, 0x41, 0x32, 0xEE, 0x29, 0x35, 0x8E, 0xF5, 0x9D, 0x7A, 0xAC, 0x25, 0x35, 0x51,
		0xAC, 0x4B, 0x95, 0x81, 0xF5, 0xCC, 0x53, 0xCE, 0x28, 0x87, 0x16, 0x79, 0xF8, 0x60, 0xD6, 0xA2,
		0xCE, 0xC9, 0x0C, 0xF3, 0x76, 0x9C, 0xB8, 0xF0, 0xA9, 0xB3, 0x9F, 0x08, 0xA8, 0xDB, 0x19, 0xC9,
		0xC3, 0x4D, 0x9E, 0x1F, 0x0C, 0x4E, 0x59, 0xA2, 0x78, 0xE1, 0xFF, 0x34, 0xFB, 0x14, 0x44, 0xB0,
		0x3A, 0xB3, 0x1F, 0xD3, 0x78, 0x02, 0x4D, 0x18, 0x9A, 0x6A, 0x81, 0x2C, 0xF2, 0xF2, 0x93, 0xB9,
		0x1C, 0x60, 0xD8, 0xE4, 0xDE, 0xEE, 0xE2, 0x49, 0xE1, 0x0C, 0xD5, 0x9C, 0x77, 0x1E, 0x3E, 0xC0,
		0x9E, 0x86, 0x01, 0xA9, 0x50, 0xDE, 0x79, 0x75, 0xAB, 0xC4, 0x6A, 0x72, 0x40, 0x48, 0xD0, 0x38,
		0x70, 0x12, 0xBE, 0xEA, 0x2D, 0x81, 0x40, 0x8C, 0xB7, 0x76, 0x49, 0xE8, 0xAD, 0x04, 0x2B, 0x17,
		0xC4, 0x06, 0x66, 0x75, 0x91, 0x84, 0x25, 0x66, 0xF8, 0xBE, 0xA0, 0xB5, 0xF3, 0x5C, 0xCC, 0x6B,
		0x94, 0xAE, 0x35, 0xA5, 0xAA, 0x87, 0x7A, 0xC9, 0xF6, 0xA8, 0x03, 0x91, 0x5F, 0x9E, 0x3B, 0xCC,
		0x1F, 0xBE, 0x20, 0xBB, 0x97, 0xEF, 0xCF, 0xFF, 0x16, 0x4F, 0x95, 0x90, 0xA6, 0xE1, 0x1A, 0x50,
		0xCD, 0x89, 0xD5, 0x6E, 0x2B, 0xB0, 0x26, 0x68, 0x63, 0xF2, 0x5F, 0x56, 0x9B, 0x36, 0x8C, 0x8E,
		0x7A, 0xBE, 0x90, 0x69, 0x40, 0xB8, 0x25, 0x35, 0xBB, 0xD7, 0x47, 0x18, 0xC7, 0x40, 0x5A, 0x35,
		0x10, 0x9F, 0x57, 0xA3, 0xAE, 0xEC, 0xED, 0xE9, 0xB1, 0x7A, 0x33, 0xD0, 0xBA, 0xE5, 0x55, 0x63,
		0x55, 0x53, 0x97, 0x88, 0xCF, 0xF3, 0xC0, 0x5E, 0x3D, 0x21, 0xD6, 0xA0, 0x87, 0x93, 0x38, 0x75,
		0xF0, 0x16, 0x02, 0xE4, 0xE0, 0xCC, 0x80, 0xD9, 0x7C, 0xC6, 0x88, 0x6C, 0x9C, 0x41, 0x9D, 0x82,
		0x1B, 0x45, 0xF6, 0x3B, 0xFA, 0x7B, 0xF0, 0x11, 0x4E, 0x15, 0xC1, 0xC4, 0xEB, 0x35, 0x07, 0xBD,
		0x9D, 0xDF, 0xF8, 0x9C, 0x75, 0xBE, 0x57, 0xE4, 0x18, 0xBD, 0xA6, 0x63, 0xD3, 0x7F, 0xE7, 0xEF,
		0x63, 0x1B, 0x42, 0x83, 0x2D, 0x07, 0x83, 0x7F, 0x61, 0x0F, 0x94, 0x44, 0xF7, 0xCD, 0xBD, 0xF8,
		0xCA, 0x02, 0xC8, 0x61, 0xA8, 0xF9, 0x30, 0x0A, 0x37, 0x3B, 0xF0, 0x7F, 0xA9, 0xC5, 0x6C, 0xA2,
		0x0D, 0x57, 0x0E, 0xE1, 0x16, 0x0C, 0xEA, 0x95, 0x02, 0x6B, 0x5E, 0xA0, 0x84, 0x53, 0x1D, 0xC8,
		0x05, 0xDB, 0x85, 0x77, 0x5F, 0x4C, 0xC8, 0x92, 0x17, 0x46, 0x58, 0x05, 0x8D, 0xFE, 0xBC, 0x82,
		0xDA, 0xA1, 0x9E, 0x55, 0xB0, 0xCD, 0xD5, 0x4F, 0xED, 0x1F, 0x87, 0x9D, 0x39, 0x55, 0x6F, 0xDD,
		0x26, 0xEF, 0xD1, 0x4E, 0xC4, 0x13, 0x68, 0xFE, 0xD5, 0x71, 0xFA, 0x1C, 0xEA, 0x3A, 0x61, 0xD5,
		0x8C, 0x9B, 0x1C, 0x0F, 0x5D, 0xC4, 0xCA, 0x2B, 0x41, 0x0F, 0xD0, 0x65, 0xD8, 0xE0, 0x9B, 0x68,
		0x00, 0x11, 0xB0, 0x68, 0x80, 0xD2, 0x5B, 0x63, 0x4B, 0x5D, 0x4D, 0x95, 0x79, 0x7F, 0x88, 0x72,
		0x75, 0x7A, 0x02, 0xCE, 0x66, 0x1C, 0xF0, 0xFC, 0xD3, 0x1B, 0x6A, 0x00, 0x8E, 0x1C, 0x9A, 0x19,
		0x25, 0xEE, 0xD6, 0x87, 0x08, 0x9F, 0x8E, 0x93, 0x4D, 0x1D, 0xA1, 0xD8, 0x81, 0x4D, 0x9A, 0x2B,
		0xE5, 0xD2, 0xF5, 0xB6, 0x5A, 0x32, 0x5C, 0xD1, 0xC1, 0xAF, 0xEA, 0x64, 0x1C, 0xB6, 0x33, 0xFD,
		0x57, 0xBD, 0xC1, 0x43, 0x48, 0xF0, 0xB8, 0x37, 0xF2, 0x7C, 0xBA, 0x5C, 0xD0, 0x0C, 0x81, 0x72,
		0x54, 0xF4, 0xFE, 0xAB, 0xBA, 0x84, 0x63, 0xA7, 0x40, 0x14, 0x86, 0xD8, 0x37, 0x58, 0xDE, 0x36,
		0xF1, 0x03, 0x6A, 0x0F, 0xA1, 0x8F, 0xD4, 0x10, 0x2F, 0xEC, 0x83, 0x58, 0x9B, 0x0C, 0xC0, 0xA8,
		0xA4, 0xFE, 0x8F, 0x61, 0x06, 0xA2, 0x5D, 0xA0, 0x7A, 0xE9, 0xB9, 0xFF, 0x81, 0x67, 0x37, 0x8A,
		0x79, 0xB4, 0x56, 0x31, 0xCD, 0x5E, 0xAF, 0xE4, 0x6F, 0xE0, 0xD9, 0x87, 0x59, 0xD4, 0xD4, 0xB4,
		0x25, 0x7D, 0x9A, 0xEB, 0xAA, 0xFE, 0xDF, 0x59, 0x53, 0xF5, 0x8B, 0xDC, 0x3A, 0x3C, 0xCE, 0x6D,
		0x0E, 0x97, 0x62, 0x21, 0x9D, 0x92, 0xC9, 0xE8, 0xF4, 0x9B, 0x3A, 0x6C, 0x92, 0x53, 0xDA, 0x45,
		0xB0, 0xE7, 0xEE, 0x9C, 0xEB, 0xD4, 0x68, 0x3F, 0x4F, 0x43, 0x29, 0xCD, 0x12, 0xF7, 0x4D, 0x0E,
		0x9A, 0xC6, 0xA8, 0xB1, 0x46, 0x0F, 0x19, 0x1C, 0x3C, 0x87, 0x45, 0x2B, 0xC9, 0xDF, 0xAF, 0x46,
		0x3F, 0x88, 0xE8, 0x61, 0xC7, 0x18, 0x91, 0x97, 0xB1, 0x91, 0xF9, 0x70, 0x4D, 0x60, 0x82, 0x1F,
		0x8F, 0xF4, 0x8B, 0xC1, 0xFF, 0xF4, 0x27, 0xB3, 0x08, 0x75, 0x9A, 0x51, 0x0D, 0x9B, 0x61, 0xFA,
		0x90, 0x14, 0x8D, 0x26, 0xC2, 0x37, 0x7E, 0x56, 0x91, 0x76, 0xA0, 0x25, 0xC0, 0x59, 0x43, 0x42,
		0x53, 0x0C, 0x32, 0x13, 0xFD, 0x42, 0xF7, 0xEF, 0xBA, 0x45, 0xB9, 0x48, 0x11, 0xE7, 0xA8, 0xCF,
		0x19, 0xB5, 0x5F, 0x8F, 0xA5, 0x32, 0x73, 0x2B, 0x7C, 0x76, 0xAA, 0x10, 0xC0, 0x0C, 0x9F, 0x68,
		0x71, 0xA5, 0x1C, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x1A, 0x0C, 0x18, 0x00, 0x03, 0xFF, 0x22, 0x0C,
		0xFF, 0xFF, 0xFF, 0xFF, 0x1A, 0x12, 0x08, 0x02, 0x25, 0x1C, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x1A,
		0x12, 0x08, 0x06, 0x24, 0x16, 0x08, 0x1A, 0x25, 0x21, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x1A, 0x12,
		0x12, 0x08, 0x02, 0x25, 0x16, 0x08, 0x1E, 0x24, 0x21, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x1A, 0x27,
		0x12, 0x08, 0x09, 0x24, 0x22, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x1A, 0x12, 0x08, 0x07, 0x24, 0x1C,
};



#ifdef _WIN32
#define INLINE __forceinline
#else
#define INLINE __attribute__((always_inline)) 
#endif


/*
Unroll the code
*/
//#define Unroll
#ifdef Unroll
uint64_t Stack[44];

// The Stack Ptr
uint64_t StackPtr = 2;
#endif

INLINE uint64_t DW_OP_reg(int Reg) {
#ifdef Unroll
	printf("S%d = REG31;\n", StackPtr);
#endif
	return 0;
}

INLINE uint64_t DW_OP_lit(uint64_t lit) {
#ifdef Unroll
	printf("S%d = %d;\n", StackPtr, lit);
#endif

	return lit;
}

INLINE uint64_t DW_OP_const1u(uint8_t Const) {
#ifdef Unroll
	printf("S%d = 0x%X;\n", StackPtr, Const);
#endif

	return Const;
}

INLINE uint64_t DW_OP_const4u(uint32_t Const, bool Print = true) {
#ifdef Unroll
	if (Print) {
		printf("S%d = 0x%X;\n", StackPtr, Const);
	}
#endif
	return Const;
}

INLINE uint64_t DW_OP_const8u(uint64_t Const) {
#ifdef Unroll
	printf("S%d = 0x%llX;\n", StackPtr, Const);
#endif

	return Const;
}

INLINE uint64_t DW_OP_plus(uint64_t A, uint64_t B) {
#ifdef Unroll
	printf("S%d = S%d  + S%d;\n", StackPtr, StackPtr, StackPtr + 1);
#endif

	return A + B;
}

INLINE uint64_t DW_OP_minus(uint64_t A, uint64_t B) {
#ifdef Unroll
	printf("S%d = S%d  - S%d;\n", StackPtr, StackPtr, StackPtr + 1);
#endif

	return A - B;
}

INLINE uint64_t DW_OP_and(uint64_t A, uint64_t B) {
#ifdef Unroll
	printf("S%d = S%d  & S%d;\n", StackPtr, StackPtr, StackPtr + 1);
#endif

	return A & B;
}

INLINE uint64_t DW_OP_or(uint64_t A, uint64_t B) {
#ifdef Unroll
	printf("S%d = S%d | S%d;\n", StackPtr, StackPtr, StackPtr + 1);
#endif
	return A | B;
}

INLINE uint64_t DW_OP_shr(uint64_t A, uint64_t B) {
#ifdef Unroll
	printf("S%d = S%d  >> S%d;\n", StackPtr, StackPtr, StackPtr + 1);
#endif

	return A >> B;
}

INLINE uint64_t DW_OP_shl(uint64_t A, uint64_t B) {
#ifdef Unroll
	printf("S%d = S%d  << S%d;\n", StackPtr, StackPtr, StackPtr + 1);
#endif
	return A << B;
}

INLINE uint64_t DW_OP_xor(uint64_t A, uint64_t B) {
#ifdef Unroll
	printf("S%d = S%d  ^ S%d;\n", StackPtr, StackPtr, StackPtr + 1);
#endif
	return A ^ B;
}

INLINE uint64_t DW_OP_mul(uint64_t A, uint64_t B) {
#ifdef Unroll
	printf("S%d = S%d  * S%d;\n", StackPtr, StackPtr, StackPtr + 1);
#endif

	return A * B;
}

INLINE uint64_t DW_OP_deref(uint64_t VA) {
	int index = (VA - 0x400648); // / 4;

#ifdef Unroll
	printf("S%d = *(uint64_t *)(&Table_00400648[S%d - 0x400648]);\n", StackPtr,
		StackPtr);
#endif

	return *(uint64_t*)(&Table_00400648[index]);
} 

INLINE uint64_t DW_OP_deref_size(int Size, uint64_t Ptr) {
	int index = (Ptr - 0x400648) / 4;
	return ((uint32_t*)Table_00400648)[index];
}

INLINE void DW_OP_rot(uint64_t& A, uint64_t& B, uint64_t& C) {
	uint64_t t1, t2, t3;

	t1 = A;
	t2 = B;
	t3 = C;

	A = t2;
	B = t3;
	C = t1;
}

INLINE void DW_OP_swap(uint64_t& A, uint64_t& B) {
	uint64_t t = A;
	A = B;
	B = t;
}

INLINE uint64_t DW_OP_dup(uint64_t *Stack, int StackPtr) {
#ifdef Unroll
	printf("S%d = S%d;\n", Ptr + 1, Ptr);
#endif
	return Stack[StackPtr];
}


INLINE uint64_t DW_OP_pick(uint64_t Stack[44], uint64_t StackPtr, uint64_t Offset) {
#ifdef Unroll
	printf("S%d = S%d;\n", StackPtr, StackPtr - 1 - Offset);
#endif
	return Stack[StackPtr - 1 - Offset];
}

#define _BYTE  uint8_t
#define _WORD  uint16_t
#define _DWORD uint32_t
#define _QWORD uint64_t

#define LODWORD(x) (*((_DWORD*)&(x)))
#define HIDWORD(x) (*((_DWORD*)&(x)+1))


uint64_t VMFunc(uint64_t *Flags)
{
  uint64_t v1; // rcx
  uint64_t v2; // rdx
  uint64_t result; // rax
  uint64_t v4; // rdx
  uint64_t v5; // rax
  uint64_t v6; // rcx
  uint64_t v7; // rdx
  uint64_t v8; // rsi
  uint64_t v9; // rdi
  uint64_t v10; // r14
  uint64_t v11; // r11
  uint64_t v12; // rbp
  uint64_t v13; // rbx
  uint64_t v14; // r12
  int i; // er8
  uint64_t v16; // rdx
  uint64_t v17; // rbp
  uint64_t v18; // rax
  unsigned int v19; // ecx
  uint64_t v20; // rdi
  uint64_t v21; // rdx
  uint64_t v22; // rax
  uint64_t v23; // rcx
  uint64_t v24; // rax
  uint64_t v25; // rcx
  uint64_t v26; // rdx
  uint64_t v27; // rax
  uint64_t v28; // r12
  uint64_t v29; // rbx
  uint64_t v30; // r8
  uint64_t v31; // rdx
  uint64_t v32; // rax
  uint64_t v33; // r12
  uint64_t v34; // rcx
  uint64_t v35; // r12
  uint64_t v36; // rax
  uint64_t v37; // rax
  uint64_t v38; // rcx
  uint64_t v39; // rdx
  uint64_t v40; // rcx
  uint64_t v41; // rcx
  uint64_t v42; // rcx
  uint64_t v43; // rax
  uint64_t v44; // rax
  uint64_t v45; // rax
  uint64_t v46; // rax
  unsigned int v47; // ecx
  uint64_t v48; // rdi
  uint64_t v49; // rax
  uint64_t v50; // rsi
  int v51; // eax
  unsigned int v52; // eax
  uint64_t v53; // r14
  uint64_t v54; // rax
  uint64_t v55; // rsi
  uint64_t v56; // r11
  unsigned int v57; // eax
  uint64_t v58; // rax
  int v59; // ecx
  uint64_t v60; // rax
  uint64_t v61; // rax
  unsigned int v62; // edx
  uint64_t v63; // rax
  unsigned int v64; // ecx
  uint64_t v65; // rcx
  uint64_t v66; // rsi
  uint64_t v67; // rsi
  uint64_t v68; // rcx
  uint64_t v69; // rcx
  uint64_t v70; // rcx
  uint64_t v71; // rcx
  uint64_t v72; // rcx
  uint64_t v73; // rdx
  uint64_t v74; // rcx
  uint64_t v75; // rdx
  uint64_t v76; // rcx
  uint64_t v77; // rcx
  uint64_t v78; // rcx
  uint64_t v79; // rdx
  uint64_t v80; // rdx
  uint64_t v81; // rdx
  uint64_t v82; // rdx
  uint64_t v83; // rdx
  uint64_t v84; // rcx
  uint64_t v85; // rcx
  uint64_t v86; // rdx
  uint64_t v87; // rdx
  uint64_t v88; // rcx
  uint64_t v89; // rcx
  uint64_t v90; // rdx
  uint64_t v91; // rcx
  uint64_t v92; // rsi
  uint64_t v93; // rcx
  uint64_t v94; // rcx
  uint64_t v95; // rcx
  uint64_t v96; // rcx
  uint64_t v97; // rax
  uint64_t v98; // rcx
  uint64_t v99; // rax
  uint64_t v100; // rax
  uint64_t v101; // rax
  uint64_t v102; // rax
  uint64_t v103; // rsi
  uint64_t v104; // rdi
  uint64_t v105; // rax
  uint64_t v106; // rdx
  uint64_t v107; // rbp
  uint64_t v108; // rax
  uint64_t v109; // rbp
  uint64_t v110; // rbp
  uint64_t v111; // rdx
  uint64_t v112; // rsi
  uint64_t v113; // rcx
  uint64_t v114; // rax
  uint64_t v115; // rbp
  uint64_t v116; // rcx
  uint64_t v117; // rdi
  uint64_t v118; // rax
  uint64_t v119; // r14
  uint64_t v120; // rbx
  uint64_t v121; // rdx
  unsigned int v122; // ecx
  uint64_t v123; // rax
  uint64_t v124; // r14
  uint64_t v125; // rax
  uint64_t v126; // rcx
  uint64_t v127; // rbx
  uint64_t v128; // rbx
  uint64_t v129; // rbx
  uint64_t v130; // rbx
  uint64_t v131; // rcx
  uint64_t v132; // r12
  uint64_t v133; // rax
  uint64_t v134; // rax
  uint64_t v135; // rbp
  uint64_t v136; // rbx
  uint64_t v137; // r14
  uint64_t v138; // r12
  uint64_t v139; // rbp
  uint64_t v140; // [rsp+0h] [rbp-230h]
  uint64_t v141; // [rsp+8h] [rbp-228h]
  uint64_t v142; // [rsp+10h] [rbp-220h]
  uint64_t v143; // [rsp+18h] [rbp-218h]
  uint64_t v144; // [rsp+20h] [rbp-210h]
  uint64_t v145; // [rsp+28h] [rbp-208h]
  uint64_t v146; // [rsp+30h] [rbp-200h]
  uint64_t v147; // [rsp+38h] [rbp-1F8h]
  uint64_t v148; // [rsp+40h] [rbp-1F0h]
  uint64_t v149; // [rsp+48h] [rbp-1E8h]
  uint64_t v150; // [rsp+50h] [rbp-1E0h]
  uint64_t v151; // [rsp+58h] [rbp-1D8h]
  uint64_t v152; // [rsp+60h] [rbp-1D0h]
  uint64_t v153; // [rsp+68h] [rbp-1C8h]
  uint64_t v154; // [rsp+70h] [rbp-1C0h]
  uint64_t v155; // [rsp+78h] [rbp-1B8h]
  uint64_t v156; // [rsp+80h] [rbp-1B0h]
  uint64_t v157; // [rsp+88h] [rbp-1A8h]
  uint64_t v158; // [rsp+90h] [rbp-1A0h]
  uint64_t v159; // [rsp+98h] [rbp-198h]
  uint64_t v160; // [rsp+A0h] [rbp-190h]
  uint64_t v161; // [rsp+A8h] [rbp-188h]
  uint64_t v162; // [rsp+B0h] [rbp-180h]
  uint64_t v163; // [rsp+B8h] [rbp-178h]
  uint64_t v164; // [rsp+C0h] [rbp-170h]
  uint64_t v165; // [rsp+C8h] [rbp-168h]
  uint64_t v166; // [rsp+D0h] [rbp-160h]
  uint64_t v167; // [rsp+D8h] [rbp-158h]
  uint64_t v168; // [rsp+E0h] [rbp-150h]
  uint64_t v169[29]; // [rsp+E8h] [rbp-148h]
  uint64_t v170; // [rsp+1D0h] [rbp-60h]
  uint64_t v171; // [rsp+1D8h] [rbp-58h]
  uint64_t v172; // [rsp+1E0h] [rbp-50h]
  uint64_t v173; // [rsp+1E8h] [rbp-48h]
  uint64_t v174; // [rsp+1F0h] [rbp-40h]
  uint64_t v175; // [rsp+1F8h] [rbp-38h]

  v1 = *Flags;
  v154 = *Flags;
  v2 = Flags[1];
  v155 = Flags[1];
  v156 = Flags[2];
  v157 = Flags[3];
  result = 0x4030B8LL;
  if ( !*(((uint8_t *)Flags) + 32) )
  {
  	printf("ok\n");
    v158 = v1;
    v159 = v2;
    v160 = 0LL;
    v4 = 8LL;
    do
    {
      v5 = *(&v152 + v4);
      *(&v152 + v4) = *(&v151 + v4);
      *(&v151 + v4) = *(&v150 + v4);
      *(&v150 + v4) = v5;
      *(&v153 + v4) = 0LL;
      v6 = *(&v149 + v4);
      *(&v154 + v4) = *(&v148 + v4);
      *(&v155 + v4) = v6;
      v7 = v4 + 3;
      while ( 1 )
      {
        v150 = v7 + 3;
        v8 = *(&v151 + v7);
        v9 = *(&v152 + v7);
        v10 = *(&v154 + v7);
        v11 = *(&v155 + v7);
        v12 = *(&v156 + v7);
        v13 = *(&v157 + v7);
        v151 = v7;
        v14 = *(&v158 + v7);
        for ( i = 4; i; --i )
        {
          v10 = (unsigned int)v9;
          v11 = v9 >> 32;
          v16 = v8 ^ (v9 + (v8 >> 32));
          v17 = (unsigned int)v9 & HIDWORD(v8);
          v18 = (unsigned int)(v9 - v16);
          v19 = v16 + *(_DWORD *)((char *)&Table_00400648 + (((v9 & 0xFF00000000LL) + 115964116992LL) >> 30));
          v20 = v9 >> 40;
          v13 = (uint64_t)(v19 ^ (unsigned int)v20) << 32;
          v12 = v17 << 32;
          v8 = v12 | v19;
          v14 = v20;
          v9 = v13 | v18;
        }
        v21 = v151;
        v22 = *(&v150 + v151);
        v23 = v151 + 3LL * (v22 == 0);
        *(&v152 + v151) = v9;
        *(&v151 + v21) = v8;
        *(&v154 + v21) = v10;
        *(&v155 + v21) = v11;
        *(&v156 + v21) = v12;
        *(&v157 + v21) = v13;
        *(&v158 + v21) = v14;
        *(&v153 + v21) = v22;
        v24 = *(&v145 + v23);
        *(&v153 + v21) = v24;
        v25 = *(&v146 + v23);
        *(&v155 + v21) = v24;
        *(&v154 + v21) = v25;
        *(&v153 + v21) = 0LL;
        v26 = v150;
        do
        {
          v27 = *(&v150 + v26);
          v28 = *(&v148 + v26);
          v29 = *(&v149 + v26);
          *(&v155 + v26) = v29;
          *(&v154 + v26) = v28;
          v152 = v27;
          *(&v153 + v26) = v27;
          *(&v156 + v26) = 0LL;
          v150 = v26;
          v30 = v26 + 5;
          v31 = 0LL;
          do
          {
            v32 = (unsigned int)v28;
            v33 = v28 >> 32;
            v151 = v31;
            v34 = v32 ^ *(unsigned int *)((char *)&Table_00400648 + (((v31 << 32) + 51539607552LL) >> 30));
            v173 = v33;
            v175 = (unsigned int)(v33 + 1165518130);
            v172 = (unsigned int)v29;
            v171 = v29 >> 32;
            v170 = v34;
            v35 = v34 - (v33 + 1165518130);
            v36 = 3723938192LL;
            v174 = (unsigned int)v29 ^ v175;
            if ( (v174 & 0x80000000) == 0LL )
              v36 = 1890974914LL;
            v37 = v36 - (v36 >> 2);
            LODWORD(v37) = -65151
                         * (((((v37 >> 26) | ((v37 & 0x3FFFFFE) << 6)) >> 2) | ((unsigned int)(v37 >> 26) << 30)) ^ ((v37 >> 26) | ((v37 & 0x3FFFFFE) << 6)));
            v38 = (unsigned int)v37 + ((32 * (_DWORD)v37) | ((unsigned int)v37 >> 27));
            v39 = v38 ^ ((v38 >> 23) | ((v38 & 0x7FFFFF) << 9));
            LODWORD(v39) = (v39 ^ (8 * v39)) + (((v39 ^ (8 * v39)) >> 27) | (32 * (v39 ^ (8 * v39))));
            LODWORD(v38) = (v39 + (((_DWORD)v39 << 26) | ((unsigned int)v39 >> 6))) ^ (((unsigned int)v39
                                                                                      + (((_DWORD)v39 << 26) | ((unsigned int)v39 >> 6))) >> 3);
            LODWORD(v38) = v38
                         - ((((unsigned int)v39 + (((_DWORD)v39 << 26) | ((unsigned int)v39 >> 6))) >> 30)
                          + 4 * v38);
            v40 = (unsigned int)(513 * v38) ^ (((uint64_t)(unsigned int)(513 * v38) >> 23) | (unsigned int)(262656 * v38));
            LODWORD(v37) = 513
                         * ((((unsigned int)((v40 ^ (v40 >> 3)) >> 3) | (((unsigned int)v40 ^ (unsigned int)(v40 >> 3)) << 29)) << 6) | (((unsigned int)((v40 ^ (v40 >> 3)) >> 3) | (((unsigned int)v40 ^ (unsigned int)(v40 >> 3)) << 29)) >> 26));
            v41 = (uint64_t)(513
                                   * ((((unsigned int)((v40 ^ (v40 >> 3)) >> 3) | (((unsigned int)v40 ^ (unsigned int)(v40 >> 3)) << 29)) << 6) | (((unsigned int)((v40 ^ (v40 >> 3)) >> 3) | (((unsigned int)v40 ^ (unsigned int)(v40 >> 3)) << 29)) >> 26))) >> 3;
            v42 = ((v41 | ((v37 & 7) << 29)) >> 26) | ((v41 & 0x3FFFFFF) << 6);
            LODWORD(v39) = (v42 ^ (v42 >> 3) ^ (((v42 ^ (v42 >> 3)) >> 23) | (((unsigned int)v42 ^ (unsigned int)(v42 >> 3)) << 9)))
                         - (((v42 ^ (v42 >> 3) ^ (((v42 ^ (v42 >> 3)) >> 23) | ((uint64_t)(((unsigned int)v42 ^ (unsigned int)(v42 >> 3)) & 0x7FFFFF) << 9))) >> 6) | (((unsigned int)v42 ^ (unsigned int)(v42 >> 3) ^ ((unsigned int)((v42 ^ (v42 >> 3)) >> 23) | (((unsigned int)v42 ^ (unsigned int)(v42 >> 3)) << 9))) << 26));
            v43 = (((unsigned int)v39 + (((_DWORD)v39 << 26) | ((unsigned int)v39 >> 6)) + 1519294305) >> 10)
                + (_DWORD)v39
                + (((_DWORD)v39 << 26) | ((unsigned int)v39 >> 6))
                + 1519294305;
            LODWORD(v43) = ((v43 >> 3) | ((uint8_t)v43 << 29))
                         - ((((v43 >> 3) | ((v43 & 7) << 29)) >> 6) | ((uint8_t)(v43 >> 3) << 26));
            v44 = ((_DWORD)v43 - 770681577 + ((32 * (_DWORD)v43) | ((unsigned int)v43 >> 27)) + 754100993) ^ 0xD2105517LL;
            LODWORD(v44) = ((((unsigned int)v44 + ((unsigned int)(v44 >> 27) | (32 * (_DWORD)v44))) ^ 0xD2105517uLL) >> 26)
                         + ((((_DWORD)v44 + ((unsigned int)(v44 >> 27) | (32 * (_DWORD)v44))) ^ 0xD2105517) << 6)
                         + 1519294305;
            v45 = ((((_DWORD)v44 << 6) | ((unsigned int)v44 >> 26)) << 6) | ((unsigned int)v44 >> 20) & 0x3F;
            LODWORD(v45) = 513
                         * (v45
                          - (v45 >> 2)
                          + ((((_DWORD)v45 - (unsigned int)(v45 >> 2)) << 26) | (((unsigned int)v45
                                                                                - (unsigned int)(v45 >> 2)) >> 6)))
                         + 2008897889;
            v46 = (-127LL * ((unsigned int)v45 - ((unsigned int)v45 >> 2))) ^ (-1016LL
                                                                             * ((unsigned int)v45
                                                                              - ((unsigned int)v45 >> 2))) & 0x7FFFFFFF8LL;
            v47 = ((unsigned int)(v46 + 1519294305) >> 10)
                + v46
                - 770681577
                - 485697109
                - (((((unsigned int)(v46 + 1519294305) >> 10) + (_DWORD)v46 - 770681577 - 485697109) >> 30)
                 + 4 * (((unsigned int)(v46 + 1519294305) >> 10) + v46 - 770681577 - 485697109));
            v48 = -6LL;
            v49 = v47;
            do
            {
              v50 = v49 ^ 0xD2105517LL ^ ((((unsigned int)v49 ^ 0xD2105517) << 9) | (unsigned int)((v49 ^ 0xD2105517uLL) >> 23));
              LODWORD(v50) = v50 - ((4 * v50) | (v50 >> 30));
              v51 = ((((((_DWORD)v50
                       + (((_DWORD)v50 << 26) | ((unsigned int)v50 >> 6))
                       + (((unsigned int)v50 + (((_DWORD)v50 << 26) | ((unsigned int)v50 >> 6))) >> 10)) ^ ((uint64_t)((_DWORD)v50 + (((_DWORD)v50 << 26) | ((unsigned int)v50 >> 6)) + (((unsigned int)v50 + (((_DWORD)v50 << 26) | ((unsigned int)v50 >> 6))) >> 10)) >> 3)) >> 3) | ((((_DWORD)v50 + (((_DWORD)v50 << 26) | ((unsigned int)v50 >> 6)) + (((unsigned int)v50 + (((_DWORD)v50 << 26) | ((unsigned int)v50 >> 6))) >> 10)) ^ (((_DWORD)v50 + (((_DWORD)v50 << 26) | ((unsigned int)v50 >> 6)) + (((unsigned int)v50 + (((_DWORD)v50 << 26) | ((unsigned int)v50 >> 6))) >> 10)) >> 3)) << 29)) << 6) | ((((((_DWORD)v50 + (((_DWORD)v50 << 26) | ((unsigned int)v50 >> 6)) + (((unsigned int)v50 + (((_DWORD)v50 << 26) | ((unsigned int)v50 >> 6))) >> 10)) ^ ((uint64_t)((_DWORD)v50 + (((_DWORD)v50 << 26) | ((unsigned int)v50 >> 6)) + (((unsigned int)v50 + (((_DWORD)v50 << 26) | ((unsigned int)v50 >> 6))) >> 10)) >> 3)) >> 3) | (((((_DWORD)v50 + (((_DWORD)v50 << 26) | ((unsigned int)v50 >> 6)) + (((unsigned int)v50 + (((_DWORD)v50 << 26) | ((unsigned int)v50 >> 6))) >> 10)) ^ ((uint64_t)((_DWORD)v50 + (((_DWORD)v50 << 26) | ((unsigned int)v50 >> 6)) + (((unsigned int)v50 + (((_DWORD)v50 << 26) | ((unsigned int)v50 >> 6))) >> 10)) >> 3)) & 7) << 29)) >> 26);
              v52 = v51 - 770681577 + (((unsigned int)(v51 + 1519294305) >> 27) | (32 * (v51 + 1519294305))) - 485697109;
              v53 = (uint64_t)v52 << 26;
              v54 = ((((unsigned int)v53 | (v52 >> 6)) + v52 + 1502713721) ^ ((((unsigned int)v53 | (v52 >> 6))
                                                                             + v52
                                                                             + 1502713721) >> 3))
                  - 770681577
                  + 754100993;
              v55 = (((unsigned int)(v54 >> 3) | ((uint8_t)v54 << 29)) ^ (8
                                                                                * ((unsigned int)(v54 >> 3) | ((uint8_t)v54 << 29))))
                  + (unsigned int)((((v54 >> 3) | ((v54 & 7) << 29)) ^ (8 * ((v54 >> 3) | ((v54 & 7) << 29)))) >> 10);
              v49 = v55 ^ (8 * v55);
              ++v48;
            }
            while ( v48 );
            v56 = (v29 >> 60) | (16 * ((v29 >> 32) & 0xFFFFFFF));
            v57 = -127 * ((v47 ^ v49) + 1502713721 - ((v47 ^ (uint64_t)v49) >> 2));
            v58 = v57 - ((v57 << 26) | (v57 >> 6));
            LODWORD(v58) = ((_DWORD)v58 << 6) + (v58 >> 26) + 1519294305;
            v59 = -127 * (v58 + ((32 * v58) | ((unsigned int)v58 >> 27)));
            v60 = -127 * ((unsigned int)v58 + ((32 * (_DWORD)v58) | ((unsigned int)v58 >> 27)));
            LODWORD(v60) = v59 + ((v60 >> 6) | ((uint8_t)v60 << 26));
            v61 = (unsigned int)v60 - (((_DWORD)v60 << 26) | ((unsigned int)v60 >> 6));
            v62 = (((_DWORD)v61 << 6) | (v61 >> 26))
                + (((unsigned int)v61 >> 21) & 0x1F | (32 * (((_DWORD)v61 << 6) | (v61 >> 26))));
            v63 = 513
                * ((((((uint64_t)v62 >> 3) | ((uint64_t)(v62 & 7) << 29)) >> 6) | (v62 >> 3 << 26))
                 + ((v62 >> 3) | ((uint8_t)v62 << 29)));
            LODWORD(v63) = 513
                         * ((((v63 ^ (8 * v63)) >> 26) | (((unsigned int)v63 ^ (8 * (_DWORD)v63)) << 6)) ^ 0xD2105517 ^ ((((((v63 ^ (8 * v63)) >> 26) | (((v63 ^ (8 * v63)) & 0x3FFFFFF) << 6)) ^ 0xD2105517) >> 23) | ((((unsigned int)((v63 ^ (8 * v63)) >> 26) | (((unsigned int)v63 ^ (8 * (_DWORD)v63)) << 6)) ^ 0xD2105517) << 9)));
            v64 = (((_DWORD)v63
                  + ((unsigned int)v63 >> 10)
                  - ((((_DWORD)v63 + ((unsigned int)v63 >> 10)) << 26) | (((unsigned int)v63 + ((unsigned int)v63 >> 10)) >> 6))) << 6) | (((_DWORD)v63 + ((unsigned int)v63 >> 10) - ((((_DWORD)v63 + ((unsigned int)v63 >> 10)) << 26) | (((unsigned int)v63 + ((unsigned int)v63 >> 10)) >> 6))) >> 26);
            v65 = v64 + (((v64 - 770681577 + 754100993) << 26) | ((v64 - 770681577 + 754100993) >> 6)) + 1502713721;
            v66 = (((unsigned int)v65 ^ (8 * (_DWORD)v65))
                 + ((unsigned int)((v65 ^ (uint64_t)(8 * v65)) >> 27) | (32
                                                                               * ((unsigned int)v65 ^ (8 * (_DWORD)v65))))) ^ (((uint64_t)(((unsigned int)v65 ^ (8 * (_DWORD)v65)) + ((unsigned int)((v65 ^ (uint64_t)(8 * v65)) >> 27) | (32 * ((unsigned int)v65 ^ (8 * (_DWORD)v65))))) >> 2) | ((uint64_t)((((uint8_t)v65 ^ (uint8_t)(8 * v65)) + ((uint8_t)((v65 ^ (uint64_t)(8 * v65)) >> 27) | (uint8_t)(32 * (v65 ^ (8 * v65))))) & 3) << 30)) ^ ((((((unsigned int)v65 ^ (8 * (_DWORD)v65)) + ((unsigned int)((v65 ^ (uint64_t)(8 * v65)) >> 27) | (32 * ((unsigned int)v65 ^ (8 * (_DWORD)v65))))) ^ (((uint64_t)(((unsigned int)v65 ^ (8 * (_DWORD)v65)) + ((unsigned int)((v65 ^ (uint64_t)(8 * v65)) >> 27) | (32 * ((unsigned int)v65 ^ (8 * (_DWORD)v65))))) >> 2) | ((uint64_t)((((uint8_t)v65 ^ (uint8_t)(8 * v65)) + ((uint8_t)((v65 ^ (uint64_t)(8 * v65)) >> 27) | (uint8_t)(32 * (v65 ^ (8 * v65))))) & 3) << 30))) >> 2) | ((uint64_t)(((uint8_t)((v65 ^ (8 * v65)) + (((v65 ^ (uint64_t)(8 * v65)) >> 27) | (32 * (v65 ^ (8 * v65))))) ^ (uint8_t)((uint64_t)(((unsigned int)v65 ^ (8 * (_DWORD)v65)) + ((unsigned int)((v65 ^ (uint64_t)(8 * v65)) >> 27) | (32 * ((unsigned int)v65 ^ (8 * (_DWORD)v65))))) >> 2)) & 3) << 30));
            LODWORD(v66) = (((((unsigned int)v65 ^ (8 * (_DWORD)v65))
                            + ((unsigned int)((v65 ^ (uint64_t)(8 * v65)) >> 27) | (32
                                                                                          * ((unsigned int)v65 ^ (8 * (_DWORD)v65))))) ^ (((((unsigned int)v65 ^ (8 * (_DWORD)v65)) + ((unsigned int)((v65 ^ (uint64_t)(8 * v65)) >> 27) | (32 * ((unsigned int)v65 ^ (8 * (_DWORD)v65))))) >> 2) | (((((uint8_t)v65 ^ (uint8_t)(8 * v65)) + ((uint8_t)((v65 ^ (uint64_t)(8 * v65)) >> 27) | (uint8_t)(32 * (v65 ^ (8 * v65))))) & 3) << 30)) ^ ((((((unsigned int)v65 ^ (8 * (_DWORD)v65)) + ((unsigned int)((v65 ^ (uint64_t)(8 * v65)) >> 27) | (32 * ((unsigned int)v65 ^ (8 * (_DWORD)v65))))) ^ (((uint64_t)(((unsigned int)v65 ^ (8 * (_DWORD)v65)) + ((unsigned int)((v65 ^ (uint64_t)(8 * v65)) >> 27) | (32 * ((unsigned int)v65 ^ (8 * (_DWORD)v65))))) >> 2) | ((uint64_t)((((uint8_t)v65 ^ (uint8_t)(8 * v65)) + ((uint8_t)((v65 ^ (uint64_t)(8 * v65)) >> 27) | (uint8_t)(32 * (v65 ^ (8 * v65))))) & 3) << 30))) >> 2) | ((uint8_t)((((v65 ^ (8 * v65)) + (((v65 ^ (uint64_t)(8 * v65)) >> 27) | (32 * (v65 ^ (8 * v65))))) ^ ((uint64_t)(((unsigned int)v65 ^ (8 * (_DWORD)v65)) + ((unsigned int)((v65 ^ (uint64_t)(8 * v65)) >> 27) | (32 * ((unsigned int)v65 ^ (8 * (_DWORD)v65))))) >> 2)) & 3) << 30))) << 6) | (v66 >> 26);
            v67 = (unsigned int)v66 - (((_DWORD)v66 << 26) | ((unsigned int)v66 >> 6));
            v68 = (v67 ^ (v67 >> 3))
                - ((v67 ^ (v67 >> 3)) >> 2)
                + 4278386712u
                - ((((unsigned int)v67 ^ (unsigned int)(v67 >> 3))
                  - (unsigned int)((v67 ^ (v67 >> 3)) >> 2)
                  - 770681577
                  + 754100993) >> 2);
            LODWORD(v68) = v68
                         - (((((unsigned int)v67 ^ (unsigned int)(v67 >> 3))
                            - (unsigned int)((v67 ^ (v67 >> 3)) >> 2)
                            - 770681577
                            + 754100993
                            - ((((unsigned int)v67 ^ (unsigned int)(v67 >> 3))
                              - (unsigned int)((v67 ^ (v67 >> 3)) >> 2)
                              - 770681577
                              + 754100993) >> 2)) >> 30)
                          + 4 * v68);
            v69 = -127
                * ((_DWORD)v68 + ((unsigned int)v68 >> 10) - (((unsigned int)v68 + ((unsigned int)v68 >> 10)) >> 2));
            v70 = (513
                 * (((unsigned int)v69 ^ ((unsigned int)(v69 >> 23) | ((_DWORD)v69 << 9)))
                  + (unsigned int)((v69 ^ ((v69 >> 23) | ((v69 & 0x7FFFFF) << 9))) >> 10))) ^ 0xD2105517LL;
            v71 = ((unsigned int)v70 ^ ((unsigned int)(v70 >> 23) | ((_DWORD)v70 << 9)))
                - ((unsigned int)((v70 ^ ((v70 >> 23) | ((v70 & 0x7FFFFF) << 9))) >> 6) | (((unsigned int)v70 ^ ((unsigned int)(v70 >> 23) | ((_DWORD)v70 << 9))) << 26))
                + 1519294305;
            v72 = ((unsigned int)(((v71 >> 3) | ((v71 & 7) << 29)) >> 6) | ((unsigned int)(v71 >> 3) << 26))
                + ((unsigned int)(v71 >> 3) | ((uint8_t)v71 << 29));
            v73 = (((v72 & 0x3FFFFFF) << 6 >> 23) | ((uint64_t)((((_DWORD)v72 << 6) | (unsigned int)(v72 >> 26)) & 0x7FFFFF) << 9)) ^ (((v72 & 0x3FFFFFF) << 6) | (v72 >> 26)) ^ 0xD2105517;
            v74 = -127 * ((((unsigned int)v73 ^ (8 * (_DWORD)v73)) << 6) | (unsigned int)((v73 ^ (8 * v73)) >> 26))
                - (((-127 * ((((unsigned int)v73 ^ (8 * (_DWORD)v73)) << 6) | (unsigned int)((v73 ^ (8 * v73)) >> 26))) >> 30)
                 - 508 * ((((unsigned int)v73 ^ (8 * (_DWORD)v73)) << 6) | (unsigned int)((v73 ^ (8 * v73)) >> 26)));
            LODWORD(v73) = (v74 ^ (((-127
                                   * ((((unsigned int)v73 ^ (8 * (_DWORD)v73)) << 6) | (unsigned int)((v73 ^ (8 * v73)) >> 26))
                                   - (((-127
                                      * ((((unsigned int)v73 ^ (8 * (_DWORD)v73)) << 6) | (unsigned int)((v73 ^ (8 * v73)) >> 26))) >> 30)
                                    - 508
                                    * ((((unsigned int)v73 ^ (8 * (_DWORD)v73)) << 6) | (unsigned int)((v73 ^ (8 * v73)) >> 26)))) >> 23) | ((_DWORD)v74 << 9)))
                         + (((v74 ^ ((v74 >> 23) | ((v74 & 0x7FFFFF) << 9))) >> 6) | (((unsigned int)v74 ^ (((-127 * ((((unsigned int)v73 ^ (8 * (_DWORD)v73)) << 6) | (unsigned int)((v73 ^ (8 * v73)) >> 26)) - (((-127 * ((((unsigned int)v73 ^ (8 * (_DWORD)v73)) << 6) | (unsigned int)((v73 ^ (8 * v73)) >> 26))) >> 30) - 508 * ((((unsigned int)v73 ^ (8 * (_DWORD)v73)) << 6) | (unsigned int)((v73 ^ (8 * v73)) >> 26)))) >> 23) | ((_DWORD)v74 << 9))) << 26));
            v75 = ((unsigned int)v73 - ((unsigned int)v73 >> 2)) ^ (8LL * ((unsigned int)v73 - ((unsigned int)v73 >> 2))) ^ ((((unsigned int)v73 - ((unsigned int)v73 >> 2)) ^ (8 * (uint64_t)((unsigned int)v73 - ((unsigned int)v73 >> 2)))) >> 3);
            v76 = ((uint64_t)(((unsigned int)v75 ^ (unsigned int)(v75 >> 3))
                                    - ((unsigned int)((v75 ^ (v75 >> 3)) >> 6) | (((unsigned int)v75 ^ (unsigned int)(v75 >> 3)) << 26))) >> 3) | (((((unsigned int)v75 ^ (unsigned int)(v75 >> 3)) - ((unsigned int)((v75 ^ (v75 >> 3)) >> 6) | (((unsigned int)v75 ^ (unsigned int)(v75 >> 3)) << 26))) & 7LL) << 29);
            LODWORD(v75) = (((v76 ^ (8 * v76)) >> 26) | (((unsigned int)v76 ^ (8 * (_DWORD)v76)) << 6))
                         - ((((v76 ^ (8 * v76)) >> 26) | (((v76 ^ (8 * v76)) & 0x3FFFFFF) << 6)) >> 2);
            LODWORD(v76) = (v75 ^ (((unsigned int)v75 >> 23) | ((_DWORD)v75 << 9))) + 1519294305;
            LODWORD(v76) = v76
                         - (((unsigned int)v76 >> 30)
                          + 4 * v76)
                         - (((unsigned int)v76 - (((unsigned int)v76 >> 30) + 4 * (_DWORD)v76)) >> 2);
            v77 = -65151
                * (((_DWORD)v76 + ((unsigned int)v76 >> 10)) ^ ((((_DWORD)v76 + ((unsigned int)v76 >> 10)) << 30) | (((unsigned int)v76 + ((unsigned int)v76 >> 10)) >> 2)));
            LODWORD(v75) = (_DWORD)v77 << 6;
            v78 = (((_DWORD)v77 << 6) | (unsigned int)(v77 >> 26)) << 6;
            LODWORD(v78) = (v78 | ((v75 & 0xFC000000) >> 26)) + (v75 & 0xFC000000 | (v78 >> 6));
            v79 = (unsigned int)v78 + (((_DWORD)v78 << 26) | ((unsigned int)v78 >> 6));
            LODWORD(v79) = (v79 ^ ((((unsigned int)v78 + (((_DWORD)v78 << 26) | ((unsigned int)v78 >> 6))) >> 23) | ((_DWORD)v79 << 9)))
                         + (((v79 ^ ((v79 >> 23) | ((v79 & 0x7FFFFF) << 9))) >> 6) | (((unsigned int)v79 ^ ((((unsigned int)v78 + (((_DWORD)v78 << 26) | ((unsigned int)v78 >> 6))) >> 23) | ((_DWORD)v79 << 9))) << 26));
            v80 = (513 * ((unsigned int)v79 ^ (8 * (_DWORD)v79))) ^ (4104LL * ((unsigned int)v79 ^ (8 * (_DWORD)v79)));
            v81 = 513 * ((unsigned int)v80 ^ (unsigned int)(v80 >> 3))
                + ((16416 * ((unsigned int)v80 ^ (unsigned int)(v80 >> 3))) | ((513
                                                                              * ((unsigned int)v80 ^ (unsigned int)(v80 >> 3))) >> 27));
            LODWORD(v81) = (((513
                            * (((unsigned int)(v81 >> 26) | ((_DWORD)v81 << 6)) ^ (unsigned int)(((v81 >> 26) | ((v81 & 0x3FFFFFF) << 6)) >> 3))) >> 2) | ((((uint8_t)((v81 >> 26) | ((_BYTE)v81 << 6)) ^ (uint8_t)(((v81 >> 26) | ((v81 & 0x3FFFFFF) << 6)) >> 3)) & 3) << 30)) ^ (513 * (((v81 >> 26) | ((_DWORD)v81 << 6)) ^ (((v81 >> 26) | ((v81 & 0x3FFFFFF) << 6)) >> 3))) ^ 0xD2105517 ^ (((((uint64_t)(513 * (((unsigned int)(v81 >> 26) | ((_DWORD)v81 << 6)) ^ (unsigned int)(((v81 >> 26) | ((v81 & 0x3FFFFFF) << 6)) >> 3))) >> 2) | ((uint64_t)(((uint8_t)((v81 >> 26) | ((_BYTE)v81 << 6)) ^ (uint8_t)(((v81 >> 26) | ((v81 & 0x3FFFFFF) << 6)) >> 3)) & 3) << 30)) ^ (513 * (((unsigned int)(v81 >> 26) | ((_DWORD)v81 << 6)) ^ (unsigned int)(((v81 >> 26) | ((v81 & 0x3FFFFFF) << 6)) >> 3))) ^ 0xD2105517LL) >> 3);
            v82 = ((unsigned int)v81 ^ (8 * (_DWORD)v81))
                - 770681577
                + 754100993
                + ((32 * (((unsigned int)v81 ^ (8 * (_DWORD)v81)) - 770681577 + 754100993)) | ((((unsigned int)v81 ^ (8 * (_DWORD)v81))
                                                                                              - 770681577
                                                                                              + 754100993) >> 27));
            LODWORD(v82) = ((v82 >> 26) | ((_DWORD)v82 << 6)) - (((v82 >> 26) | ((v82 & 0x3FFFFFF) << 6)) >> 2);
            LODWORD(v78) = (((unsigned int)v82 + ((unsigned int)v82 >> 10)) >> 10)
                         + v82
                         + ((unsigned int)v82 >> 10)
                         + 1519294305;
            v83 = (unsigned int)v78 + ((32 * (_DWORD)v78) | ((unsigned int)v78 >> 27));
            LODWORD(v78) = (((_DWORD)v83 << 6) | (v83 >> 26))
                         - (((v83 & 0x3FFFFFF) << 6 >> 30)
                          + 4 * (((_DWORD)v83 << 6) | (v83 >> 26)));
            v84 = -127 * (((_DWORD)v78 + ((32 * (_DWORD)v78) | ((unsigned int)v78 >> 27))) ^ 0xD2105517);
            v85 = -127
                * ((((_DWORD)v84 << 6) | (unsigned int)(v84 >> 26))
                 + (((unsigned int)v84 >> 21) & 0x1F | (32 * (((_DWORD)v84 << 6) | (unsigned int)(v84 >> 26)))));
            v86 = (v85 >> 3) ^ v85 ^ 0xD2105517 ^ (((v85 >> 3) ^ v85 ^ 0xD2105517) >> 3);
            v87 = (unsigned int)v86 - ((unsigned int)(v86 >> 6) | ((_DWORD)v86 << 26));
            LODWORD(v85) = ((v87 >> 3) | ((uint8_t)v87 << 29))
                         + ((((v87 >> 3) | ((v87 & 7) << 29)) >> 6) | ((uint8_t)(v87 >> 3) << 26));
            v88 = ((unsigned int)v85 - (((_DWORD)v85 << 26) | ((unsigned int)v85 >> 6))) ^ 0xD2105517LL;
            LODWORD(v67) = v88 ^ ((v88 >> 2) | ((_DWORD)v88 << 30));
            v89 = ((unsigned int)(v67 + 1519294305) >> 10) + (unsigned int)v67 + 1519294305;
            v90 = (uint64_t)((((unsigned int)v89 ^ (8 * (_DWORD)v89))
                                    - ((unsigned int)((v89 ^ (uint64_t)(8 * v89)) >> 6) | (((unsigned int)v89 ^ (8 * (_DWORD)v89)) << 26))) & 0x3FFFFFF) << 6;
            v91 = v90 | ((uint64_t)(((unsigned int)v89 ^ (8 * (_DWORD)v89))
                                          - ((unsigned int)((v89 ^ (uint64_t)(8 * v89)) >> 6) | (((unsigned int)v89 ^ (8 * (_DWORD)v89)) << 26))) >> 26);
            v92 = ((unsigned int)v91 ^ ((unsigned int)(v90 >> 23) | ((_DWORD)v91 << 9)))
                - (unsigned int)((v91 ^ ((v90 >> 23) | ((v91 & 0x7FFFFF) << 9))) >> 2);
            LODWORD(v91) = v92 ^ ((((unsigned int)v91 ^ ((unsigned int)(v90 >> 23) | ((_DWORD)v91 << 9)))
                                 - (unsigned int)((v91 ^ ((v90 >> 23) | ((v91 & 0x7FFFFF) << 9))) >> 2)) >> 3);
            LODWORD(v91) = v91 - ((v92 >> 30) + 4 * v91);
            LODWORD(v91) = (((unsigned int)v91 >> 6) | ((uint8_t)v91 << 26)) + v91 - 770681577 + 754100993;
            LODWORD(v90) = v91 + (((unsigned int)v91 >> 6) | ((uint8_t)v91 << 26));
            v93 = (unsigned int)v91 + (((unsigned int)v91 >> 6) | ((uint8_t)v91 << 26));
            LODWORD(v90) = ((v93 >> 27) | (32 * v93)) + v90 - 770681577 + 754100993;
            LODWORD(v90) = 513
                         * (16129
                          * ((((_DWORD)v90 - (((unsigned int)v90 >> 30) + 4 * (_DWORD)v90)) << 29) | (((unsigned int)v90 - (((unsigned int)v90 >> 30) + 4 * (_DWORD)v90)) >> 3))
                          - 16580584)
                         + ((513
                           * (16129
                            * ((((_DWORD)v90 - (((unsigned int)v90 >> 30) + 4 * (_DWORD)v90)) << 29) | (((unsigned int)v90 - (((unsigned int)v90 >> 30) + 4 * (_DWORD)v90)) >> 3))
                            - 16580584)) >> 10);
            v94 = (513
                 * ((-65151 * ((unsigned int)v90 ^ (((_DWORD)v90 << 30) | ((unsigned int)v90 >> 2)))) ^ ((((unsigned int)v90 ^ (((_DWORD)v90 << 30) | ((unsigned int)v90 >> 2))) << 30) | ((-65151 * ((unsigned int)v90 ^ (((_DWORD)v90 << 30) | ((unsigned int)v90 >> 2)))) >> 2)))) ^ 0xD2105517LL;
            LODWORD(v94) = (((v94 ^ (8 * v94)) - ((v94 ^ (uint64_t)(8 * v94)) >> 2)) ^ (((((unsigned int)v94 ^ (8 * (_DWORD)v94))
                                                                                                - (unsigned int)((v94 ^ (uint64_t)(8 * v94)) >> 2)) >> 2) | (((((uint8_t)v94 ^ (uint8_t)(8 * v94)) - (uint8_t)((v94 ^ (uint64_t)(8 * v94)) >> 2)) & 3) << 30)))
                         + (((((unsigned int)v94 ^ (8 * (_DWORD)v94))
                            - (unsigned int)((v94 ^ (uint64_t)(8 * v94)) >> 2)) ^ (((uint64_t)(((unsigned int)v94 ^ (8 * (_DWORD)v94)) - (unsigned int)((v94 ^ (uint64_t)(8 * v94)) >> 2)) >> 2) | ((uint64_t)((((uint8_t)v94 ^ (uint8_t)(8 * v94)) - (uint8_t)((v94 ^ (uint64_t)(8 * v94)) >> 2)) & 3) << 30))) >> 10);
            LODWORD(v94) = 513 * (v94 - ((unsigned int)v94 >> 2)) - 16580584;
            v95 = -127 * ((_DWORD)v94 - ((unsigned int)v94 >> 2))
                + ((-4064 * ((_DWORD)v94 - ((unsigned int)v94 >> 2))) | ((-127
                                                                        * ((unsigned int)v94 - ((unsigned int)v94 >> 2))) >> 27));
            LODWORD(v95) = (v95 ^ ((v95 >> 23) | ((_DWORD)v95 << 9)))
                         + (((v95 ^ ((v95 >> 23) | ((v95 & 0x7FFFFF) << 9))) >> 6) | ((((uint8_t)v95 ^ (uint8_t)(v95 >> 23)) & 0x3F) << 26));
            LODWORD(v63) = -127
                         * ((v95 ^ (8 * v95) & 0xFFFFFFF8)
                          + 1502713721
                          + (((((unsigned int)v95 ^ (8 * (_DWORD)v95) & 0xFFFFFFF8) + 1502713721) << 26) | ((((unsigned int)v95 ^ (8 * (_DWORD)v95) & 0xFFFFFFF8) + 1502713721) >> 6)));
            v96 = -127
                * (((unsigned int)v95 ^ (8 * (_DWORD)v95) & 0xFFFFFFF8)
                 + 1502713721
                 + (((((unsigned int)v95 ^ (8 * (_DWORD)v95) & 0xFFFFFFF8) + 1502713721) << 26) | ((((unsigned int)v95 ^ (8 * (_DWORD)v95) & 0xFFFFFFF8)
                                                                                                  + 1502713721) >> 6)));
            LODWORD(v96) = v63 + ((v96 >> 6) | ((_DWORD)v96 << 26));
            v97 = 513 * ((unsigned int)v96 ^ (((_DWORD)v96 << 30) | ((unsigned int)v96 >> 2)));
            v98 = ((unsigned int)v97 ^ (((513 * ((unsigned int)v96 ^ (((_DWORD)v96 << 30) | ((unsigned int)v96 >> 2)))) >> 23) | ((_DWORD)v97 << 9)))
                + ((unsigned int)((v97 ^ ((v97 >> 23) | ((v97 & 0x7FFFFF) << 9))) >> 6) | (((unsigned int)v97 ^ (((513 * ((unsigned int)v96 ^ (((_DWORD)v96 << 30) | ((unsigned int)v96 >> 2)))) >> 23) | ((_DWORD)v97 << 9))) << 26));
            LODWORD(v97) = ((v98 ^ ((v98 >> 2) | ((v98 & 3) << 30))) - ((v98 ^ ((v98 >> 2) | ((v98 & 3) << 30))) >> 2)) ^ (((((unsigned int)v98 ^ ((unsigned int)(v98 >> 2) | ((v98 & 3) << 30))) - (unsigned int)((v98 ^ ((v98 >> 2) | ((v98 & 3) << 30))) >> 2)) << 9) | ((((unsigned int)v98 ^ ((unsigned int)(v98 >> 2) | ((v98 & 3) << 30))) - (unsigned int)((v98 ^ ((v98 >> 2) | ((v98 & 3) << 30))) >> 2)) >> 23));
            v99 = ((unsigned int)v97 ^ (8 * (_DWORD)v97) ^ (8 * ((unsigned int)v97 ^ (8 * (_DWORD)v97)))) + 1502713721;
            v100 = (513
                  * (((unsigned int)v99 ^ (8 * (_DWORD)v99))
                   - ((unsigned int)((v99 ^ (uint64_t)(8 * v99)) >> 6) | (((unsigned int)v99 ^ (8 * (_DWORD)v99)) << 26)))) ^ 0xD2105517LL;
            LODWORD(v98) = (((uint8_t)v100 << 29) | (v100 >> 3))
                         - (((v100 & 7) << 29 >> 30)
                          + 4 * (((uint8_t)v100 << 29) | (v100 >> 3)));
            LODWORD(v100) = v98
                          + (((unsigned int)(v98 + 1519294305) >> 6) | (((_DWORD)v98 + 1519294305) << 26))
                          + 1519294305;
            v101 = -127 * ((unsigned int)v100 + (((_DWORD)v100 << 26) | ((unsigned int)v100 >> 6)));
            LODWORD(v90) = (v101 ^ (8 * v101))
                         + (((v101 ^ (uint64_t)(8 * v101)) >> 6) | ((((uint8_t)v101 ^ (uint8_t)(8 * v101)) & 0x3F) << 26));
            v102 = -127
                 * ((_DWORD)v90
                  - (((unsigned int)v90 >> 30)
                   + 4 * (_DWORD)v90)
                  + ((((_DWORD)v90 - (((unsigned int)v90 >> 30) + 4 * (_DWORD)v90)) << 26) | (((unsigned int)v90
                                                                                             - (((unsigned int)v90 >> 30)
                                                                                              + 4 * (_DWORD)v90)) >> 6)));
            LODWORD(v102) = ((((8 * v102) ^ v102 ^ 0xD2105517) - (((8 * v102) ^ v102 ^ 0xD2105517uLL) >> 2)) ^ 0xD2105517)
                          + 1519294305;
            LODWORD(v102) = -127 * ((v102 + (((_DWORD)v102 << 26) | ((unsigned int)v102 >> 6))) ^ 0xD2105517);
            v103 = v175;
            v104 = v174;
            v29 = v174 + (v56 << 32);
            v105 = (uint64_t)((((_DWORD)v102 << 30) | ((unsigned int)v102 >> 2)) ^ (unsigned int)v102 ^ (unsigned int)v175 ^ (unsigned int)v56) << 32;
            v28 = v105 | (unsigned int)v35;
            v31 = v151 + 1;
          }
          while ( v151 != v152 );
          v106 = v150;
          *(&v167 + v150) = v56 << 32;
          *(&v166 + v106) = v105;
          *(&v168 + v106) = 0LL;
          v169[v106] = v53;
          *(&v158 + v106) = v152;
          *(&v159 + v106) = v173;
          *(&v160 + v106) = v172;
          *(&v161 + v106) = v171;
          *(&v162 + v106) = v170;
          *(&v163 + v106) = v104;
          *(&v164 + v106) = v56;
          *(&v165 + v106) = v103;
          *(&v154 + v106) = v28;
          *(&v153 + v106) = v29;
          v107 = *(&v151 + v106);
          *(&v155 + v106) = 0LL;
          v108 = (unsigned int)v107;
          *(&v156 + v106) = (unsigned int)v107;
          v109 = v107 >> 32;
          *(&v157 + v106) = v109;
          while ( 1 )
          {
            *(&v153 + v30) = v109;
            *(&v152 + v30) = v108;
            *(&v151 + v30) = v109;
            *(&v154 + v30) = 0LL;
            v116 = *(&v153 + v30);
            v117 = *(&v152 + v30);
            v118 = 0LL;
            v119 = 0LL;
            v120 = 0LL;
            do
            {
              v121 = v117;
              v122 = v117 ^ (*(_DWORD *)((char *)&Table_00400648 + (v118 >> 30)) + v116);
              v117 = v122;
              v109 = (v121 | ((uint64_t)((*(_DWORD *)((char *)&Table_00400648 + ((v120 >> 32) | 4)) | v122) ^ (unsigned int)v109) << 32)) >> 32;
              v120 += 0x800000000LL;
              --v119;
              v118 += 0x200000000LL;
              LODWORD(v116) = v109;
            }
            while ( v119 != -6 );
            *(&v154 + v30) = 6LL;
            *(&v153 + v30) = v109;
            *(&v151 + v30) = v109;
            *(&v155 + v30) = 0LL;
            v123 = *(&v150 + v30);
            *(&v152 + v30) = v123;
            *(&v150 + v30) = v117;
            if ( v123 )
              break;
            v110 = *(&v150 + v30);
            v111 = *(&v151 + v30);
            v112 = v111 ^ ((16 * ((unsigned int)v110 ^ (unsigned int)*(&v147 + v30))) | (unsigned int)((v110 ^ (uint64_t)(unsigned int)*(&v147 + v30)) >> 28));
            v113 = (v111 ^ ((uint64_t)*(&v147 + v30) >> 32)) >> 18;
            v114 = (v111 ^ ((uint64_t)*(&v147 + v30) >> 32)) << 14;
            *(&v154 + v30) = v114;
            *(&v153 + v30) = v111;
            *(&v152 + v30) = v110;
            v115 = *(&v149 + v30) ^ (v112 | ((uint64_t)(((unsigned int)v113 | (unsigned int)v114) ^ (unsigned int)v110) << 32));
            *(&v147 + v30) = v115;
            *(&v149 + v30) = 1LL;
            v108 = (unsigned int)v115;
            *(&v150 + v30) = (unsigned int)v115;
            v109 = v115 >> 32;
            *(&v151 + v30--) = v109;
          }
          v124 = *(&v148 + v30);
          v125 = ((v109 ^ (uint64_t)(unsigned int)*(&v147 + v30)) >> 6) | (((v109 ^ (unsigned int)*(&v147 + v30)) & 0x3F) << 26);
          v126 = (v109 ^ v117 ^ ((uint64_t)*(&v147 + v30) >> 32)) >> 14;
          v127 = (v109 ^ v117 ^ ((uint64_t)*(&v147 + v30) >> 32)) << 18;
          *(&v154 + v30) = v127;
          *(&v153 + v30) = v109;
          *(&v152 + v30) = v117;
          v128 = (uint64_t)((unsigned int)v126 | (unsigned int)v127) << 32;
          *(&v151 + v30) = v128;
          v129 = v125 | v128;
          *(&v150 + v30) = v129;
          v130 = *(&v149 + v30) ^ v129;
          v26 = v30 - 4;
          v131 = *(&v146 + v30);
          *(&v146 + v30) = v131 + 1;
          *(&v148 + v30) = v124;
          *(&v147 + v30) = v130;
          *(&v149 + v30) = v131 - 14;
        }
        while ( v131 != 14 );
        *(&v148 + v30) = 15LL;
        *(&v147 + v30) = *(&v145 + v30);
        *(&v146 + v30) = *(&v144 + v30);
        v132 = *(&v142 + v30);
        v133 = *(&v143 + v30);
        *(&v145 + v30) = v133;
        *(&v144 + v30) = v132;
        *(&v143 + v30) = v130;
        *(&v142 + v30) = v124;
        if ( v133 )
          break;
        v7 = v30 - 7;
        *(&v142 + v30) = v130;
        *(&v141 + v30) = v124;
        *(&v143 + v30) = 1LL;
        *(&v144 + v30) = v124;
        *(&v145 + v30) = v130;
      }
      v134 = *(&v140 + v30);
      v135 = *(&v141 + v30);
      *(&v145 + v30) = v132;
      *(&v144 + v30) = v135;
      *(&v146 + v30) = v134 + 1;
      v4 = v30 - 6;
      *(&v147 + v30) = v134 - 3;
    }
    while ( v134 != 3 );
    v136 = v130 ^ 0x658302A68E8E1C24LL;
    v137 = v124 ^ 0xDC7564F1612E5347LL;
    v138 = v132 ^ 0xD9C69B74A86EC613LL;
    v139 = v135 ^ 0x65850B36E76AAED5LL;
    printf("%016llX\n", v136, v4, 4LL, v30, -6LL);
    printf("%016llX\n", v137);
    printf("%016llX\n", v138);
    printf("%016llX\n", v139);
    result = 4206744LL;    
    if ( v139 + v138 + v136 + v137 != -2920524886216481771LL )
    {
      puts("WRONG RESULT!!!");
      result = 4206776LL;
    }
  }

  return result;
}

uint64_t __fastcall VM_Func(const char* Flag)
{
	return VMFunc((uint64_t *) Flag);
}

int main(void) {
	//BinaryEnd = (uint64_t)decrypted_file + decrypted_file_len;

	//SSTIC{a947d6980ccf7b87cb8d7c246} <= Example key
// Build up flag
// 25 chars huma readable
	//char FlagInner[] = "Z11111112222222233333333Z";
	char FlagInner[] =   "Z11111112222222233333333Z";
	//klee_make_symbolic(FlagInner, 26, "InnerFlag");
	printf("%d\n", sizeof(FlagInner));
	for (int i = 0; i < 25; i++) {
		if (FlagInner[i] >= '0' && FlagInner[i] <= '9')
			continue;

		if (FlagInner[i] >= 'a' && FlagInner[i] <= 'z')
			continue;

		if (FlagInner[i] >= 'A' && FlagInner[i] <= 'Z')
			continue;

		//printf("Wrong Input!\n");
		exit(1);
	}

	char Flag[] = "SSTIC{1111111122222222333333334}"; // Only => 2DB6A6078FFCF147
	memcpy(Flag + 6, FlagInner, 25); // = D7783616EF60E415

	uint64_t * SimArgv[2];
	SimArgv[0] = (uint64_t*)0x1111111111111111;
	SimArgv[1] = (uint64_t*)Flag;

	//uint64_t Result = VM_Func(Flag);
	uint64_t Result = VM_Func(Flag);
	printf("Result %llX\n", Result);

	return 0;
}