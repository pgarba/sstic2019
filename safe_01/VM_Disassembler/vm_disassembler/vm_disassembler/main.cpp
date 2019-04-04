#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

#include "Unwind.h"
#include "df.h"
#include "dwarf2.h"

std::map<uint64_t, std::string> Disassembly;

struct Edge {
	uint64_t NextVA;
	int StackPtr;

	Edge(int StackPtr, uint64_t NextVA) : NextVA(NextVA), StackPtr(StackPtr){
	}

	Edge() {

	};
};
typedef std::vector<Edge> Edges;

uint64_t BinaryStart = 0;
uint64_t BinaryEnd = 0;
uint64_t BinaryImageBase = 0x400000;

int InstCount = 1;

// The Stack Pointer
int stack_elt = 1;


std::string getStackPtrStr() {
	return "S" + std::to_string(stack_elt);
}

bool isBinaryVA(const void* VA) {
	uint64_t VA_Ptr = (uint64_t)VA;
	if (VA_Ptr >= BinaryStart && VA_Ptr < BinaryEnd) {
		return true;
	}

	return false;
}

uint64_t getBinaryVA(const void* VA) {
	uint64_t VA_Ptr = (uint64_t)VA - BinaryStart;

	return VA_Ptr + BinaryImageBase;
}

std::string Line;

