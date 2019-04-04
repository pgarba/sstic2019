#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include "df.h"
#include "Unwind.h"
#include "dwarf2.h"
#include "unwind-pe.h"

typedef uint8_t byte;
typedef int64_t longlong;
typedef uint64_t ulonglong;
typedef unsigned int uint;
typedef uint8_t undefined8;
typedef unsigned short ushort;

//#define DEBUG 1

// Global StackPtr
int stack_elt;

/*
  Debug OUT
*/
void printDebug(const char *fmt, ...) {
#ifdef DEBUG
  va_list argptr;
  va_start(argptr, fmt);
  vprintf(fmt, argptr);
  va_end(argptr);
#endif
}

union unaligned {
  void *p;
  unsigned u2 __attribute__((mode(HI)));
  unsigned u4 __attribute__((mode(SI)));
  unsigned u8 __attribute__((mode(DI)));
  signed s2 __attribute__((mode(HI)));
  signed s4 __attribute__((mode(SI)));
  signed s8 __attribute__((mode(DI)));
} __attribute__((packed));

uint64_t BinaryStart = 0;
uint64_t BinaryEnd = 0;
uint64_t BinaryImageBase = 0x400000;

bool isBinaryVA(const void *VA) {
  uint64_t VA_Ptr = (uint64_t)VA;
  if (VA_Ptr >= BinaryStart && VA_Ptr < BinaryEnd) {
    return true;
  }

  return false;
}

uint64_t getBinaryVA(const void *VA) {
  uint64_t VA_Ptr = (uint64_t)VA - BinaryStart;

  return VA_Ptr + BinaryImageBase;
}

uint64_t geMappedBinary(const void *VA) {
  uint64_t VA_Ptr = (uint64_t)VA;

  if (VA_Ptr >= BinaryImageBase && VA_Ptr < (BinaryImageBase + 0x14150)) {
    return VA_Ptr - BinaryImageBase + BinaryStart;
  }

  return VA_Ptr;
}

static inline void *read_pointer(const void *p) {
  if (isBinaryVA(p)) {
    printDebug("result%d = read_pointer(0x%016llX); // = ", stack_elt, (uint64_t)getBinaryVA(p));
  } else {
    printDebug("result%d = read_pointer(0x%016llX); // = ", stack_elt, (uint64_t)p);
  }

  p = (const void *)geMappedBinary(p);

  const union unaligned *up = (unaligned *)p;
  printDebug("0x%llX\n", up->p);
  return up->p;
}

static inline int read_1u(const void *p) {
  if (isBinaryVA(p)) {
    uint64_t B_VA = (uint64_t)getBinaryVA(p);
    printDebug("result%d = read_1u(0x%016llX); // = ", stack_elt, B_VA);
  } else {
    printDebug("result%d = read_1u(0x%016llX); // = ", stack_elt, (uint64_t)p);
  }
  printDebug("0x%X\n", *(const unsigned char *)p);
  return *(const unsigned char *)p;
}

static inline int read_1s(const void *p) {
  if (isBinaryVA(p)) {
    printDebug("result%d = read_1s(0x%016llX); // = ", stack_elt, (uint64_t)getBinaryVA(p));
  } else {
    printDebug("result%d = read_1s(0x%016llX); // = ", stack_elt, (uint64_t)p);
  }
  printDebug("0x%X\n", *(const signed char *)p);
  return *(const signed char *)p;
}

static inline int read_2u(const void *p) {
  if (isBinaryVA(p)) {
    printDebug("result%d = read_2u(0x%016llX); // = ", stack_elt, (uint64_t)getBinaryVA(p));
  } else {
    printDebug("result%d = read_2u(0x%016llX); // = ", stack_elt, (uint64_t)p);
  }
  const union unaligned *up = (unaligned *)p;
  printDebug("0x%X\n", up->u2);
  return up->u2;
}

