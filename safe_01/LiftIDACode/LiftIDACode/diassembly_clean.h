uint64_t VMFunc(uint64_t Flag[4]) {
  uint64_t Stack[44];
  uint64_t StackPtr = 1;

  uint64_t T;

  {
    Stack[1] = Flag[0];
    Stack[2] = Flag[1];
    Stack[3] = Flag[2];
    Stack[4] = Flag[3];
    StackPtr = 5;
    if (((char *)Flag)[33] != 0)
      goto _WrongResult;

    Stack[StackPtr] = Stack[StackPtr - 4];
    Stack[StackPtr + 1] = DW_OP_pick(Stack, StackPtr + 1, 3);
    Stack[StackPtr + 2] = 0;
    StackPtr += 3;
    goto _Loop0Entry;
  };

// 3 args = {Flag[0], Flag[1], 0}
_Loop0Entry : {
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = T;
  Stack[StackPtr] = 0;
  Stack[StackPtr + 1] = Stack[StackPtr - 5];
  Stack[StackPtr + 2] = Stack[StackPtr - 4];
  StackPtr += 3;
  goto _Loop0; // DW_OP_skip 0x00000033 (0x0040030B)
};

// 2 Args (Flag[1], Flag[2])
// 22222233, 333333Z}
_Loop0 : {
  StackPtr++;

  for (int i = 0; i < 4; i++) {
    uint64_t T;
    T = Stack[StackPtr - 1];
    Stack[StackPtr - 1] = Stack[StackPtr - 2];
    Stack[StackPtr - 2] = Stack[StackPtr - 3];
    Stack[StackPtr - 3] = T;
    Stack[StackPtr] = Stack[StackPtr - 1] & 0x00000000FFFFFFFF;
    T = Stack[StackPtr];
    Stack[StackPtr] = Stack[StackPtr - 1];
    Stack[StackPtr - 1] = T;
    Stack[StackPtr] = (Stack[StackPtr] & 0xFFFFFFFF00000000) >> 0x20;
    StackPtr++;
    T = Stack[StackPtr - 1];
    Stack[StackPtr - 1] = Stack[StackPtr - 3];
    Stack[StackPtr - 3] = Stack[StackPtr - 2];
    Stack[StackPtr - 2] = T;
    Stack[StackPtr] = Stack[StackPtr - 1] & 0x00000000FFFFFFFF;
    DW_OP_swap(Stack[StackPtr], Stack[StackPtr - 1]);
    Stack[StackPtr] = (Stack[StackPtr] & 0xFFFFFFFF00000000) >> 0x20;
    Stack[StackPtr + 1] = Stack[StackPtr];
    StackPtr += 2;
    T = Stack[StackPtr - 1];
    Stack[StackPtr - 1] = Stack[StackPtr - 2];
    Stack[StackPtr - 2] = Stack[StackPtr - 3];
    Stack[StackPtr - 3] = T;
    Stack[StackPtr] = Stack[StackPtr - 5];
    StackPtr -= 1;
    Stack[StackPtr - 1] =
        (Stack[StackPtr - 1] ^ (Stack[StackPtr] + Stack[StackPtr + 1])) &
        0xFFFFFFFF;
    T = Stack[StackPtr - 1];
    Stack[StackPtr - 1] = Stack[StackPtr - 2];
    Stack[StackPtr - 2] = T;
    Stack[StackPtr] = Stack[StackPtr - 4];
    Stack[StackPtr - 1] = Stack[StackPtr - 1] & Stack[StackPtr];
    T = Stack[StackPtr - 1];
    Stack[StackPtr - 1] = Stack[StackPtr - 2];
    Stack[StackPtr - 2] = T;
    Stack[StackPtr] = Stack[StackPtr - 1];
    StackPtr++;
    Stack[StackPtr] = Stack[StackPtr - 5];
    StackPtr++;
    T = Stack[StackPtr - 1];
    Stack[StackPtr - 1] = Stack[StackPtr - 2];
    Stack[StackPtr - 2] = T;
    StackPtr -= 2;
    Stack[StackPtr] = (Stack[StackPtr] - Stack[StackPtr + 1]) & 0xFFFFFFFF;
    StackPtr++;
    T = Stack[StackPtr - 1];
    Stack[StackPtr - 1] = Stack[StackPtr - 2];
    Stack[StackPtr - 2] = T;

    // Get table
    int Ptr = (Stack[StackPtr - 4] & 0xFF) << 2;
    Stack[StackPtr] = *(uint32_t *)(Table_004006B4 + Ptr);

    Stack[StackPtr - 1] = (Stack[StackPtr - 1] + Stack[StackPtr]) & 0xFFFFFFFF;
    Stack[StackPtr] = Stack[StackPtr - 1];
    Stack[StackPtr + 1] = Stack[StackPtr - 4] >> 0x08;
    Stack[StackPtr] = Stack[StackPtr] ^ Stack[StackPtr + 1];
    StackPtr++;
    T = Stack[StackPtr - 1];
    Stack[StackPtr - 1] = Stack[StackPtr - 3];
    Stack[StackPtr - 3] = Stack[StackPtr - 2];
    Stack[StackPtr - 2] = T;
    T = Stack[StackPtr - 1];
    Stack[StackPtr - 1] = Stack[StackPtr - 2];
    Stack[StackPtr - 2] = T;
    StackPtr -= 1;
    Stack[StackPtr] = Stack[StackPtr] << 0x20;
    T = Stack[StackPtr - 1] | Stack[StackPtr];    
    Stack[StackPtr - 1] = Stack[StackPtr - 2];
    Stack[StackPtr - 2] = Stack[StackPtr - 3];
    Stack[StackPtr - 3] = T;
    T = Stack[StackPtr - 1];
    Stack[StackPtr - 1] = Stack[StackPtr - 2];
    Stack[StackPtr - 2] = T;
    StackPtr -= 1;
    Stack[StackPtr] = Stack[StackPtr] << 0x20;
    T = Stack[StackPtr - 1] | Stack[StackPtr];    
    Stack[StackPtr - 1] = Stack[StackPtr - 2];
    Stack[StackPtr - 2] = T;
    T = Stack[StackPtr - 1];
    Stack[StackPtr - 1] = Stack[StackPtr - 3];
    Stack[StackPtr - 3] = Stack[StackPtr - 2];
    Stack[StackPtr - 2] = T;
    StackPtr--;
    T = Stack[StackPtr - 1];
    Stack[StackPtr - 1] = Stack[StackPtr - 3];
    Stack[StackPtr - 3] = Stack[StackPtr - 2];
    Stack[StackPtr - 2] = T;
    StackPtr--;
    T = Stack[StackPtr - 1];
    Stack[StackPtr - 1] = Stack[StackPtr - 3];
    Stack[StackPtr - 3] = Stack[StackPtr - 2];
    Stack[StackPtr - 2] = T;
  }
  
  Stack[StackPtr - 1] = Stack[StackPtr - 4];
  if (Stack[StackPtr - 1] != 0) {
    Stack[StackPtr - 1] = Stack[StackPtr - 9];
    Stack[StackPtr] = Stack[StackPtr - 8];
  } else {
    Stack[StackPtr - 1] = Stack[StackPtr - 6];
    Stack[StackPtr] = Stack[StackPtr - 5];
  }

  StackPtr += 1;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr] = 0;
  StackPtr++;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = T;
  goto _004003AC;
};