Edges disassemble(const unsigned char* op_ptr, Edges &E) {
	Line = "";
	char Buffer[1024] = { 0 };
		sprintf(Buffer, "_%08X: ", (uint64_t)getBinaryVA(op_ptr));
		Line += Buffer;

		enum dwarf_location_atom op = (dwarf_location_atom)* op_ptr++;		
		_uleb128_t reg, utmp;
		_sleb128_t offset, stmp;

		//sprintf(Buffer, "%02X ", op);

		switch (op) {
		case DW_OP_lit0:
		case DW_OP_lit1:
		case DW_OP_lit2:
		case DW_OP_lit3:
		case DW_OP_lit4:
		case DW_OP_lit5:
		case DW_OP_lit6:
		case DW_OP_lit7:
		case DW_OP_lit8:
		case DW_OP_lit9:
		case DW_OP_lit10:
		case DW_OP_lit11:
		case DW_OP_lit12:
		case DW_OP_lit13:
		case DW_OP_lit14:
		case DW_OP_lit15:
		case DW_OP_lit16:
		case DW_OP_lit17:
		case DW_OP_lit18:
		case DW_OP_lit19:
		case DW_OP_lit20:
		case DW_OP_lit21:
		case DW_OP_lit22:
		case DW_OP_lit23:
		case DW_OP_lit24:
		case DW_OP_lit25:
		case DW_OP_lit26:
		case DW_OP_lit27:
		case DW_OP_lit28:
		case DW_OP_lit29:
		case DW_OP_lit30:
		case DW_OP_lit31:
			sprintf(Buffer, "%s = DW_OP_lit(%02d);\n", getStackPtrStr().c_str(), op - DW_OP_lit0);
			Line += Buffer;
			stack_elt++;
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));			
			//result = op - DW_OP_lit0;									
			return E;
			break;

		case DW_OP_addr:
			sprintf(Buffer, "%s = DW_OP_addr(0x%08X);\n", getStackPtrStr().c_str(), op_ptr);			
			Line += Buffer;
			//result = (_Unwind_Word)(_Unwind_Ptr)read_pointer(op_ptr);
			op_ptr += sizeof(void*);
			stack_elt++;
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));			
			return E;
			break;

		case DW_OP_GNU_encoded_addr: {
			sprintf(Buffer, "DW_OP_GNU_encoded_addr\n");
			Line += Buffer;
			//_Unwind_Ptr presult;
			//op_ptr = read_encoded_value(context, *op_ptr, op_ptr + 1, &presult);
			//result = presult;
		} break;

		case DW_OP_const1u:
			sprintf(Buffer, "%s = DW_OP_const1u(0x%02X);\n", getStackPtrStr().c_str(), *(uint8_t*)op_ptr);			
			Line += Buffer;
			//result = read_1u(op_ptr);
			op_ptr += 1;
			// printDebug("0x%X\n", result);			
			stack_elt++;
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));			
			return E;
			break;
		case DW_OP_const1s:
			sprintf(Buffer, "%s = DW_OP_const1s(0x%02X);\n", getStackPtrStr().c_str(), *(uint8_t*)op_ptr);			
			Line += Buffer;
			//result = read_1s(op_ptr);
			op_ptr += 1;
			// printDebug("0x%X\n", result);			
			stack_elt++;
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));			
			return E;
			break;
		case DW_OP_const2u:
			sprintf(Buffer, "%s = DW_OP_const2u(0x%04X);\n", getStackPtrStr().c_str(), *(uint16_t*)op_ptr);
			Line += Buffer;
			//result = read_2u(op_ptr);			
			op_ptr += 2;			
			stack_elt++;
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));			
			return E;
			break;
		case DW_OP_const2s:
			sprintf(Buffer, "%s = DW_OP_const2s(0x%04X);\n", getStackPtrStr().c_str(), *(uint16_t*)op_ptr);			
			Line += Buffer;
			//result = read_2s(op_ptr);
			op_ptr += 2;
			stack_elt++;
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));			
			return E;
			break;
		case DW_OP_const4u:
			sprintf(Buffer, "%s = DW_OP_const4u(0x%08X);\n", getStackPtrStr().c_str(), *(uint32_t*)op_ptr);			
			Line += Buffer;
			//result = read_4u(op_ptr);
			op_ptr += 4;
			stack_elt++;
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));			
			return E;
			break;
		case DW_OP_const4s:
			sprintf(Buffer, "%s = DW_OP_const4s(0x%08X);\n", getStackPtrStr().c_str(), *(uint32_t*)op_ptr);			
			Line += Buffer;
			//result = read_4s(op_ptr);
			op_ptr += 4;			
			stack_elt++;
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));			
			return E;
			break;
		case DW_OP_const8u:
			sprintf(Buffer, "%s = DW_OP_const8u(0x%016llX);\n", getStackPtrStr().c_str(), *(uint64_t *) op_ptr);			
			Line += Buffer;
			//printDebug("DW_OP_const8u *(%llX) = ", op_ptr);
			//result = read_8u(op_ptr);
			//printDebug("%llX\n", result);
			op_ptr += 8;			
			stack_elt++;
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));			
			return E;
			break;
		case DW_OP_const8s:
			sprintf(Buffer, "%s = DW_OP_const8s(0x%016llX);\n", getStackPtrStr().c_str(), *(uint64_t*)op_ptr);			
			Line += Buffer;
			//result = read_8s(op_ptr);
			op_ptr += 8;			
			stack_elt++;
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));			
			return E;
			break;
		case DW_OP_constu:
			sprintf(Buffer, "DW_OP_constu();\n");
			Line += Buffer;
			//op_ptr = read_uleb128(op_ptr, &utmp);
			//result = (_Unwind_Word)utmp;
			break;
		case DW_OP_consts:
			sprintf(Buffer, "DW_OP_consts();\n");
			Line += Buffer;
			//op_ptr = read_sleb128(op_ptr, &stmp);
			//result = (_Unwind_Sword)stmp;
			break;

		case DW_OP_reg0:
		case DW_OP_reg1:
		case DW_OP_reg2:
		case DW_OP_reg3:
		case DW_OP_reg4:
		case DW_OP_reg5:
		case DW_OP_reg6:
		case DW_OP_reg7:
		case DW_OP_reg8:
		case DW_OP_reg9:
		case DW_OP_reg10:
		case DW_OP_reg11:
		case DW_OP_reg12:
		case DW_OP_reg13:
		case DW_OP_reg14:
		case DW_OP_reg15:
		case DW_OP_reg16:
		case DW_OP_reg17:
		case DW_OP_reg18:
		case DW_OP_reg19:
		case DW_OP_reg20:
		case DW_OP_reg21:
		case DW_OP_reg22:
		case DW_OP_reg23:
		case DW_OP_reg24:
		case DW_OP_reg25:
		case DW_OP_reg26:
		case DW_OP_reg27:
		case DW_OP_reg28:
		case DW_OP_reg29:
		case DW_OP_reg30:
		case DW_OP_reg31:
			sprintf(Buffer, "%s = DW_OP_reg(%d);\n", getStackPtrStr().c_str(), op - DW_OP_reg0);
			Line += Buffer;
			//result = _Unwind_GetGR(context, op - DW_OP_reg0);				
			stack_elt++;
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));			
			return E;
			//break;
		case DW_OP_regx:
			sprintf(Buffer, "DW_OP_regx ...\n");
			Line += Buffer;
			//op_ptr = read_uleb128(op_ptr, &reg);
			//result = _Unwind_GetGR(context, reg);
			break;

		case DW_OP_breg0:
		case DW_OP_breg1:
		case DW_OP_breg2:
		case DW_OP_breg3:
		case DW_OP_breg4:
		case DW_OP_breg5:
		case DW_OP_breg6:
		case DW_OP_breg7:
		case DW_OP_breg8:
		case DW_OP_breg9:
		case DW_OP_breg10:
		case DW_OP_breg11:
		case DW_OP_breg12:
		case DW_OP_breg13:
		case DW_OP_breg14:
		case DW_OP_breg15:
		case DW_OP_breg16:
		case DW_OP_breg17:
		case DW_OP_breg18:
		case DW_OP_breg19:
		case DW_OP_breg20:
		case DW_OP_breg21:
		case DW_OP_breg22:
		case DW_OP_breg23:
		case DW_OP_breg24:
		case DW_OP_breg25:
		case DW_OP_breg26:
		case DW_OP_breg27:
		case DW_OP_breg28:
		case DW_OP_breg29:
		case DW_OP_breg30:
		case DW_OP_breg31:
			sprintf(Buffer, "DW_OP_breg(%d);\n", op - DW_OP_breg0);
			Line += Buffer;
			//op_ptr = read_sleb128(op_ptr, &offset);
			//result = _Unwind_GetGR(context, op - DW_OP_breg0) + offset;
			break;
		case DW_OP_bregx:
			sprintf(Buffer, "DW_OP_bregx()\n");
			Line += Buffer;
			//op_ptr = read_uleb128(op_ptr, &reg);
			//op_ptr = read_sleb128(op_ptr, &offset);
			//result = _Unwind_GetGR(context, reg) + (_Unwind_Word)offset;
			break;

		case DW_OP_dup:
			sprintf(Buffer, "%s = S%d; // DW_OP_dup();\n", getStackPtrStr().c_str(), stack_elt - 1);
			Line += Buffer;
			//gcc_assert(stack_elt);
			//result = stack[stack_elt - 1];
			//printDebug("0x%llX\n", result);			
			stack_elt++;
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));			
			return E;
			break;

		case DW_OP_drop:
			sprintf(Buffer, "DW_OP_drop();\n");
			Line += Buffer;
			//gcc_assert(stack_elt);			
			stack_elt -= 1;
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));			
			return E;
			break;

		case DW_OP_pick:			
			offset = *op_ptr++;
			sprintf(Buffer, "S%d = S%d; // DW_OP_pick(S%d)\n", stack_elt, stack_elt - 1 - offset, stack_elt - 1 - offset);
			Line += Buffer;
			//gcc_assert(offset < stack_elt - 1);
			//result = stack[stack_elt - 1 - offset];
			//printDebug("0x%llX\n", result);
			stack_elt++;
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));			
			return E;
			break;

		case DW_OP_over:
			sprintf(Buffer, "S%d = DW_OP_over(S%d);\n", stack_elt, stack_elt - 2);
			Line += Buffer;
			//gcc_assert(stack_elt >= 2);
			//result = stack[stack_elt - 2];
			
			stack_elt++;
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));			
			return E;
			break;

		case DW_OP_swap: {
			sprintf(Buffer, "DW_OP_swap(S%d, S%d);\n", stack_elt - 1,
				stack_elt - 2);
			Line += Buffer;
			//_Unwind_Word t;
			//gcc_assert(stack_elt >= 2);
			//t = stack[stack_elt - 1];
			//stack[stack_elt - 1] = stack[stack_elt - 2];
			//stack[stack_elt - 2] = t;
			//goto no_push;
			
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));
			return E;
			break;
		}

		case DW_OP_rot: {
			sprintf(Buffer, "DW_OP_rot(S%d, S%d, S%d);\n", stack_elt - 1, stack_elt - 2, stack_elt - 3);
			Line += Buffer;
			//_Unwind_Word t1, t2, t3;

			//gcc_assert(stack_elt >= 3);
			//t1 = stack[stack_elt - 1];
			//t2 = stack[stack_elt - 2];
			//t3 = stack[stack_elt - 3];			
			//stack[stack_elt - 1] = t2;
			//stack[stack_elt - 2] = t3;
			//stack[stack_elt - 3] = t1;
			//goto no_push;
			
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));
			return E;
			break;
		}

		case DW_OP_deref:
		case DW_OP_deref_size:
		case DW_OP_abs:
		case DW_OP_neg:
		case DW_OP_not:
		case DW_OP_plus_uconst:
			/* Unary operations.  */
			//gcc_assert(stack_elt);
			stack_elt -= 1;

			//result = stack[stack_elt];

			switch (op) {
			case DW_OP_deref: {				
				sprintf(Buffer, "%s = DW_OP_deref(S%d);\n", getStackPtrStr().c_str(), stack_elt);
				Line += Buffer;
				//void* ptr = (void*)(_Unwind_Ptr)result;
				//result = (_Unwind_Ptr)read_pointer(ptr);				
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
			} break;

			case DW_OP_deref_size: {
				uint8_t i = *op_ptr++;
				sprintf(Buffer, "%s = DW_OP_deref_size(%d, S%d);\n", getStackPtrStr().c_str(), i, stack_elt);
				Line += Buffer;
				
				/*
				void* ptr = (void*)(_Unwind_Ptr)result;
				switch (*op_ptr++) {
				case 1:
					result = read_1u(ptr);
					break;
				case 2:
					result = read_2u(ptr);
					break;
				case 4:
					result = read_4u(ptr);
					break;
				case 8:
					result = read_8u(ptr);
					break;
				default:
					gcc_unreachable();
				}*/
								
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
			} break;

			case DW_OP_abs:
				sprintf(Buffer, "%s = DW_OP_abs(S%d);\n", getStackPtrStr().c_str(), stack_elt);
				Line += Buffer;
				//if ((_Unwind_Sword)result < 0)
				//	result = -result;							
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			case DW_OP_neg:
				sprintf(Buffer, "%s = DW_OP_neg(S%d);\n", getStackPtrStr().c_str(), stack_elt);				
				Line += Buffer;
				//result = -result;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			case DW_OP_not:
				sprintf(Buffer, "%s = DW_OP_not(S%d)\n", getStackPtrStr().c_str(), stack_elt);				
				Line += Buffer;
				//result = ~result;			
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			case DW_OP_plus_uconst:
				sprintf(Buffer, "DW_OP_plus_uconst\n");
				Line += Buffer;
				//op_ptr = read_uleb128(op_ptr, &utmp);
				//result += (_Unwind_Word)utmp;
				//break;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			default:
				//gcc_unreachable();
				break;
			}
			break;

		case DW_OP_and:
		case DW_OP_div:
		case DW_OP_minus:
		case DW_OP_mod:
		case DW_OP_mul:
		case DW_OP_or:
		case DW_OP_plus:
		case DW_OP_shl:
		case DW_OP_shr:
		case DW_OP_shra:
		case DW_OP_xor:
		case DW_OP_le:
		case DW_OP_ge:
		case DW_OP_eq:
		case DW_OP_lt:
		case DW_OP_gt:
		case DW_OP_ne: {
			/* Binary operations.  */
			//_Unwind_Word first, second;
			//gcc_assert(stack_elt >= 2);
			stack_elt -= 2;

			//second = stack[stack_elt];
			//first = stack[stack_elt + 1];

			switch (op) {
			case DW_OP_and: {
				sprintf(Buffer, "%s = DW_OP_and(S%d, S%d);\n", getStackPtrStr().c_str(), stack_elt, stack_elt+1);
				Line += Buffer;
				//result = second & first;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
			}
				break;
			case DW_OP_div:
				sprintf(Buffer, "%s = DW_OP_div(S%d, S%d);\n", getStackPtrStr().c_str(), stack_elt, stack_elt + 1);
				Line += Buffer;
				//(_Unwind_Sword)second / (_Unwind_Sword)first);
				//result = (_Unwind_Sword)second / (_Unwind_Sword)first;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			case DW_OP_minus:
				sprintf(Buffer, "%s = DW_OP_minus(S%d, S%d);\n", getStackPtrStr().c_str(), stack_elt, stack_elt + 1);
				Line += Buffer;
				//result = second - first;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			case DW_OP_mod:
				sprintf(Buffer, "%s = DW_OP_mod(S%d, S%d);\n", getStackPtrStr().c_str(), stack_elt, stack_elt + 1);
				Line += Buffer;
				//result = second % first;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			case DW_OP_mul:
				sprintf(Buffer, "%s = DW_OP_mul(S%d, S%d);\n", getStackPtrStr().c_str(), stack_elt, stack_elt + 1);
				Line += Buffer;
				//result = second * first;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			case DW_OP_or:
				sprintf(Buffer, "%s = DW_OP_or(S%d, S%d);\n", getStackPtrStr().c_str(), stack_elt, stack_elt + 1);
				Line += Buffer;
				//result = second | first;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			case DW_OP_plus:
				sprintf(Buffer, "%s = DW_OP_plus(S%d, S%d);\n", getStackPtrStr().c_str(), stack_elt, stack_elt + 1);
				Line += Buffer;
				//result = second + first;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			case DW_OP_shl:
				sprintf(Buffer, "%s = DW_OP_shl(S%d, S%d);\n", getStackPtrStr().c_str(), stack_elt, stack_elt + 1);
				Line += Buffer;
				//result = second << first;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			case DW_OP_shr:
				sprintf(Buffer, "%s = DW_OP_shr(S%d, S%d);\n", getStackPtrStr().c_str(), stack_elt, stack_elt + 1);
				Line += Buffer;
				//result = second >> first;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			case DW_OP_shra:
				sprintf(Buffer, "%s = DW_OP_shra(S%d, S%d);\n", getStackPtrStr().c_str(), stack_elt, stack_elt + 1);
				Line += Buffer;
				//result = (_Unwind_Sword)second >> first;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			case DW_OP_xor:
				sprintf(Buffer, "%s = DW_OP_xor(S%d, S%d);\n", getStackPtrStr().c_str(), stack_elt, stack_elt + 1);
				Line += Buffer;
				//result = second ^ first;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			case DW_OP_le:
				sprintf(Buffer, "%s = DW_OP_le(S%d, S%d);\n", getStackPtrStr().c_str(), stack_elt, stack_elt + 1);
				Line += Buffer;
				//result = (_Unwind_Sword)second <= (_Unwind_Sword)first;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			case DW_OP_ge:
				sprintf(Buffer, "%s = DW_OP_ge(S%d, S%d);\n", getStackPtrStr().c_str(), stack_elt, stack_elt + 1);
				Line += Buffer;
				//result = (_Unwind_Sword)second >= (_Unwind_Sword)first;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			case DW_OP_eq:
				sprintf(Buffer, "%s = DW_OP_eq(S%d, S%d);\n", getStackPtrStr().c_str(), stack_elt, stack_elt + 1);
				Line += Buffer;
				//result = (_Unwind_Sword)second == (_Unwind_Sword)first;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			case DW_OP_lt:				
				sprintf(Buffer, "%s = DW_OP_lt(S%d, S%d);\n", getStackPtrStr().c_str(), stack_elt, stack_elt + 1);
				Line += Buffer;
				//result = (_Unwind_Sword)second < (_Unwind_Sword)first;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			case DW_OP_gt:
				sprintf(Buffer, "%s = DW_OP_gt(S%d, S%d);\n", getStackPtrStr().c_str(), stack_elt, stack_elt + 1);
				Line += Buffer;
				//result = (_Unwind_Sword)second > (_Unwind_Sword)first;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;
			case DW_OP_ne:
				sprintf(Buffer, "%s = DW_OP_ne(S%d, S%d);\n", getStackPtrStr().c_str(), stack_elt, stack_elt + 1);
				Line += Buffer;
				//result = (_Unwind_Sword)second != (_Unwind_Sword)first;
				stack_elt += 1;
				E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));				
				return E;
				break;

			default:
				break;
			}
		} break;

		case DW_OP_skip:		
		{
			offset = *(int16_t*)op_ptr;
			
			op_ptr += 2;
			_sleb128_t addr = (_sleb128_t)getBinaryVA(op_ptr);
			op_ptr = (uint8_t*)(addr + offset);

			sprintf(Buffer, "goto _%08X; // DW_OP_skip 0x%08X (0x%08X)\n", op_ptr, offset, op_ptr);
			Line += Buffer;
			
			E.push_back(Edge(stack_elt, (uint64_t) op_ptr));
			return E;
		}
			break;

		case DW_OP_bra:			
			stack_elt -= 1;
			//offset = read_2s(op_ptr);
			offset = *(int16_t*)op_ptr;

			op_ptr += 2;
			
			sprintf(Buffer, "if (S%d != 0) goto _%08X; //", stack_elt, getBinaryVA(op_ptr + offset));
			Line += Buffer;
			sprintf(Buffer, "// DW_OP_bra 0x%08X (0x%08X, 0x%08X)\n", offset, getBinaryVA(op_ptr), getBinaryVA(op_ptr + offset));
			Line += Buffer;

			//if (stack[stack_elt] != 0)
			//	op_ptr += offset;
			//goto no_push;

			// PG TODO return 2 offsets
			//return getBinaryVA(op_ptr);

			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr + offset)));						
			return E;

		case DW_OP_nop:
			sprintf(Buffer, "DW_OP_nop();\n");			
			Line += Buffer;
			E.push_back(Edge(stack_elt, getBinaryVA(op_ptr)));
			return E;
			break;		
		}		
	}	