static inline int read_2s(const void *p) {
  if (isBinaryVA(p)) {
    printDebug("result%d = read_2s(0x%016llX); // = ", stack_elt, (uint64_t)getBinaryVA(p));
  } else {
    printDebug("result%d = read_2s(0x%016llX); // = ", stack_elt, (uint64_t)p);
  }
  const union unaligned *up = (unaligned *)p;
  printDebug("0x%X\n", up->s2);
  return up->s2;
}

static inline unsigned int read_4u(const void *p) {
  if (isBinaryVA(p)) {
    printDebug("result%d = read_4u(0x%016llX); // = ", stack_elt, (uint64_t)getBinaryVA(p));
  } else {
    printDebug("result%d = read_4u(0x%016llX); // = ", stack_elt, (uint64_t)p);
  }

  p = (const void *)geMappedBinary(p);

  const union unaligned *up = (unaligned *)p;
  printDebug("0x%X\n", up->u4);
  return up->u4;
}

static inline int read_4s(const void *p) {
  if (isBinaryVA(p)) {
    printDebug("result%d = read_4s(0x%016llX); // = ", stack_elt, (uint64_t)getBinaryVA(p));
  } else {
    printDebug("result%d = read_4s(0x%016llX); // =", stack_elt, (uint64_t)p);
  }
  const union unaligned *up = (unaligned *)p;
  printDebug("0x%X\n", up->s2);
  return up->s4;
}

static inline uint64_t read_8u(const void *p) {
  if (isBinaryVA(p)) {
		uint64_t t = (uint64_t)getBinaryVA(p);
    printDebug("result%d = read_8u(0x%016llX); // = ", stack_elt, (uint64_t)getBinaryVA(p));
  } else {
    printDebug("result%d = read_8u(0x%016llX); // = ", stack_elt, (uint64_t)p);
  }
  const union unaligned *up = (unaligned *)p;
  printDebug("0x%llX\n", up->u8);
  return up->u8;
}

static inline uint64_t read_8s(const void *p) {
  if (isBinaryVA(p)) {
    printDebug("result%d = read_8s(0x%016llX); //  = ", stack_elt, (uint64_t)getBinaryVA(p));
  } else {
    printDebug("result%d = read_8s(0x%016llX); // = ", stack_elt, (uint64_t)p);
  }
  const union unaligned *up = (unaligned *)p;
  printDebug("0x%llX\n", up->u8);
  return up->s8;
}

_Unwind_Word _Unwind_GetGR(struct _Unwind_Context *context, int index) {
  printDebug("// _Unwind_GetGR Reg: %i\n", index);
  return (_Unwind_Word)context->reg[index];
}

void gcc_unreachable() { return; }

void gcc_assert(int i) {
  return;
}

  //Track unique instructions
  std::vector<uint64_t> UniqueTrace;

  bool isKnownAddr(uint64_t Addr) {
    auto R = std::find(UniqueTrace.begin(), UniqueTrace.end(), Addr);
    if (R == UniqueTrace.end())
      return false;

    return true;
  }

  void addAddr(uint64_t Addr) {  
    if (isKnownAddr(Addr))
      return;

    UniqueTrace.push_back(Addr);
  }


/* Decode a DW_OP stack program.  Return the top of stack.  Push INITIAL
   onto the stack to start.  */