_004004EA : {
  Stack[StackPtr] = Stack[StackPtr - 1];
  auto TablePtr = (Stack[StackPtr]);
  auto TablePtr2 = Stack[StackPtr]; //[0-5]

  const uint64_t Tab0[] = {0x489dddde, 0x95bf74a9, 0x0e6d80e3,
                           0xfb92cd42, 0xf2b3a3fb, 0xe74f99e0};
  Stack[StackPtr] = Tab0[TablePtr];

  const uint64_t Tab2[] = {0x95bf74a9067990f1, 0x0e6d80e377941ee7,
                           0xfb92cd422dedaf8b, 0xf2b3a3fbd0e867c0,
                           0xe74f99e06c39ce47, 0xd6378fea5a24f221};
  auto TableOut2 = Tab2[TablePtr2];

  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 1] =
      DW_OP_and((Stack[StackPtr - 1] + Stack[StackPtr]), 0xFFFFFFFF);
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = T;
  Stack[StackPtr - 2] = (Stack[StackPtr - 2] ^ Stack[StackPtr - 1]);
  Stack[StackPtr - 1] = TableOut2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr] = Stack[StackPtr - 1];
  StackPtr++;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = T;
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  Stack[StackPtr + 1] = Stack[StackPtr - 3];
  Stack[StackPtr] = ((Stack[StackPtr] ^ Stack[StackPtr + 1]) << 0x20);
  T = (Stack[StackPtr - 1] | Stack[StackPtr]);
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  T = (Stack[StackPtr - 2] & 0x00000000FFFFFFFF);
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  T = DW_OP_shr((Stack[StackPtr - 1] & 0xFFFFFFFF00000000), 0x20);
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = T;
  Stack[StackPtr] = Stack[StackPtr - 3];
  StackPtr++;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 1] = (Stack[StackPtr - 1] + 1);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr] = (Stack[StackPtr] - 6);
  if (Stack[StackPtr] != 0)
    goto _004004EA;

  StackPtr -= 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  StackPtr--;
  if (Stack[StackPtr] == 0)
    goto _00400556;
  Stack[StackPtr] = Stack[StackPtr - 5];
  T = (Stack[StackPtr] & 0x00000000FFFFFFFF);
  StackPtr += 2;
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  T = DW_OP_shr((Stack[StackPtr - 1] & 0xFFFFFFFF00000000), 0x20);
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr - 3]);
  T = DW_OP_shl(Stack[StackPtr - 1], 0x1A);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x06);
  T = DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr] = Stack[StackPtr - 4];
  Stack[StackPtr - 1] = (Stack[StackPtr - 1] ^ Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 3];
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  T = DW_OP_shr(Stack[StackPtr - 1], 0x0E);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x12);
  Stack[StackPtr - 1] = T;
  T = DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  StackPtr--;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] = DW_OP_shl(Stack[StackPtr - 2], 0x20);
  StackPtr -= 3;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  StackPtr--;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 1] = DW_OP_plus(Stack[StackPtr - 1], 1);
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = T;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr] = Stack[StackPtr - 3];
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], 15);
  if (Stack[StackPtr] != 0)
    goto _004003AC;

  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = Stack[StackPtr - 4];
  Stack[StackPtr - 4] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = T;
  StackPtr -= 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  StackPtr--;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  StackPtr--;
  if (Stack[StackPtr] == 0) {
    T = Stack[StackPtr - 1];
    Stack[StackPtr - 1] = Stack[StackPtr - 3];
    Stack[StackPtr - 3] = Stack[StackPtr - 2];
    Stack[StackPtr - 2] = T;
    StackPtr--;
    T = Stack[StackPtr - 1];
    Stack[StackPtr - 1] = Stack[StackPtr - 3];
    Stack[StackPtr - 3] = Stack[StackPtr - 2];
    Stack[StackPtr - 2] = T;
    Stack[StackPtr - 1] = 1;
    Stack[StackPtr] = Stack[StackPtr - 3];
    Stack[StackPtr + 1] = T;
    StackPtr += 2;
    goto _Loop0; // DW_OP_skip 0x0000001E (0x0040030B)
  }

  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr] = Stack[StackPtr - 4];
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr + 1] = Stack[StackPtr - 5];
  Stack[StackPtr + 1] = DW_OP_plus(Stack[StackPtr + 1], 1);
  StackPtr += 2;
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr] = Stack[StackPtr] - 4;
  if (Stack[StackPtr] != 0)
    goto _Loop0Entry;

  // Last calc
  auto T0 = Stack[StackPtr - 5];
  auto T1 = Stack[StackPtr - 4];

  uint64_t Arg0 = T1 ^ 0x658302A68E8E1C24;
  uint64_t Arg1 = T0 ^ 0xDC7564F1612E5347;
  uint64_t Arg2 = Stack[StackPtr - 2] ^ 0xD9C69B74A86EC613;
  uint64_t Arg3 = Stack[StackPtr - 3] ^ 0x65850B36E76AAED5;

  printf("%016llX\n", Arg0);
  printf("%016llX\n", Arg1);
  printf("%016llX\n", Arg2);
  printf("%016llX\n", Arg3);

  auto Result = (((Arg0) + (Arg1)) + (Arg2)) + (Arg3);
  printf("%016llX\n", Result);
  if (Result != 0xd7783616ef60e415) {
    printf("WRONG RESULT!!!\n");
    goto _WrongResult;
  } else
    goto _ValidResult; // DW_OP_bra 0x0000000C (0x004002B6, 0x004002C2)
};

