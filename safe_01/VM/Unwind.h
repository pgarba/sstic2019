#ifndef UNWIND_H
#define UNWIND_H
#include <stdint.h>

/* The number of R registers, note 31! not 32.  */
#define AARCH64_DWARF_NUMBER_R 31

#define AARCH64_DWARF_SP 31
#define AARCH64_DWARF_V0 64

/* The number of V registers.  */
#define AARCH64_DWARF_NUMBER_V 32

/* For signal frames we need to use an alternative return column.  This
   value must not correspond to a hard register and must be out of the
   range of DWARF_FRAME_REGNUM().  */

// PG Delta value to align with challenge struct
#define DELTA_V 0

#define DWARF_ALT_FRAME_RETURN_COLUMN                                          \
  (AARCH64_DWARF_V0 + AARCH64_DWARF_NUMBER_V + DELTA_V)

/* We add 1 extra frame register for use as the
   DWARF_ALT_FRAME_RETURN_COLUMN.  */
#define DWARF_FRAME_REGISTERS (DWARF_ALT_FRAME_RETURN_COLUMN + 1)

typedef uint64_t _Unwind_Word;
typedef int64_t _Unwind_Sword;
typedef long _sleb128_t;
typedef unsigned long _uleb128_t;
typedef uint64_t _Unwind_Ptr;
typedef uint64_t _Unwind_Internal_Ptr __attribute__((__mode__(__pointer__)));

struct dwarf_eh_bases {
  void *tbase;
  void *dbase;
  void *func;
};

struct _Unwind_Context {
  _Unwind_Word *reg[DWARF_FRAME_REGISTERS + 1];
  void *cfa;
  void *ra;
  void *lsda;
  struct dwarf_eh_bases bases;
  /* Signal frame context.  */
#define SIGNAL_FRAME_BIT ((~(_Unwind_Word)0 >> 1) + 1)
  /* Context which has version/args_size/by_value fields.  */
#define EXTENDED_CONTEXT_BIT ((~(_Unwind_Word)0 >> 2) + 1)
  /* Bit reserved on AArch64, return address has been signed with A key.  */
#define RA_A_SIGNED_BIT ((~(_Unwind_Word)0 >> 3) + 1)

  _Unwind_Word flags;
  /* 0 for now, can be increased when further fields are added to
     struct _Unwind_Context.  */
  _Unwind_Word version;
  _Unwind_Word args_size;

  char by_value[DWARF_FRAME_REGISTERS + 1];
};

typedef int (*_Unwind_Personality_Fn)(int, int, int, struct _Unwind_Exception *,
                                      struct _Unwind_Context *);

typedef struct {
  /* Each register save state can be described in terms of a CFA slot,
     another register, or a location expression.  */
  struct frame_state_reg_info {
    struct {
      union {
        _Unwind_Word reg;
        _Unwind_Sword offset;
        const unsigned char *exp;
      } loc;
      enum {
        REG_UNSAVED,
        REG_SAVED_OFFSET,
        REG_SAVED_REG,
        REG_SAVED_EXP,
        REG_SAVED_VAL_OFFSET,
        REG_SAVED_VAL_EXP,
        REG_UNDEFINED
      } how;
    } reg[DWARF_FRAME_REGISTERS + 1];

    /* Used to implement DW_CFA_remember_state.  */
    struct frame_state_reg_info *prev;

    /* The CFA can be described in terms of a reg+offset or a
       location expression.  */
    _Unwind_Sword cfa_offset;
    _Unwind_Word cfa_reg;
    const unsigned char *cfa_exp;
    enum { CFA_UNSET, CFA_REG_OFFSET, CFA_EXP } cfa_how;

    // PG
    void *MissingEntry;
  } regs;

  /* The PC described by the current frame state.  */
  void *pc;

  /* The information we care about from the CIE/FDE.  */
  _Unwind_Personality_Fn personality;
  _Unwind_Sword data_align;
  _Unwind_Word code_align;
  _Unwind_Word retaddr_column;
  unsigned char fde_encoding;
  unsigned char lsda_encoding;
  unsigned char saw_z;
  unsigned char signal_frame;
  void *eh_ptr;
} _Unwind_FrameState;

#endif