static _Unwind_Word execute_stack_op(const unsigned char *op_ptr,
                                     const unsigned char *op_end,
                                     struct _Unwind_Context *context,
                                     _Unwind_Word initial) {
  _Unwind_Word stack[64]; /* ??? Assume this is enough.  */
  // Its a global now
  //int stack_elt;

  stack[0] = initial;  
  stack_elt = 1;

  while (op_ptr < op_end) {
    //printf("%08X ", getBinaryVA(op_ptr));
    addAddr((uint64_t) op_ptr);

    enum dwarf_location_atom op = (dwarf_location_atom)*op_ptr++;
    _Unwind_Word result;
    _uleb128_t reg, utmp;
    _sleb128_t offset, stmp;

    //printDebug("Opcode: %X\n", op);

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
      printDebug("result%d = %d;\n", stack_elt, op - DW_OP_lit0);
      result = op - DW_OP_lit0;
      break;

    case DW_OP_addr:
      printDebug("result%d = DW_OP_addr;\n", stack_elt);
      result = (_Unwind_Word)(_Unwind_Ptr)read_pointer(op_ptr);
      op_ptr += sizeof(void *);
      break;

    case DW_OP_GNU_encoded_addr: {
      printDebug("DW_OP_GNU_encoded_addr\n");
      _Unwind_Ptr presult;
      op_ptr = read_encoded_value(context, *op_ptr, op_ptr + 1, &presult);
      result = presult;
    } break;

    case DW_OP_const1u:
      // printDebug("DW_OP_const1u ");
      result = read_1u(op_ptr);
      op_ptr += 1;
      // printDebug("0x%X\n", result);
      break;
    case DW_OP_const1s:
      // printDebug("DW_OP_const1s");
      result = read_1s(op_ptr);
      op_ptr += 1;
      // printDebug("0x%X\n", result);
      break;
    case DW_OP_const2u:
      // printDebug("DW_OP_const2u");
      result = read_2u(op_ptr);
      op_ptr += 2;
      // printDebug("0x%X\n", result);
      break;
    case DW_OP_const2s:
      // printDebug("DW_OP_const2s");
      result = read_2s(op_ptr);
      op_ptr += 2;
      // printDebug("0x%X\n", result);
      break;
    case DW_OP_const4u:
      // printDebug("DW_OP_const4u ");
      result = read_4u(op_ptr);
      op_ptr += 4;
      //printDebug("%llX\n", result);
      break;
    case DW_OP_const4s:
      //printDebug("DW_OP_const4s");
      result = read_4s(op_ptr);
      op_ptr += 4;
      //printDebug("0x%X\n", result);
      break;
    case DW_OP_const8u:
      //printDebug("DW_OP_const8u *(%llX) = ", op_ptr);
      result = read_8u(op_ptr);
      //printDebug("%llX\n", result);
      op_ptr += 8;
      break;
    case DW_OP_const8s:
      //printDebug("DW_OP_const8s");
      result = read_8s(op_ptr);
      op_ptr += 8;
      //printDebug("%llX\n", result);
      break;
    case DW_OP_constu:
      //printDebug("DW_OP_constu");
      op_ptr = read_uleb128(op_ptr, &utmp);
      result = (_Unwind_Word)utmp;
      break;
    case DW_OP_consts:
      //printDebug("DW_OP_consts\n");
      op_ptr = read_sleb128(op_ptr, &stmp);
      result = (_Unwind_Sword)stmp;
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
      printDebug("result%d = getRegValue(%d);\n", stack_elt, op - DW_OP_reg0);
      result = _Unwind_GetGR(context, op - DW_OP_reg0);
      break;
    case DW_OP_regx:
      printDebug("DW_OP_regx\n");
      op_ptr = read_uleb128(op_ptr, &reg);
      result = _Unwind_GetGR(context, reg);
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
      printDebug("DW_OP_breg%d\n", op - DW_OP_breg0);
      op_ptr = read_sleb128(op_ptr, &offset);
      result = _Unwind_GetGR(context, op - DW_OP_breg0) + offset;
      break;
    case DW_OP_bregx:
      printDebug("DW_OP_bregx\n");
      op_ptr = read_uleb128(op_ptr, &reg);
      op_ptr = read_sleb128(op_ptr, &offset);
      result = _Unwind_GetGR(context, reg) + (_Unwind_Word)offset;
      break;

    case DW_OP_dup:
      printDebug("result%d = DW_OP_dup(%d); // ", stack_elt, stack_elt - 1);
      gcc_assert(stack_elt);
      result = stack[stack_elt - 1];
      printDebug("0x%llX\n", result);
      break;

    case DW_OP_drop:
      printDebug("DW_OP_drop(); //%d\n", stack_elt);
      gcc_assert(stack_elt);
      stack_elt -= 1;
      goto no_push;

    case DW_OP_pick:      
      offset = *op_ptr++;
      printDebug("result%d = DW_OP_pick(%d); // ", stack_elt, stack_elt - 1 - offset);
      //gcc_assert(offset < stack_elt - 1);
      result = stack[stack_elt - 1 - offset];
      printDebug("0x%llX\n", result);
      break;

    case DW_OP_over:
      printDebug("result%d = DW_OP_over\n", stack_elt);
      gcc_assert(stack_elt >= 2);
      result = stack[stack_elt - 2];
      break;

    case DW_OP_swap: {
      printDebug("DW_OP_swap(%d, %d);\n", stack_elt - 1,
                 stack_elt - 2);
      _Unwind_Word t;
      //gcc_assert(stack_elt >= 2);
      t = stack[stack_elt - 1];
      stack[stack_elt - 1] = stack[stack_elt - 2];
      stack[stack_elt - 2] = t;
      goto no_push;
    }

    case DW_OP_rot: {
      _Unwind_Word t1, t2, t3;

      gcc_assert(stack_elt >= 3);
      t1 = stack[stack_elt - 1];
      t2 = stack[stack_elt - 2];
      t3 = stack[stack_elt - 3];

      printDebug("DW_OP_rot(%d, %d, %d); //%llX %llX %llX\n",stack_elt - 1,stack_elt - 2,stack_elt - 3, t1, t2, t3);

      stack[stack_elt - 1] = t2;
      stack[stack_elt - 2] = t3;
      stack[stack_elt - 3] = t1;
      goto no_push;
    }

    case DW_OP_deref:
    case DW_OP_deref_size:
    case DW_OP_abs:
    case DW_OP_neg:
    case DW_OP_not:
    case DW_OP_plus_uconst:
      /* Unary operations.  */
      gcc_assert(stack_elt);
      stack_elt -= 1;

      result = stack[stack_elt];

      switch (op) {
      case DW_OP_deref: {
        //printDebug("result = read_pointer(0x%llX); //DW_OP_deref\n", result);
        void *ptr = (void *)(_Unwind_Ptr)result;
        result = (_Unwind_Ptr)read_pointer(ptr);
      } break;

      case DW_OP_deref_size: {
        //printDebug("DW_OP_deref_size\n");
        void *ptr = (void *)(_Unwind_Ptr)result;
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
        }
      } break;

      case DW_OP_abs:
        printDebug("DW_OP_abs\n");
        if ((_Unwind_Sword)result < 0)
          result = -result;
        break;
      case DW_OP_neg:
        printDebug("result%d = -result; //DW_OP_neg -0x%016X = %016X\n", stack_elt, result, -result);
        result = -result;
        break;
      case DW_OP_not:
        printDebug("result%d = ~result; //DW_OP_not ~0x%016X = %016X\n", stack_elt, result, ~result);
        result = ~result;
        break;
      case DW_OP_plus_uconst:
        printDebug("=> DW_OP_plus_uconst\n");
        op_ptr = read_uleb128(op_ptr, &utmp);
        result += (_Unwind_Word)utmp;
        break;

      default:
        gcc_unreachable();
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
      _Unwind_Word first, second;
      gcc_assert(stack_elt >= 2);
      stack_elt -= 2;

      second = stack[stack_elt];
      first = stack[stack_elt + 1];

      switch (op) {
      case DW_OP_and:
        printDebug("result%d = DW_OP_and(%d, %d); // %llX & %llX = %llX\n", stack_elt, stack_elt, stack_elt + 1 ,second, first,
                   first & second);
        result = second & first;
        break;
      case DW_OP_div:
        printDebug("result%d = DW_OP_div(%d, %d); // %llX / %llX = %llX\n", stack_elt, stack_elt, stack_elt + 1, second, first,
                   (_Unwind_Sword)second / (_Unwind_Sword)first);
      
        result = (_Unwind_Sword)second / (_Unwind_Sword)first;
        break;
      case DW_OP_minus:
        printDebug("result%d = DW_OP_minus(%d, %d); // %llX - %llX = %llX\n", stack_elt, stack_elt, stack_elt + 1, second, first,
                   second - first);
        result = second - first;
        break;
      case DW_OP_mod:
        printDebug("result%d = DW_OP_mod(%d, %d); // %llX << %llX = %llX\n", stack_elt, stack_elt, stack_elt + 1, second, first,
                   second % first);
      
        result = second % first;
        break;
      case DW_OP_mul:
        printDebug("result%d = DW_OP_mul(%d, %d); // %llX * %llX = %llX\n", stack_elt, stack_elt, stack_elt + 1, second, first,
                   second * first);
      
        result = second * first;
        break;
      case DW_OP_or:
        printDebug("result%d = DW_OP_or(%d, %d); // %llX | %llX = %llX\n", stack_elt, stack_elt, stack_elt + 1, second, first,
                   second | first);
      
        result = second | first;
        break;
      case DW_OP_plus:
        printDebug("result%d = DW_OP_plus(%d, %d); // 0x%016llX + 0x%016llX = 0x%016llX\n", stack_elt, stack_elt, stack_elt + 1, first, second, second+first);
        result = second + first;
        break;
      case DW_OP_shl:
        printDebug("result%d = DW_OP_shl(%d, %d); // %llX << %llX = %llX\n", stack_elt, stack_elt, stack_elt + 1, second, first,
                   second << first);
        result = second << first;
        break;
      case DW_OP_shr:
        printDebug("result%d = DW_OP_shr(%d, %d); // %llX >> %llX = %llX\n", stack_elt, stack_elt, stack_elt + 1, second, first,
                   second >> first);

        result = second >> first;
        break;
      case DW_OP_shra:
        printDebug("result%d = DW_OP_shra(%d, %d); // %llX >> %llX = %llX\n", stack_elt, stack_elt, stack_elt + 1, second, first,
                   second >> first);
        result = (_Unwind_Sword)second >> first;
        break;
      case DW_OP_xor:
        printDebug("result%d = DW_OP_xor(%d, %d); // %llX ^ %llX = %llX\n", stack_elt, stack_elt, stack_elt + 1, second, first,
        second ^ first);
        result = second ^ first;
break;
      case DW_OP_le:
        printDebug("result%d = DW_OP_le %llX <= %llX = %llX\n", stack_elt, second, first,
          (_Unwind_Sword)second <= (_Unwind_Sword)first);
        result = (_Unwind_Sword)second <= (_Unwind_Sword)first;
        break;
      case DW_OP_ge:
        printDebug("result%d = DW_OP_ge %llX >= %llX = %llX\n", stack_elt, second, first,
          (_Unwind_Sword)second >= (_Unwind_Sword)first);
        result = (_Unwind_Sword)second >= (_Unwind_Sword)first;
        break;
      case DW_OP_eq:
        printDebug("result%d = DW_OP_eq %llX == %llX = %llX\n", stack_elt, second, first,
          (_Unwind_Sword)second == (_Unwind_Sword)first);
        result = (_Unwind_Sword)second == (_Unwind_Sword)first;
        break;
      case DW_OP_lt:
        printDebug("result%d = DW_OP_lt %llX < %llX = %llX\n", stack_elt, second, first,
          (_Unwind_Sword)second < (_Unwind_Sword)first);
        result = (_Unwind_Sword)second < (_Unwind_Sword)first;
        break;
      case DW_OP_gt:
        printDebug("result%d = DW_OP_gt %llX > %llX = %llX\n", stack_elt, second, first,
          (_Unwind_Sword)second > (_Unwind_Sword)first);
        result = (_Unwind_Sword)second > (_Unwind_Sword)first;
        break;
      case DW_OP_ne:
        printDebug("result%d = DW_OP_ne %llX != %llX = %llX\n", stack_elt, second, first,
          (_Unwind_Sword)second != (_Unwind_Sword)first);
        result = (_Unwind_Sword)second != (_Unwind_Sword)first;
        break;

      default:
        gcc_unreachable();
      }
    } break;

    case DW_OP_skip:
      printDebug("DW_OP_skip(); // 0x%16X\n", op_ptr);
      offset = read_2s(op_ptr);
      op_ptr += 2;
      op_ptr += offset;
      goto no_push;

    case DW_OP_bra:
      gcc_assert(stack_elt);
      stack_elt -= 1;

      offset = read_2s(op_ptr);
      op_ptr += 2;

      printDebug("DW_OP_bra(%d); // 0x%llX != 0 = %d\n", stack_elt, stack[stack_elt],
        stack[stack_elt] != 0);

      if (stack[stack_elt] != 0)
        op_ptr += offset;
      goto no_push;

    case DW_OP_nop:
      printDebug("// DW_OP_nop");
      goto no_push;

    default:
      gcc_unreachable();
    }

    /* Most things push a result value.  */
    // PG: Disabled
    // gcc_assert((size_t)stack_elt < sizeof(stack) / sizeof(*stack));
    stack[stack_elt++] = result;
  no_push:;
  }

  /* We were executing this program to get a value.  It should be
     at top of stack.  */
  gcc_assert(stack_elt);
  stack_elt -= 1;
  return stack[stack_elt];
}