_ValidResult : {
  return 0x0000000000403098;
  // goto _004082C1; // DW_OP_skip 0x00007FFF (0x004082C1)
};

_WrongResult : { return 0x00000000004030B8; };

_004003AC : {
  Stack[StackPtr] = Stack[StackPtr - 3];
  Stack[StackPtr + 1] = Stack[StackPtr - 5];
  Stack[StackPtr + 2] = Stack[StackPtr - 4];
  Stack[StackPtr + 3] = 0;
  StackPtr += 4;
  goto _004003B6;
};

_004003B6 : {
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = T;
  Stack[StackPtr] = Stack[StackPtr - 3];
  StackPtr++;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = T;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr] = (Stack[StackPtr - 1] & 0x00000000FFFFFFFF);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = ((Stack[StackPtr] & 0xFFFFFFFF00000000) >> 0x20);
  StackPtr++;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  T = (Stack[StackPtr - 1] & 0x00000000FFFFFFFF);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = ((Stack[StackPtr] & 0xFFFFFFFF00000000) >> 0x20);
  StackPtr++;
  Stack[StackPtr] = Stack[StackPtr - 5];

  const uint64_t Tab3[] = {0xd6378fea, 0xe23ca8c4, 0x84e3b1bc, 0xce5e10bf,
                           0xa2b364da, 0x41f250f0, 0xfe97040,  0x1cc05266,
                           0x16f87e4b, 0x515e26b7, 0xeea48dcb, 0x62b357e4,
                           0x39bd2041, 0x72cd387a, 0xf37aac8b};
  Stack[StackPtr] = Tab3[Stack[StackPtr]]; // 0x400678

  Stack[StackPtr + 1] = Stack[StackPtr - 4];
  Stack[StackPtr] = (Stack[StackPtr] ^ Stack[StackPtr + 1]);
  StackPtr++;
  Stack[StackPtr] = Stack[StackPtr - 4];
  Stack[StackPtr] = (Stack[StackPtr] + 0x45786532);
  Stack[StackPtr] = (Stack[StackPtr] & 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = Stack[StackPtr - 4];
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  Stack[StackPtr + 1] = Stack[StackPtr - 3];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x04);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x1C);
  Stack[StackPtr - 2] = T;
  StackPtr -= 1;
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr] = Stack[StackPtr - 1];
  StackPtr++;
  Stack[StackPtr] = Stack[StackPtr - 5];
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr - 4], 0x80000000);
  if (Stack[StackPtr] != 0) {
    Stack[StackPtr] = 0x84653217;
  } else {
    Stack[StackPtr] = 0x17246549;
  }

  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], 0xFF030018);
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], 0xFFFFFFFF);
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x02);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = Stack[StackPtr - 1];
  StackPtr++;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1E);
  Stack[StackPtr - 1] = T;
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x09);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x07);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x05);
  T = Stack[StackPtr + 2];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x1B);
  Stack[StackPtr + 1] = T;
  Stack[StackPtr + 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr + 1], Stack[StackPtr + 2]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x09);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x17);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x05);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x1B);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  Stack[StackPtr - 3] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 3], Stack[StackPtr - 2]), 0xFFFFFFFF);
  Stack[StackPtr - 2] = Stack[StackPtr - 3];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr -2], 0x06);
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x02);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x1E);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], DW_OP_shl(Stack[StackPtr], 0x09)),
                0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x09);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x17);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1D);
  Stack[StackPtr - 1] = DW_OP_and(DW_OP_or(T, Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x09);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1D);
  Stack[StackPtr - 1] = T;
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x09);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x17);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x06);
  T = Stack[StackPtr + 1];
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x1A);
  Stack[StackPtr] = T;  
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x06);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x0A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1D);
  Stack[StackPtr - 1] = T;
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x06);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x05);
  T = Stack[StackPtr + 2];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x1B);
  Stack[StackPtr + 1] = T;
  Stack[StackPtr + 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr + 1], Stack[StackPtr + 2]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], 0xFF030018);
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], 0xD2105517);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x05);
  T = Stack[StackPtr + 2];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x1B);
  Stack[StackPtr + 1] = T;
  Stack[StackPtr + 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr + 1], Stack[StackPtr + 2]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], 0xD2105517);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x06);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = 0xA571689F;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x09);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x07);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x03);
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x0A);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x02);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x1E);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  StackPtr += 2;
  Stack[StackPtr] = 6;
  StackPtr++;
  goto _00400D7D;
};