int main(int argc, char** argv) {
	BinaryStart = (uint64_t)decrypted_file;
	BinaryEnd = (uint64_t)decrypted_file + decrypted_file_len;

	/*
	00405A53
	00402A98
	00402A99
	00402A9B
	00402A9C
	*/

	_uleb128_t PC = 0x3213  + BinaryImageBase;
	std::set<uint64_t> Known;
	std::set<uint64_t> Worklist;
	std::map<uint64_t, Edge> EdgeMap;

	std::map<uint64_t, Edges> Branches;

	EdgeMap[PC] = Edge(1, PC);
	Known.insert(PC);
	Worklist.insert(PC);
	while (!Worklist.empty()) {
		uint64_t CurPC = *Worklist.begin();
		Worklist.erase(CurPC);

		// Set Stack
		stack_elt = EdgeMap[CurPC].StackPtr;

		// Disassemble
		Edges Edges;
		disassemble((const unsigned char*)BinaryStart + CurPC - BinaryImageBase, Edges);
		Disassembly[CurPC] = Line;
		for (auto &E : Edges) {
			if (E.NextVA == 0x04004E7) {
				int t = 1;
			}

			// Store edges
			if (Edges.size() > 1) {
				Branches[CurPC] = Edges;
			}

			// Thats our end
			if (E.NextVA < 0x403216) {
				if (Known.end() == std::find(Known.begin(), Known.end(), E.NextVA)) {
					Worklist.insert(E.NextVA);
					Known.insert(E.NextVA);

					EdgeMap[E.NextVA] = E;
				}
			}			
		}
	}

	// Print out disassembly
	for (auto &L : Disassembly) {
		printf("%s", L.second.c_str());
	}

	// Print all branches
	for (auto &L : Branches) {
		if (L.second.size() > 1) {
			printf("%08X [ %08X , %08X ]\n", L.first, L.second.at(0).NextVA, L.second.at(1).NextVA);
		}
	}

	return 0;
}