int main(int argc, char **argv) {
  const uint8_t *Binary = decrypted_file;

  // printDebug
  printDebug("// Binary %llX - %llX\n", Binary, Binary + decrypted_file_len);
  BinaryStart = (uint64_t)Binary;
  BinaryEnd = (uint64_t)Binary + decrypted_file_len;

  // Create Exception context
  struct _Unwind_Context *uw_context =
    (struct _Unwind_Context *)calloc(1, sizeof(struct _Unwind_Context));


  //SSTIC{a947d6980ccf7b87cb8d7c246} <= Example key
// Build up flag
// 25 chars huma readable
  char FlagInner[] = "A11111112222222233333333Z";
  //klee_make_symbolic(FlagInner, 25, "InnerFlag");
  for (int i = 0; i < 25; i++){
    if (FlagInner[i] >= '0' && FlagInner[i] <= '9')
      continue;

    if (FlagInner[i] >= 'a' && FlagInner[i] <= 'z')
      continue;

    if (FlagInner[i] >= 'A' && FlagInner[i] <= 'Z')
      continue;

    //printf("Wrong Input!\n");
    exit(1);

  }

  char Flag[] = "SSTIC{1111111122222222333333334}";
  memcpy(Flag+6, FlagInner, 25);
  
  // Trigger error
  //char Flag[] = "SSTIC{11111111222222223333333344}";

  uint64_t *SimArgv[2];
  SimArgv[0] = (uint64_t *)0x1111111111111111;
  SimArgv[1] = (uint64_t *)Flag;

  printDebug("// SimArgv = 0x%016llX\n", SimArgv);
  printDebug("// SimArgv[1] = 0x%016llX\n", SimArgv[1]);

  // Set reg values
  uint64_t **ppArgv = (uint64_t **)&SimArgv;
  uw_context->reg[31] = (_Unwind_Word *)&ppArgv; // 0x0000FFFFFFFFFB20;
  uw_context->reg[31] =
      (_Unwind_Word *)(((uint64_t)uw_context->reg[31]) - 0xA8); // Stack -0xA8 ;

  // execute vm
  // Arg0 = 0x403213
  // Arg1 = 0x403216
  // Arg2 = struct _Unwind_Context* uw_context) (size 960 Byte)
  uint64_t Out = execute_stack_op(Binary + 0x3213, Binary + 0x3216, uw_context, 0);
  printDebug("Out: %lX\n", Out);

  // Print trace
  /*
  printDebug("Unique Instructions: %d\n", UniqueTrace.size());
  for (auto E : UniqueTrace) {    
    printDebug("%08X\n", E);
  }
  */

  if (Out == 0x4030B8) {
    // Bad result
    printf("Bad Result!\n");
    exit(1);
  } else {
    printf("%s\n", Flag);
    printf("Valid Result!\n");
    exit(1);
  }

  return 0;
}