_004004E7 : {
  Stack[StackPtr] = Stack[StackPtr - 1];  
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr + 1] = 0;
  StackPtr += 2;
  goto _004004EA;
};

_00400556 : {
  Stack[StackPtr] = Stack[StackPtr - 5];  
  Stack[StackPtr + 1] = DW_OP_and(Stack[StackPtr], 0x00000000FFFFFFFF);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 1] =
      DW_OP_shr((Stack[StackPtr - 1] & 0xFFFFFFFF00000000), 0x20);
  T = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr - 3]);
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr - 4]);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x04);
  StackPtr++;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x1C);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr++;
  T = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr - 3]);
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x12);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], 0x0E);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr - 4]);
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  StackPtr--;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] = DW_OP_shl(Stack[StackPtr - 2], 0x20);
  StackPtr -= 3;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = T;
  Stack[StackPtr] = 1;
  StackPtr++;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_and(Stack[StackPtr - 1], 0x00000000FFFFFFFF);
  Stack[StackPtr] =
      DW_OP_shr(DW_OP_and(Stack[StackPtr], 0xFFFFFFFF00000000), 0x20);
  StackPtr++;
  goto _004004E7; // DW_OP_skip 0x000000AF (0x004004E7)
};

_00400D7D : {
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  StackPtr -= 1;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], 0xD2105517);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x09);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x17);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x02);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x1E);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x06);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x0A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1D);
  Stack[StackPtr - 1] = T;
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x05);
  T = Stack[StackPtr + 2];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x1B);
  Stack[StackPtr + 1] = T;
  Stack[StackPtr + 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr + 1], Stack[StackPtr + 2]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x06);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], 0xFF030018), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_xor(Stack[StackPtr], DW_OP_shr(Stack[StackPtr], 0x03));
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], 0xFF030018), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1D);
  Stack[StackPtr - 1] = T;
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x0A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  StackPtr -= 1;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], 1);
  Stack[StackPtr + 1] = Stack[StackPtr];
  StackPtr += 1;
  if (Stack[StackPtr] != 0)
    goto _00400D7D;
  StackPtr -= 3;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x02);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], 0xFF030018), 0xFFFFFFFF);
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x07);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x06);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x05);
  T = Stack[StackPtr + 2];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x1B);
  Stack[StackPtr + 1] = T;
  StackPtr += 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x07);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x06);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  Stack[StackPtr - 3] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 3], Stack[StackPtr - 2]), 0xFFFFFFFF);
  Stack[StackPtr - 2] = Stack[StackPtr - 3];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr -2], 0x06);
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x05);
  T = Stack[StackPtr + 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x1B);
  Stack[StackPtr] = T;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1D);
  Stack[StackPtr - 1] = T;
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x06);
  T = Stack[StackPtr + 1];
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x1A);
  Stack[StackPtr] = T;  
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x09);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], 0xD2105517);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x09);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x17);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x09);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x0A);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x06);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], 0xFF030018), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x06);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x05);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x1B);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  StackPtr += 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1E);
  Stack[StackPtr - 1] = T;
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 1];
  StackPtr++;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1E);
  Stack[StackPtr - 1] = T;
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x06);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], 0xFF030018), 0xFFFFFFFF);
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x02);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x02);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x1E);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x0A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x07);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x09);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x17);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x0A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x09);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], 0xD2105517);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x09);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x17);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x06);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1D);
  Stack[StackPtr - 1] = T;
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x06);
  T = Stack[StackPtr + 1];
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x1A);
  Stack[StackPtr] = T;  
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x09);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x17);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], 0xD2105517);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x07);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x02);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x1E);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x09);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x17);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x06);
  T = Stack[StackPtr + 1];
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x1A);
  Stack[StackPtr] = T;  
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x06);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1D);
  Stack[StackPtr - 1] = T;
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x09);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x17);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x02);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x1E);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x02);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x0A);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  StackPtr += 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1E);
  Stack[StackPtr - 1] = T;
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x09);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x07);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x06);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  Stack[StackPtr - 3] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 3], Stack[StackPtr - 2]), 0xFFFFFFFF);
  Stack[StackPtr - 2] = Stack[StackPtr - 3];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr -2], 0x06);
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x09);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x17);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x06);
  T = Stack[StackPtr + 1];
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x1A);
  Stack[StackPtr] = T;  
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x09);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x09);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x05);
  T = Stack[StackPtr + 2];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x1B);
  Stack[StackPtr + 1] = T;
  StackPtr += 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x09);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  StackPtr += 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1E);
  Stack[StackPtr - 1] = T;
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);  
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], 0xD2105517);  
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x03);
  StackPtr -= 1;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], 0xFF030018), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x05);
  T = Stack[StackPtr + 2];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x1B);
  Stack[StackPtr + 1] = T;
  StackPtr += 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x0A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x0A);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x05);
  T = Stack[StackPtr + 2];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x1B);
  Stack[StackPtr + 1] = T;
  StackPtr += 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = Stack[StackPtr - 1];  
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x02);
  T = Stack[StackPtr + 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x1E);
  Stack[StackPtr] = T;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x05);
  T = Stack[StackPtr + 2];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x1B);
  Stack[StackPtr + 1] = T;
  Stack[StackPtr + 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr + 1], Stack[StackPtr + 2]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], 0xD2105517);
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x07);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x05);
  T = Stack[StackPtr + 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x1B);
  Stack[StackPtr] = T;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x07);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_xor(Stack[StackPtr], DW_OP_shr(Stack[StackPtr], 0x03));
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], 0xD2105517);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x06);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1D);
  Stack[StackPtr - 1] = T;
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x06);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  Stack[StackPtr - 3] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 3], Stack[StackPtr - 2]), 0xFFFFFFFF);
  Stack[StackPtr - 2] = Stack[StackPtr - 3];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr -2], 0x06);
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], 0xD2105517);
  Stack[StackPtr + 1] = Stack[StackPtr];
  StackPtr += 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1E);
  Stack[StackPtr - 1] = T;
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr -= 1;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x0A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x06);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x06);
  T = Stack[StackPtr];
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = T;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], 0x1A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x09);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x17);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x02);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x1E);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x06);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], 0xFF030018), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x06);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x05);
  T = Stack[StackPtr + 2];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x1B);
  Stack[StackPtr + 1] = T;
  Stack[StackPtr + 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr + 1], Stack[StackPtr + 2]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], 0xFF030018), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x02);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x1E);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1D);
  Stack[StackPtr - 1] = T;
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x07);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x07);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], 0xFF030018), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x09);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x0A);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  StackPtr += 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1E);
  Stack[StackPtr - 1] = T;
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x07);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x09);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  StackPtr += 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1E);
  Stack[StackPtr - 1] = T;
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x09);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], 0xD2105517);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  StackPtr += 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1E);
  Stack[StackPtr - 1] = T;
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x0A);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x09);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], 0xFF030018), 0xFFFFFFFF);
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x02);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x07);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x05);
  T = Stack[StackPtr + 2];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x1B);
  Stack[StackPtr + 1] = T;
  Stack[StackPtr + 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr + 1], Stack[StackPtr + 2]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x09);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x17);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x06);
  T = Stack[StackPtr + 1];
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x1A);
  Stack[StackPtr] = T;  
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x03);
  StackPtr -= 1;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], 0xFF030018), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x06);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x07);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x06);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  StackPtr += 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1E);
  Stack[StackPtr - 1] = T;
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x09);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x09);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x17);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x06);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  StackPtr += 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1E);
  Stack[StackPtr - 1] = T;
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x09);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x17);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x03);
  StackPtr -= 1;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], 0xFF030018), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x06);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x09);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], 0xD2105517);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x03);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1D);
  Stack[StackPtr - 1] = T;
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x02);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x1E);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x06);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  Stack[StackPtr - 3] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 3], Stack[StackPtr - 2]), 0xFFFFFFFF);
  Stack[StackPtr - 2] = Stack[StackPtr - 3];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr -2], 0x06);
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x07);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  StackPtr++;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x03);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x06);
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shl(Stack[StackPtr + 1], 0x02);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shr(Stack[StackPtr - 2], 0x1E);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x06);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  StackPtr -= 2;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr - 1], Stack[StackPtr]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x07);
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x03);
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], 0xD2105517);
  Stack[StackPtr + 1] = DW_OP_shr(Stack[StackPtr], 0x02);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], 0xD2105517);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], 0xA571689F), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  Stack[StackPtr + 2] = DW_OP_shr(Stack[StackPtr + 1], 0x06);
  StackPtr += 3;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_shl(Stack[StackPtr - 2], 0x1A);
  Stack[StackPtr - 2] = T;
  Stack[StackPtr - 2] =
      DW_OP_and(DW_OP_or(Stack[StackPtr - 2], Stack[StackPtr - 1]), 0xFFFFFFFF);
  StackPtr -= 3;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], 0xD2105517);
  Stack[StackPtr + 1] = DW_OP_shl(Stack[StackPtr], 0x07);
  Stack[StackPtr] =
      DW_OP_and(DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr + 1] = Stack[StackPtr];
  StackPtr += 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr - 1], 0x02);
  T = Stack[StackPtr];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr - 1], 0x1E);
  Stack[StackPtr - 1] = T;
  StackPtr -= 1;
  Stack[StackPtr] =
      DW_OP_and(DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]), 0xFFFFFFFF);
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 3];
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 4];
  Stack[StackPtr - 1] = DW_OP_xor(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr] = Stack[StackPtr - 5];
  StackPtr++;
  Stack[StackPtr] = Stack[StackPtr - 5];
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], 0x20);  
  Stack[StackPtr - 1] = DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]);  
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = T;
  StackPtr -= 1;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], 0x20);  
  T = DW_OP_or(Stack[StackPtr - 1], Stack[StackPtr]);
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = Stack[StackPtr - 4];
  Stack[StackPtr - 4] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = T;
  StackPtr -= 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = Stack[StackPtr - 4];
  Stack[StackPtr - 4] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = T;
  StackPtr -= 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = Stack[StackPtr - 4];
  Stack[StackPtr - 4] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = T;
  StackPtr -= 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = Stack[StackPtr - 4];
  Stack[StackPtr - 4] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = T;
  StackPtr -= 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  StackPtr--;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr + 1] = Stack[StackPtr - 4];
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  if (Stack[StackPtr] != 0) {
    Stack[StackPtr - 1] = DW_OP_plus(Stack[StackPtr - 1], 1);
    goto _004003B6; // DW_OP_skip 0xFFFFFFE9 (0x004003B6)
  }

  T = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = Stack[StackPtr - 4];
  Stack[StackPtr - 4] = Stack[StackPtr - 3];
  Stack[StackPtr - 3] = T;
  StackPtr -= 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr] = Stack[StackPtr - 4];
  Stack[StackPtr + 1] = 0;
  StackPtr += 2;
  T = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = Stack[StackPtr - 2];
  Stack[StackPtr - 2] = T;
  Stack[StackPtr] = Stack[StackPtr - 1];
  Stack[StackPtr - 1] = DW_OP_and(Stack[StackPtr - 1], 0x00000000FFFFFFFF);
  Stack[StackPtr] =
      DW_OP_shr(DW_OP_and(Stack[StackPtr], 0xFFFFFFFF00000000), 0x20);
  StackPtr++;
  goto _004004E7; // DW_OP_skip 0x000000F5 (0x004004E7)
};
};
