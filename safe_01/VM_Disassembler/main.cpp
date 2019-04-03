#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>

#include "Unwind.h"
#include "df.h"
#include "dwarf2.h"


typedef std::vector<uint64_t> Edges;

uint64_t BinaryStart = 0;
uint64_t BinaryEnd = 0;
uint64_t BinaryImageBase = 0x400000;

int InstCount = 1;

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

Edges disassemble(const unsigned char* op_ptr, Edges &E) {
		printf("%04d %08X: ", InstCount++, (uint64_t)getBinaryVA(op_ptr));

		enum dwarf_location_atom op = (dwarf_location_atom)* op_ptr++;		
		_uleb128_t reg, utmp;
		_sleb128_t offset, stmp;

		printf("%02X ", op);

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
			printf("DW_OP_lit%02d;\n", op - DW_OP_lit0);
			//result = op - DW_OP_lit0;			
			E.push_back(getBinaryVA(op_ptr));
			return E;
			break;

		case DW_OP_addr:
			printf("DW_OP_addr 0x%08X\n", op_ptr);
			//result = (_Unwind_Word)(_Unwind_Ptr)read_pointer(op_ptr);
			op_ptr += sizeof(void*);
			
			E.push_back(getBinaryVA(op_ptr));
			return E;
			break;

		case DW_OP_GNU_encoded_addr: {
			printf("DW_OP_GNU_encoded_addr\n");
			//_Unwind_Ptr presult;
			//op_ptr = read_encoded_value(context, *op_ptr, op_ptr + 1, &presult);
			//result = presult;
		} break;

		case DW_OP_const1u:
			printf("DW_OP_const1u 0x%02X\n", *(uint8_t*)op_ptr);
			//result = read_1u(op_ptr);
			op_ptr += 1;
			// printDebug("0x%X\n", result);
			
			E.push_back(getBinaryVA(op_ptr));
			return E;
			break;
		case DW_OP_const1s:
			printf("DW_OP_const1s 0x%02X\n", *(uint8_t*)op_ptr);
			//result = read_1s(op_ptr);
			op_ptr += 1;
			// printDebug("0x%X\n", result);
			
			E.push_back(getBinaryVA(op_ptr));
			return E;
			break;
		case DW_OP_const2u:
			printf("DW_OP_const2u 0x%04X\n", *(uint16_t*)op_ptr);
			//result = read_2u(op_ptr);
			op_ptr += 2;
			
			E.push_back(getBinaryVA(op_ptr));
			return E;
			break;
		case DW_OP_const2s:
			printf("DW_OP_const2s 0x%04X\n", *(uint16_t*)op_ptr);
			//result = read_2s(op_ptr);
			op_ptr += 2;
			
			E.push_back(getBinaryVA(op_ptr));
			return E;
			break;
		case DW_OP_const4u:
			printf("DW_OP_const4u 0x%08X\n", *(uint32_t*)op_ptr);
			//result = read_4u(op_ptr);
			op_ptr += 4;
			
			E.push_back(getBinaryVA(op_ptr));
			return E;
			break;
		case DW_OP_const4s:
			printf("DW_OP_const4s 0x%08X\n", *(uint32_t*)op_ptr);
			//result = read_4s(op_ptr);
			op_ptr += 4;
			
			E.push_back(getBinaryVA(op_ptr));
			return E;
			break;
		case DW_OP_const8u:
			printf("DW_OP_const8u 0x%08X\n", *(uint64_t *) op_ptr);
			//printDebug("DW_OP_const8u *(%llX) = ", op_ptr);
			//result = read_8u(op_ptr);
			//printDebug("%llX\n", result);
			op_ptr += 8;
			
			E.push_back(getBinaryVA(op_ptr));
			return E;
			break;
		case DW_OP_const8s:
			printf("DW_OP_const8s 0x%08X\n", *(uint64_t*)op_ptr);
			//result = read_8s(op_ptr);
			op_ptr += 8;
			
			E.push_back(getBinaryVA(op_ptr));
			return E;
			break;
		case DW_OP_constu:
			printf("DW_OP_constu\n");
			//op_ptr = read_uleb128(op_ptr, &utmp);
			//result = (_Unwind_Word)utmp;
			break;
		case DW_OP_consts:
			printf("DW_OP_consts\n");
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
			printf("DW_OP_reg%d\n", op - DW_OP_reg0);
			//result = _Unwind_GetGR(context, op - DW_OP_reg0);			
			
			E.push_back(getBinaryVA(op_ptr));
			return E;
			//break;
		case DW_OP_regx:
			printf("DW_OP_regx ...\n");
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
			printf("DW_OP_breg%d\n", op - DW_OP_breg0);
			//op_ptr = read_sleb128(op_ptr, &offset);
			//result = _Unwind_GetGR(context, op - DW_OP_breg0) + offset;
			break;
		case DW_OP_bregx:
			printf("DW_OP_bregx\n");
			//op_ptr = read_uleb128(op_ptr, &reg);
			//op_ptr = read_sleb128(op_ptr, &offset);
			//result = _Unwind_GetGR(context, reg) + (_Unwind_Word)offset;
			break;

		case DW_OP_dup:
			printf("DW_OP_dup\n");
			//gcc_assert(stack_elt);
			//result = stack[stack_elt - 1];
			//printDebug("0x%llX\n", result);
			
			E.push_back(getBinaryVA(op_ptr));
			return E;
			break;

		case DW_OP_drop:
			printf("DW_OP_drop\n");
			//gcc_assert(stack_elt);
			//stack_elt -= 1;
			
			E.push_back(getBinaryVA(op_ptr));
			return E;
			break;

		case DW_OP_pick:			
			offset = *op_ptr++;
			printf("DW_OP_pick %d\n", offset);
			//gcc_assert(offset < stack_elt - 1);
			//result = stack[stack_elt - 1 - offset];
			//printDebug("0x%llX\n", result);
			
			E.push_back(getBinaryVA(op_ptr));
			return E;
			break;

		case DW_OP_over:
			printf("DW_OP_over\n");
			//gcc_assert(stack_elt >= 2);
			//result = stack[stack_elt - 2];
			
			E.push_back(getBinaryVA(op_ptr));
			return E;
			break;

		case DW_OP_swap: {
			printf("DW_OP_swap\n");
			//_Unwind_Word t;
			//gcc_assert(stack_elt >= 2);
			//t = stack[stack_elt - 1];
			//stack[stack_elt - 1] = stack[stack_elt - 2];
			//stack[stack_elt - 2] = t;
			//goto no_push;
			
			E.push_back(getBinaryVA(op_ptr));
			return E;
			break;
		}

		case DW_OP_rot: {
			printf("DW_OP_rot\n");
			//_Unwind_Word t1, t2, t3;

			//gcc_assert(stack_elt >= 3);
			//t1 = stack[stack_elt - 1];
			//t2 = stack[stack_elt - 2];
			//t3 = stack[stack_elt - 3];			
			//stack[stack_elt - 1] = t2;
			//stack[stack_elt - 2] = t3;
			//stack[stack_elt - 3] = t1;
			//goto no_push;
			
			E.push_back(getBinaryVA(op_ptr));
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
			//stack_elt -= 1;

			//result = stack[stack_elt];

			switch (op) {
			case DW_OP_deref: {
				printf("DW_OP_deref\n");
				//void* ptr = (void*)(_Unwind_Ptr)result;
				//result = (_Unwind_Ptr)read_pointer(ptr);
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
			} break;

			case DW_OP_deref_size: {
				uint8_t i = *op_ptr++;
				printf("DW_OP_deref_size %d\n", i);
				
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
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
			} break;

			case DW_OP_abs:
				printf("DW_OP_abs\n");
				//if ((_Unwind_Sword)result < 0)
				//	result = -result;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
				break;
			case DW_OP_neg:
				printf("DW_OP_neg\n");
				//printDebug("result = -result; //DW_OP_neg -0x%016X = %016X\n", result, -result);
				//result = -result;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
				break;
			case DW_OP_not:
				printf("DW_OP_not\n");
				//printDebug("result = ~result; //DW_OP_not ~0x%016X = %016X\n", result, ~result);
				//result = ~result;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
				break;
			case DW_OP_plus_uconst:
				printf("DW_OP_plus_uconst\n");
				//op_ptr = read_uleb128(op_ptr, &utmp);
				//result += (_Unwind_Word)utmp;
				//break;
				
				E.push_back(getBinaryVA(op_ptr));
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
			//stack_elt -= 2;

			//second = stack[stack_elt];
			//first = stack[stack_elt + 1];

			switch (op) {
			case DW_OP_and: {
				printf("DW_OP_and\n");
				//result = second & first;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
			}
				break;
			case DW_OP_div:
				printf("DW_OP_div\n");
				//(_Unwind_Sword)second / (_Unwind_Sword)first);
				//result = (_Unwind_Sword)second / (_Unwind_Sword)first;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
				break;
			case DW_OP_minus:
				printf("DW_OP_minus\n");				
				//result = second - first;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
				break;
			case DW_OP_mod:
				printf("DW_OP_mod\n");				
				//result = second % first;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
				break;
			case DW_OP_mul:
				printf("DW_OP_mul\n");				
				//result = second * first;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
				break;
			case DW_OP_or:
				printf("DW_OP_or\n");				
				//result = second | first;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
				break;
			case DW_OP_plus:
				printf("DW_OP_plus\n");
				//result = second + first;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
				break;
			case DW_OP_shl:
				printf("DW_OP_shl\n");
				//result = second << first;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
				break;
			case DW_OP_shr:
				printf("DW_OP_shr\n");
				//result = second >> first;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
				break;
			case DW_OP_shra:
				printf("DW_OP_shra\n");					
				//result = (_Unwind_Sword)second >> first;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
				break;
			case DW_OP_xor:
				printf("DW_OP_xor\n");
				//result = second ^ first;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
				break;
			case DW_OP_le:
				printf("DW_OP_le\n");
				//result = (_Unwind_Sword)second <= (_Unwind_Sword)first;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
				break;
			case DW_OP_ge:
				printf("DW_OP_ge\n");
				//result = (_Unwind_Sword)second >= (_Unwind_Sword)first;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
				break;
			case DW_OP_eq:
				printf("DW_OP_eq\n");
				//result = (_Unwind_Sword)second == (_Unwind_Sword)first;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
				break;
			case DW_OP_lt:				
				printf("DW_OP_lt\n");
				//result = (_Unwind_Sword)second < (_Unwind_Sword)first;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
				break;
			case DW_OP_gt:
				printf("DW_OP_gt\n");				
				//result = (_Unwind_Sword)second > (_Unwind_Sword)first;
				
				E.push_back(getBinaryVA(op_ptr));
				return E;
				break;
			case DW_OP_ne:
				printf("DW_OP_ne\n");				
				//result = (_Unwind_Sword)second != (_Unwind_Sword)first;
				
				E.push_back(getBinaryVA(op_ptr));
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

			printf("DW_OP_skip 0x%08X (0x%08X)\n", offset, op_ptr);

			
			E.push_back((uint64_t) op_ptr);
			return E;

			//return (uint64_t)op_ptr;
		}
			break;

		case DW_OP_bra:			
			//stack_elt -= 1;
			//offset = read_2s(op_ptr);
			offset = *(int16_t*)op_ptr;

			op_ptr += 2;

			printf("DW_OP_bra 0x%08X (0x%08X, 0x%08X)\n", offset, getBinaryVA(op_ptr), getBinaryVA(op_ptr + offset));

			//if (stack[stack_elt] != 0)
			//	op_ptr += offset;
			//goto no_push;

			// PG TODO return 2 offsets
			//return getBinaryVA(op_ptr);

			
			E.push_back(getBinaryVA(op_ptr));
			E.push_back(getBinaryVA(op_ptr + offset));
			return E;

		case DW_OP_nop:
			printf("DW_OP_nop\n");
			
			E.push_back(getBinaryVA(op_ptr));
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
	std::set<_uleb128_t> Known;
	std::set<_uleb128_t> Worklist;

	Known.insert(PC);
	Worklist.insert(PC);
	while (!Worklist.empty()) {
		uint64_t CurPC = *Worklist.begin();
		Worklist.erase(CurPC);
		Edges Edges;
		disassemble((const unsigned char*)BinaryStart + CurPC - BinaryImageBase, Edges);
		for (auto E : Edges) {
			// Thats our end
			if (E < 0x403216) {
				if (Known.end() == std::find(Known.begin(), Known.end(), E)) {
					Worklist.insert(E);
					Known.insert(E);
				}
			}			
		}
	}

	return 0;
}