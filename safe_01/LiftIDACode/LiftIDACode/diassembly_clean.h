uint64_t VMFunc(uint64_t Flag[4]) {
  uint64_t S[44];
  uint64_t SP = 1;

  uint64_t T;

  {
    S[1] = Flag[0];
    S[2] = Flag[1];
    S[3] = Flag[2];
    S[4] = Flag[3];
    SP = 5;
    if (((char *)Flag)[33] != 0)
      goto _WrongResult;

    S[SP] = S[SP - 4];
    S[SP + 1] = DW_OP_pick(S, SP + 1, 3);
    S[SP + 2] = 0;
    SP += 3;
    goto _Loop0Entry;
  };

// 3 args = {Flag[0], Flag[1], 0}
_Loop0Entry : {
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = S[SP - 3];
  S[SP - 3] = T;
  S[SP] = 0;
  S[SP + 1] = S[SP - 5];
  S[SP + 2] = S[SP - 4];
  SP += 3;
  goto _Loop0; // DW_OP_skip 0x00000033 (0x0040030B)
};

// 2 Args (Flag[1], Flag[2])
// 22222233, 333333Z}
_Loop0 : {
  SP++;

  for (int i = 0; i < 4; i++) {
    uint64_t T;
    T = S[SP - 1];
    S[SP - 1] = S[SP - 2];
    S[SP - 2] = S[SP - 3];
    S[SP - 3] = T;
    S[SP] = S[SP - 1] & 0x00000000FFFFFFFF;
    T = S[SP];
    S[SP] = S[SP - 1];
    S[SP - 1] = T;
    S[SP] = (S[SP] & 0xFFFFFFFF00000000) >> 0x20;
    SP++;
    T = S[SP - 1];
    S[SP - 1] = S[SP - 3];
    S[SP - 3] = S[SP - 2];
    S[SP - 2] = T;
    S[SP] = S[SP - 1] & 0x00000000FFFFFFFF;
    DW_OP_swap(S[SP], S[SP - 1]);
    S[SP] = (S[SP] & 0xFFFFFFFF00000000) >> 0x20;
    S[SP + 1] = S[SP];
    SP += 2;
    T = S[SP - 1];
    S[SP - 1] = S[SP - 2];
    S[SP - 2] = S[SP - 3];
    S[SP - 3] = T;
    S[SP] = S[SP - 5];
    SP -= 1;
    S[SP - 1] =
        (S[SP - 1] ^ (S[SP] + S[SP + 1])) &
        0xFFFFFFFF;
    T = S[SP - 1];
    S[SP - 1] = S[SP - 2];
    S[SP - 2] = T;
    S[SP] = S[SP - 4];
    S[SP - 1] = S[SP - 1] & S[SP];
    T = S[SP - 1];
    S[SP - 1] = S[SP - 2];
    S[SP - 2] = T;
    S[SP] = S[SP - 1];
    SP++;
    S[SP] = S[SP - 5];
    SP++;
    T = S[SP - 1];
    S[SP - 1] = S[SP - 2];
    S[SP - 2] = T;
    SP -= 2;
    S[SP] = (S[SP] - S[SP + 1]) & 0xFFFFFFFF;
    SP++;
    T = S[SP - 1];
    S[SP - 1] = S[SP - 2];
    S[SP - 2] = T;

    // Get table
    int Ptr = (S[SP - 4] & 0xFF) << 2;
    S[SP] = *(uint32_t *)(Table_004006B4 + Ptr);

    S[SP - 1] = (S[SP - 1] + S[SP]) & 0xFFFFFFFF;
    S[SP] = S[SP - 1];
    S[SP + 1] = S[SP - 4] >> 0x08;
    S[SP] = S[SP] ^ S[SP + 1];
    SP++;
    T = S[SP - 1];
    S[SP - 1] = S[SP - 3];
    S[SP - 3] = S[SP - 2];
    S[SP - 2] = T;
    T = S[SP - 1];
    S[SP - 1] = S[SP - 2];
    S[SP - 2] = T;
    SP -= 1;
    S[SP] = S[SP] << 0x20;
    T = S[SP - 1] | S[SP];    
    S[SP - 1] = S[SP - 2];
    S[SP - 2] = S[SP - 3];
    S[SP - 3] = T;
    T = S[SP - 1];
    S[SP - 1] = S[SP - 2];
    S[SP - 2] = T;
    SP -= 1;
    S[SP] = S[SP] << 0x20;
    T = S[SP - 1] | S[SP];    
    S[SP - 1] = S[SP - 2];
    S[SP - 2] = T;
    T = S[SP - 1];
    S[SP - 1] = S[SP - 3];
    S[SP - 3] = S[SP - 2];
    S[SP - 2] = T;
    SP--;
    T = S[SP - 1];
    S[SP - 1] = S[SP - 3];
    S[SP - 3] = S[SP - 2];
    S[SP - 2] = T;
    SP--;
    T = S[SP - 1];
    S[SP - 1] = S[SP - 3];
    S[SP - 3] = S[SP - 2];
    S[SP - 2] = T;
  }
  
  S[SP - 1] = S[SP - 4];
  if (S[SP - 1] != 0) {
    S[SP - 1] = S[SP - 9];
    S[SP] = S[SP - 8];
  } else {
    S[SP - 1] = S[SP - 6];
    S[SP] = S[SP - 5];
  }
  
  T = S[SP];
  S[SP] = S[SP - 1];
  S[SP - 1] = T;
  S[SP + 1] = 0;  
  T = S[SP + 1];
  S[SP + 1] = S[SP];
  S[SP] = S[SP - 1];
  S[SP - 1] = T;
  SP += 2;
  goto _004003AC;
};

_004004EA : {
  S[SP] = S[SP - 1];
  auto TablePtr = (S[SP]);
  auto TablePtr2 = S[SP]; //[0-5]

  const uint64_t Tab0[] = {0x489dddde, 0x95bf74a9, 0x0e6d80e3,
                           0xfb92cd42, 0xf2b3a3fb, 0xe74f99e0};
  S[SP] = Tab0[TablePtr];

  const uint64_t Tab2[] = {0x95bf74a9067990f1, 0x0e6d80e377941ee7,
                           0xfb92cd422dedaf8b, 0xf2b3a3fbd0e867c0,
                           0xe74f99e06c39ce47, 0xd6378fea5a24f221};
  auto TableOut2 = Tab2[TablePtr2];

  T = S[SP];
  S[SP] = S[SP - 1];
  S[SP - 1] = T;
  T = S[SP];
  S[SP] = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  S[SP - 1] =
      DW_OP_and((S[SP - 1] + S[SP]), 0xFFFFFFFF);
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = S[SP - 3];
  S[SP - 3] = T;
  S[SP - 2] = (S[SP - 2] ^ S[SP - 1]);
  S[SP - 1] = TableOut2;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  S[SP] = S[SP - 1];
  SP++;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = S[SP - 3];
  S[SP - 3] = T;
  SP -= 2;
  S[SP] = DW_OP_or(S[SP], S[SP + 1]);
  S[SP + 1] = S[SP - 3];
  S[SP] = ((S[SP] ^ S[SP + 1]) << 0x20);
  T = (S[SP - 1] | S[SP]);
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = T;
  T = (S[SP - 2] & 0x00000000FFFFFFFF);
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  T = DW_OP_shr((S[SP - 1] & 0xFFFFFFFF00000000), 0x20);
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = S[SP - 3];
  S[SP - 3] = T;
  S[SP] = S[SP - 3];
  SP++;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = T;
  S[SP - 1] = (S[SP - 1] + 1);
  S[SP] = S[SP - 1];
  S[SP] = (S[SP] - 6);
  if (S[SP] != 0)
    goto _004004EA;

  SP -= 2;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = T;
  SP--;
  if (S[SP] == 0)
    goto _00400556;
  S[SP] = S[SP - 5];
  T = (S[SP] & 0x00000000FFFFFFFF);
  SP += 2;
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  T = DW_OP_shr((S[SP - 1] & 0xFFFFFFFF00000000), 0x20);
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP - 3]);
  T = DW_OP_shl(S[SP - 1], 0x1A);
  S[SP] = S[SP - 1];
  S[SP - 1] = T;
  S[SP] = DW_OP_shr(S[SP], 0x06);
  T = DW_OP_and(DW_OP_or(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  S[SP] = S[SP - 4];
  S[SP - 1] = (S[SP - 1] ^ S[SP]);
  S[SP] = S[SP - 3];
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  T = DW_OP_shr(S[SP - 1], 0x0E);
  S[SP] = DW_OP_shl(S[SP - 1], 0x12);
  S[SP - 1] = T;
  T = DW_OP_and(DW_OP_or(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = T;
  SP--;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = T;
  S[SP - 2] = DW_OP_shl(S[SP - 2], 0x20);
  SP -= 3;
  S[SP] = DW_OP_or(S[SP], S[SP + 1]);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = T;
  SP--;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = T;
  S[SP - 1] = DW_OP_plus(S[SP - 1], 1);
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = S[SP - 3];
  S[SP - 3] = T;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  S[SP] = S[SP - 3];
  S[SP] = DW_OP_minus(S[SP], 15);
  if (S[SP] != 0)
    goto _004003AC;

  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = S[SP - 4];
  S[SP - 4] = S[SP - 3];
  S[SP - 3] = T;
  SP -= 2;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = T;
  SP--;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = T;
  SP--;
  if (S[SP] == 0) {
    T = S[SP - 1];
    S[SP - 1] = S[SP - 3];
    S[SP - 3] = S[SP - 2];
    S[SP - 2] = T;
    SP--;
    T = S[SP - 1];
    S[SP - 1] = S[SP - 3];
    S[SP - 3] = S[SP - 2];
    S[SP - 2] = T;
    S[SP - 1] = 1;
    S[SP] = S[SP - 3];
    S[SP + 1] = T;
    SP += 2;
    goto _Loop0; // DW_OP_skip 0x0000001E (0x0040030B)
  }

  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = T;
  S[SP] = S[SP - 4];
  T = S[SP];
  S[SP] = S[SP - 1];
  S[SP - 1] = T;
  S[SP + 1] = S[SP - 5];
  S[SP + 1] = DW_OP_plus(S[SP + 1], 1);
  SP += 2;
  S[SP] = S[SP - 1];
  S[SP] = S[SP] - 4;
  if (S[SP] != 0)
    goto _Loop0Entry;

  // Last calc
  auto T0 = S[SP - 5];
  auto T1 = S[SP - 4];

  uint64_t Arg0 = T1 ^ 0x658302A68E8E1C24;
  uint64_t Arg1 = T0 ^ 0xDC7564F1612E5347;
  uint64_t Arg2 = S[SP - 2] ^ 0xD9C69B74A86EC613;
  uint64_t Arg3 = S[SP - 3] ^ 0x65850B36E76AAED5;

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
  S[SP] = S[SP - 3];
  S[SP + 1] = S[SP - 5];
  S[SP + 2] = S[SP - 4];
  S[SP + 3] = 0;
  SP += 4;
  goto _004003B6;
};

_004003B6 : {
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = S[SP - 3];
  S[SP - 3] = T;
  S[SP] = S[SP - 3];
  SP++;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = S[SP - 3];
  S[SP - 3] = T;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  S[SP] = (S[SP - 1] & 0x00000000FFFFFFFF);
  T = S[SP];
  S[SP] = S[SP - 1];
  S[SP - 1] = T;
  S[SP] = ((S[SP] & 0xFFFFFFFF00000000) >> 0x20);
  SP++;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = T;
  T = (S[SP - 1] & 0x00000000FFFFFFFF);
  S[SP] = S[SP - 1];
  S[SP - 1] = T;
  S[SP] = ((S[SP] & 0xFFFFFFFF00000000) >> 0x20);
  SP++;
  S[SP] = S[SP - 5];

  const uint64_t Tab3[] = {0xd6378fea, 0xe23ca8c4, 0x84e3b1bc, 0xce5e10bf,
                           0xa2b364da, 0x41f250f0, 0xfe97040,  0x1cc05266,
                           0x16f87e4b, 0x515e26b7, 0xeea48dcb, 0x62b357e4,
                           0x39bd2041, 0x72cd387a, 0xf37aac8b};
  S[SP] = Tab3[S[SP]]; // 0x400678

  S[SP + 1] = S[SP - 4];
  S[SP] = (S[SP] ^ S[SP + 1]);
  SP++;
  S[SP] = S[SP - 4];
  S[SP] = (S[SP] + 0x45786532);
  S[SP] = (S[SP] & 0xFFFFFFFF);
  SP++;
  S[SP] = S[SP - 1];
  S[SP + 1] = S[SP - 4];
  S[SP] = DW_OP_xor(S[SP], S[SP + 1]);
  S[SP + 1] = S[SP - 3];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x04);
  SP += 3;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x1C);
  S[SP - 2] = T;
  SP -= 1;
  S[SP - 1] =
      DW_OP_and(DW_OP_or(S[SP - 1], S[SP]), 0xFFFFFFFF);
  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = T;
  S[SP] = S[SP - 1];
  SP++;
  S[SP] = S[SP - 5];
  T = S[SP];
  S[SP] = S[SP - 1];
  S[SP - 1] = T;
  S[SP - 1] =
      DW_OP_and(DW_OP_minus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_and(S[SP - 4], 0x80000000);
  if (S[SP] != 0) {
    S[SP] = 0x84653217;
  } else {
    S[SP] = 0x17246549;
  }

  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  S[SP] = DW_OP_plus(S[SP], 0xFF030018);
  S[SP] = DW_OP_and(S[SP], 0xFFFFFFFF);
  S[SP + 1] = DW_OP_shr(S[SP], 0x02);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP++;
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] =
      DW_OP_and(DW_OP_or(T, DW_OP_shr(S[SP], 0x1A)), 0xFFFFFFFF);
  S[SP] = S[SP - 1];
  SP++;
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1E);
  S[SP - 1] = T;
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], DW_OP_shl(S[SP - 1], 0x09)), 0xFFFFFFFF);
  S[SP] = DW_OP_shl(S[SP - 1], 0x07);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x05);
  T = S[SP + 2];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x1B);
  S[SP + 1] = T;
  S[SP + 1] =
      DW_OP_and(DW_OP_or(S[SP + 1], S[SP + 2]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x09);
  SP += 3;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x17);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shl(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shl(S[SP], 0x05);
  SP += 2;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x1B);
  S[SP - 2] = T;
  S[SP - 2] =
      DW_OP_and(DW_OP_or(S[SP - 2], S[SP - 1]), 0xFFFFFFFF);
  S[SP - 3] =
      DW_OP_and(DW_OP_plus(S[SP - 3], S[SP - 2]), 0xFFFFFFFF);
  S[SP - 2] = S[SP - 3];
  S[SP - 1] = DW_OP_shr(S[SP -2], 0x06);
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shl(S[SP - 2], 0x1A);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shl(S[SP], 0x02);
  SP += 2;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x1E);
  S[SP - 2] = T;
  S[SP - 2] =
      DW_OP_and(DW_OP_or(S[SP - 2], S[SP - 1]), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], DW_OP_shl(S[SP], 0x09)),
                0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x09);
  SP += 3;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x17);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1D);
  S[SP - 1] = DW_OP_and(DW_OP_or(T, S[SP]), 0xFFFFFFFF);
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] =
      DW_OP_and(DW_OP_or(T, DW_OP_shr(S[SP], 0x1A)), 0xFFFFFFFF);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], DW_OP_shl(S[SP - 1], 0x09)), 0xFFFFFFFF);
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1D);
  S[SP - 1] = T;
  S[SP - 1] =
      DW_OP_and(DW_OP_or(S[SP - 1], S[SP]), 0xFFFFFFFF);
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] =
      DW_OP_and(DW_OP_or(T, DW_OP_shr(S[SP], 0x1A)), 0xFFFFFFFF);
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shl(S[SP], 0x09);
  SP += 2;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x17);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x06);
  T = S[SP + 1];
  S[SP + 1] = DW_OP_shl(S[SP], 0x1A);
  S[SP] = T;  
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x06);
  SP += 3;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  SP++;
  S[SP] = DW_OP_shr(S[SP - 1], 0x0A);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1D);
  S[SP - 1] = T;
  S[SP - 1] =
      DW_OP_and(DW_OP_or(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x06);
  SP += 2;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x05);
  T = S[SP + 2];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x1B);
  S[SP + 1] = T;
  S[SP + 1] =
      DW_OP_and(DW_OP_or(S[SP + 1], S[SP + 2]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] = DW_OP_plus(S[SP], 0xFF030018);
  S[SP] = DW_OP_and(S[SP], 0xFFFFFFFF);
  S[SP] = DW_OP_xor(S[SP], 0xD2105517);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x05);
  T = S[SP + 2];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x1B);
  S[SP + 1] = T;
  S[SP + 1] =
      DW_OP_and(DW_OP_or(S[SP + 1], S[SP + 2]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] = DW_OP_xor(S[SP], 0xD2105517);
  SP++;
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] = T;
  S[SP] = DW_OP_shr(S[SP], 0x1A);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  SP++;
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] =
      DW_OP_and(DW_OP_or(T, DW_OP_shr(S[SP], 0x1A)), 0xFFFFFFFF);
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] =
      DW_OP_and(DW_OP_or(T, DW_OP_shr(S[SP], 0x1A)), 0xFFFFFFFF);
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x06);
  SP += 3;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  SP++;
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], DW_OP_shl(S[SP - 1], 0x09)), 0xFFFFFFFF);
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = DW_OP_shl(S[SP], 0x07);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = DW_OP_shl(S[SP], 0x03);
  S[SP] = DW_OP_xor(S[SP], S[SP + 1]);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  S[SP + 1] = DW_OP_shr(S[SP], 0x0A);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 1] =
      DW_OP_and(DW_OP_or(DW_OP_shl(S[SP + 1], 0x02), DW_OP_shr(S[SP + 1], 0x1E)), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  SP += 2;
  S[SP] = 6;
  SP++;
  goto _00400D7D;
};

_004004E7 : {
  S[SP] = S[SP - 1];  
  T = S[SP];
  S[SP] = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  S[SP + 1] = 0;
  SP += 2;
  goto _004004EA;
};

_00400556 : {
  S[SP] = S[SP - 5];  
  S[SP + 1] = DW_OP_and(S[SP], 0x00000000FFFFFFFF);
  SP += 2;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  S[SP - 1] =
      DW_OP_shr((S[SP - 1] & 0xFFFFFFFF00000000), 0x20);
  T = DW_OP_xor(S[SP - 1], S[SP - 3]);
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP - 4]);
  S[SP] = DW_OP_shl(S[SP - 1], 0x04);
  SP++;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x1C);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP++;
  T = DW_OP_xor(S[SP - 1], S[SP - 3]);
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  S[SP] = DW_OP_shr(S[SP - 1], 0x12);
  T = S[SP];
  S[SP] = S[SP - 1];
  S[SP - 1] = T;
  S[SP] = DW_OP_shl(S[SP], 0x0E);
  S[SP - 1] =
      DW_OP_and(DW_OP_or(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP - 4]);
  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = T;
  SP--;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = T;
  S[SP - 2] = DW_OP_shl(S[SP - 2], 0x20);
  SP -= 3;
  S[SP] = DW_OP_or(S[SP], S[SP + 1]);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = T;
  S[SP - 1] = S[SP - 2];
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = S[SP - 3];
  S[SP - 3] = T;
  S[SP] = 1;
  SP++;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  S[SP] = S[SP - 1];
  S[SP - 1] = DW_OP_and(S[SP - 1], 0x00000000FFFFFFFF);
  S[SP] =
      DW_OP_shr(DW_OP_and(S[SP], 0xFFFFFFFF00000000), 0x20);
  SP++;
  goto _004004E7; // DW_OP_skip 0x000000AF (0x004004E7)
};

_00400D7D : {
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  SP -= 1;
  S[SP] = DW_OP_xor(S[SP], 0xD2105517);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x09);
  SP += 3;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x17);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shl(S[SP], 0x02);
  SP += 2;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x1E);
  S[SP - 2] = T;
  S[SP - 2] =
      DW_OP_and(DW_OP_or(S[SP - 2], S[SP - 1]), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x06);
  SP += 3;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shl(S[SP - 2], 0x1A);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shr(S[SP - 1], 0x0A);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1D);
  S[SP - 1] = T;
  S[SP - 1] =
      DW_OP_and(DW_OP_or(S[SP - 1], S[SP]), 0xFFFFFFFF);
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] = T;
  S[SP] = DW_OP_shr(S[SP], 0x1A);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x05);
  T = S[SP + 2];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x1B);
  S[SP + 1] = T;
  S[SP + 1] =
      DW_OP_and(DW_OP_or(S[SP + 1], S[SP + 2]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x06);
  SP += 3;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], 0xFF030018), 0xFFFFFFFF);
  S[SP] =
      DW_OP_xor(S[SP], DW_OP_shr(S[SP], 0x03));
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], 0xFF030018), 0xFFFFFFFF);
  SP++;
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1D);
  S[SP - 1] = T;
  S[SP - 1] =
      DW_OP_and(DW_OP_or(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shl(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shr(S[SP - 1], 0x0A);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shl(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  SP -= 1;
  S[SP] = DW_OP_minus(S[SP], 1);
  S[SP + 1] = S[SP];
  SP += 1;
  if (S[SP] != 0)
    goto _00400D7D;
  SP -= 3;
  S[SP] = DW_OP_xor(S[SP], S[SP + 1]);
  S[SP + 1] = DW_OP_shr(S[SP], 0x02);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], 0xFF030018), 0xFFFFFFFF);
  S[SP + 1] = DW_OP_shl(S[SP], 0x07);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x06);
  SP += 3;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP++;
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] = T;
  S[SP] = DW_OP_shr(S[SP], 0x1A);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x05);
  T = S[SP + 2];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x1B);
  S[SP + 1] = T;
  SP += 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shl(S[SP - 1], 0x07);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x06);
  SP += 3;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  S[SP - 3] =
      DW_OP_and(DW_OP_plus(S[SP - 3], S[SP - 2]), 0xFFFFFFFF);
  S[SP - 2] = S[SP - 3];
  S[SP - 1] = DW_OP_shr(S[SP -2], 0x06);
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP++;
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] =
      DW_OP_and(DW_OP_or(T, DW_OP_shr(S[SP], 0x1A)), 0xFFFFFFFF);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shl(S[SP], 0x05);
  T = S[SP + 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x1B);
  S[SP] = T;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1D);
  S[SP - 1] = T;
  S[SP - 1] =
      DW_OP_and(DW_OP_or(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x06);
  T = S[SP + 1];
  S[SP + 1] = DW_OP_shl(S[SP], 0x1A);
  S[SP] = T;  
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], DW_OP_shl(S[SP - 1], 0x09)), 0xFFFFFFFF);
  S[SP] = DW_OP_shl(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] = T;
  S[SP] = DW_OP_shr(S[SP], 0x1A);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] = DW_OP_xor(S[SP], 0xD2105517);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x09);
  SP += 3;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x17);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], DW_OP_shl(S[SP - 1], 0x09)), 0xFFFFFFFF);
  S[SP] = DW_OP_shr(S[SP - 1], 0x0A);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x06);
  SP += 3;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP++;
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] = T;
  S[SP] = DW_OP_shr(S[SP], 0x1A);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], 0xFF030018), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x06);
  SP += 3;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  SP++;
  S[SP] = DW_OP_shl(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shl(S[SP], 0x05);
  SP += 2;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x1B);
  S[SP - 2] = T;
  S[SP - 2] =
      DW_OP_and(DW_OP_or(S[SP - 2], S[SP - 1]), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  SP += 2;
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1E);
  S[SP - 1] = T;
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 1];
  SP++;
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1E);
  S[SP - 1] = T;
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] =
      DW_OP_and(DW_OP_or(T, DW_OP_shr(S[SP], 0x1A)), 0xFFFFFFFF);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x06);
  SP += 2;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP++;
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], 0xFF030018), 0xFFFFFFFF);
  S[SP + 1] = DW_OP_shr(S[SP], 0x02);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 1] =
      DW_OP_and(DW_OP_or(DW_OP_shl(S[SP + 1], 0x02), DW_OP_shr(S[SP + 1], 0x1E)), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP++;
  S[SP] = DW_OP_shr(S[SP - 1], 0x0A);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = DW_OP_shl(S[SP], 0x07);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x09);
  SP += 3;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x17);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shr(S[SP - 1], 0x0A);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shl(S[SP - 1], 0x09);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] = DW_OP_xor(S[SP], 0xD2105517);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x09);
  SP += 3;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x17);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x06);
  SP += 2;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  SP++;
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1D);
  S[SP - 1] = T;
  S[SP - 1] =
      DW_OP_and(DW_OP_or(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x06);
  T = S[SP + 1];
  S[SP + 1] = DW_OP_shl(S[SP], 0x1A);
  S[SP] = T;  
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] =
      DW_OP_and(DW_OP_or(T, DW_OP_shr(S[SP], 0x1A)), 0xFFFFFFFF);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shl(S[SP], 0x09);
  SP += 2;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x17);
  S[SP - 2] = T;
  S[SP - 2] =
      DW_OP_and(DW_OP_or(S[SP - 2], S[SP - 1]), 0xFFFFFFFF);
  SP -= 3;
  S[SP] = DW_OP_xor(S[SP], S[SP + 1]);
  S[SP] = DW_OP_xor(S[SP], 0xD2105517);
  SP++;
  S[SP] = DW_OP_shl(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] =
      DW_OP_and(DW_OP_or(T, DW_OP_shr(S[SP], 0x1A)), 0xFFFFFFFF);
  S[SP] = DW_OP_shl(S[SP - 1], 0x07);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 1] =
      DW_OP_and(DW_OP_or(DW_OP_shl(S[SP + 1], 0x02), DW_OP_shr(S[SP + 1], 0x1E)), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x09);
  SP += 3;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x17);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x06);
  T = S[SP + 1];
  S[SP + 1] = DW_OP_shl(S[SP], 0x1A);
  S[SP] = T;  
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP++;
  S[SP] = DW_OP_shl(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x06);
  SP += 2;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP++;
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1D);
  S[SP - 1] = T;
  S[SP - 1] =
      DW_OP_and(DW_OP_or(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shl(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] =
      DW_OP_and(DW_OP_or(T, DW_OP_shr(S[SP], 0x1A)), 0xFFFFFFFF);
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x09);
  SP += 3;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x17);
  S[SP - 2] = T;
  S[SP - 2] =
      DW_OP_and(DW_OP_or(S[SP - 2], S[SP - 1]), 0xFFFFFFFF);
  SP -= 3;
  S[SP] = DW_OP_xor(S[SP], S[SP + 1]);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 1] =
      DW_OP_and(DW_OP_or(DW_OP_shl(S[SP + 1], 0x02), DW_OP_shr(S[SP + 1], 0x1E)), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = DW_OP_shr(S[SP], 0x02);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = DW_OP_shr(S[SP], 0x0A);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  SP += 2;
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1E);
  S[SP - 1] = T;
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], DW_OP_shl(S[SP - 1], 0x09)), 0xFFFFFFFF);
  S[SP] = DW_OP_shl(S[SP - 1], 0x07);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP++;
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] =
      DW_OP_and(DW_OP_or(T, DW_OP_shr(S[SP], 0x1A)), 0xFFFFFFFF);
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] =
      DW_OP_and(DW_OP_or(T, DW_OP_shr(S[SP], 0x1A)), 0xFFFFFFFF);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x06);
  SP += 2;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  S[SP - 3] =
      DW_OP_and(DW_OP_plus(S[SP - 3], S[SP - 2]), 0xFFFFFFFF);
  S[SP - 2] = S[SP - 3];
  S[SP - 1] = DW_OP_shr(S[SP -2], 0x06);
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x09);
  SP += 3;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x17);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x06);
  T = S[SP + 1];
  S[SP + 1] = DW_OP_shl(S[SP], 0x1A);
  S[SP] = T;  
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shl(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], DW_OP_shl(S[SP - 1], 0x09)), 0xFFFFFFFF);
  S[SP] = DW_OP_shl(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shl(S[SP - 1], 0x09);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x05);
  T = S[SP + 2];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x1B);
  S[SP + 1] = T;
  SP += 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] =
      DW_OP_and(DW_OP_or(T, DW_OP_shr(S[SP], 0x1A)), 0xFFFFFFFF);
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shl(S[SP - 1], 0x09);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  SP += 2;
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1E);
  S[SP - 1] = T;
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);  
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP - 1] = DW_OP_xor(S[SP - 1], 0xD2105517);  
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shl(S[SP - 1], 0x03);
  SP -= 1;
  S[SP] = DW_OP_xor(S[SP], S[SP + 1]);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], 0xFF030018), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x05);
  T = S[SP + 2];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x1B);
  S[SP + 1] = T;
  SP += 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] =
      DW_OP_and(DW_OP_or(T, DW_OP_shr(S[SP], 0x1A)), 0xFFFFFFFF);
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP++;
  S[SP] = DW_OP_shr(S[SP - 1], 0x0A);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shr(S[SP - 1], 0x0A);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x05);
  T = S[SP + 2];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x1B);
  S[SP + 1] = T;
  SP += 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] =
      DW_OP_and(DW_OP_or(T, DW_OP_shr(S[SP], 0x1A)), 0xFFFFFFFF);
  S[SP] = S[SP - 1];  
  S[SP + 1] = DW_OP_shl(S[SP], 0x02);
  T = S[SP + 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x1E);
  S[SP] = T;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x05);
  T = S[SP + 2];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x1B);
  S[SP + 1] = T;
  S[SP + 1] =
      DW_OP_and(DW_OP_or(S[SP + 1], S[SP + 2]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] = DW_OP_xor(S[SP], 0xD2105517);
  S[SP + 1] = DW_OP_shl(S[SP], 0x07);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP++;
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] =
      DW_OP_and(DW_OP_or(T, DW_OP_shr(S[SP], 0x1A)), 0xFFFFFFFF);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shl(S[SP], 0x05);
  T = S[SP + 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x1B);
  S[SP] = T;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shl(S[SP - 1], 0x07);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_xor(S[SP], DW_OP_shr(S[SP], 0x03));
  S[SP] = DW_OP_xor(S[SP], 0xD2105517);
  SP++;
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x06);
  SP += 2;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP++;
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1D);
  S[SP - 1] = T;
  S[SP - 1] =
      DW_OP_and(DW_OP_or(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x06);
  SP += 2;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  S[SP - 3] =
      DW_OP_and(DW_OP_plus(S[SP - 3], S[SP - 2]), 0xFFFFFFFF);
  S[SP - 2] = S[SP - 3];
  S[SP - 1] = DW_OP_shr(S[SP -2], 0x06);
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] = DW_OP_xor(S[SP], 0xD2105517);
  S[SP + 1] = S[SP];
  SP += 2;
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1E);
  S[SP - 1] = T;
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP -= 1;
  S[SP] = DW_OP_xor(S[SP], S[SP + 1]);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  SP++;
  S[SP] = DW_OP_shr(S[SP - 1], 0x0A);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shl(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x06);
  SP += 2;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP++;
  T = DW_OP_shl(S[SP - 1], 0x06);  
  S[SP] = S[SP - 1];
  S[SP - 1] =
      DW_OP_and(DW_OP_or(T, DW_OP_shr(S[SP], 0x1A)), 0xFFFFFFFF);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shl(S[SP], 0x09);
  SP += 2;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x17);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP++;
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shl(S[SP], 0x02);
  SP += 2;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x1E);
  S[SP - 2] = T;
  S[SP - 2] =
      DW_OP_and(DW_OP_or(S[SP - 2], S[SP - 1]), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x06);
  SP += 3;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], 0xFF030018), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x06);
  SP += 3;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x05);
  T = S[SP + 2];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x1B);
  S[SP + 1] = T;
  S[SP + 1] =
      DW_OP_and(DW_OP_or(S[SP + 1], S[SP + 2]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], 0xFF030018), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 1] =
      DW_OP_and(DW_OP_or(DW_OP_shl(S[SP + 1], 0x02), DW_OP_shr(S[SP + 1], 0x1E)), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP++;
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1D);
  S[SP - 1] = T;
  S[SP - 1] =
      DW_OP_and(DW_OP_or(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shl(S[SP - 1], 0x07);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = DW_OP_shl(S[SP], 0x07);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], 0xFF030018), 0xFFFFFFFF);
  SP++;
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], DW_OP_shl(S[SP - 1], 0x09)), 0xFFFFFFFF);
  S[SP] = DW_OP_shr(S[SP - 1], 0x0A);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  SP += 2;
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1E);
  S[SP - 1] = T;
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shl(S[SP - 1], 0x07);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = DW_OP_shl(S[SP], 0x09);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  SP += 2;
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1E);
  S[SP - 1] = T;
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shl(S[SP - 1], 0x09);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] = DW_OP_xor(S[SP], 0xD2105517);
  SP++;
  S[SP] = DW_OP_shl(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  SP += 2;
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1E);
  S[SP - 1] = T;
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shr(S[SP - 1], 0x0A);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = DW_OP_shl(S[SP], 0x09);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], 0xFF030018), 0xFFFFFFFF);
  S[SP + 1] = DW_OP_shr(S[SP], 0x02);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = DW_OP_shl(S[SP], 0x07);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x05);
  T = S[SP + 2];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x1B);
  S[SP + 1] = T;
  S[SP + 1] =
      DW_OP_and(DW_OP_or(S[SP + 1], S[SP + 2]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x09);
  SP += 3;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x17);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x06);
  T = S[SP + 1];
  S[SP + 1] = DW_OP_shl(S[SP], 0x1A);
  S[SP] = T;  
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shl(S[SP - 1], 0x03);
  SP -= 1;
  S[SP] = DW_OP_xor(S[SP], S[SP + 1]);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], 0xFF030018), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x06);
  SP += 3;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shl(S[SP - 2], 0x1A);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shl(S[SP - 1], 0x07);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x06);
  SP += 3;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  SP += 2;
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1E);
  S[SP - 1] = T;
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shl(S[SP - 1], 0x09);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x09);
  SP += 3;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x17);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x06);
  SP += 2;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  SP += 2;
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1E);
  S[SP - 1] = T;
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shl(S[SP + 1], 0x09);
  SP += 3;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x17);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shl(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = DW_OP_shl(S[SP - 1], 0x03);
  SP -= 1;
  S[SP] = DW_OP_xor(S[SP], S[SP + 1]);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], 0xFF030018), 0xFFFFFFFF);
  SP++;
  S[SP] = DW_OP_shl(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x06);
  SP += 2;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = DW_OP_shl(S[SP], 0x09);
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] = DW_OP_xor(S[SP], 0xD2105517);
  SP++;
  S[SP] = DW_OP_shr(S[SP - 1], 0x03);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1D);
  S[SP - 1] = T;
  S[SP - 1] =
      DW_OP_and(DW_OP_or(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shl(S[SP], 0x02);
  SP += 2;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shr(S[SP - 2], 0x1E);
  S[SP - 2] = T;
  S[SP - 2] =
      DW_OP_and(DW_OP_or(S[SP - 2], S[SP - 1]), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x06);
  SP += 3;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  S[SP - 3] =
      DW_OP_and(DW_OP_plus(S[SP - 3], S[SP - 2]), 0xFFFFFFFF);
  S[SP - 2] = S[SP - 3];
  S[SP - 1] = DW_OP_shr(S[SP -2], 0x06);
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shl(S[SP - 2], 0x1A);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shl(S[SP - 1], 0x07);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  SP++;
  S[SP] = DW_OP_shl(S[SP - 1], 0x03);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 1];
  S[SP + 1] = DW_OP_shr(S[SP], 0x06);
  SP += 2;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 1] =
      DW_OP_and(DW_OP_or(DW_OP_shl(S[SP + 1], 0x02), DW_OP_shr(S[SP + 1], 0x1E)), 0xFFFFFFFF);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x06);
  SP += 3;
  T = S[SP - 1];
  S[SP - 1] = DW_OP_shl(S[SP - 2], 0x1A);
  S[SP - 2] = T;
  SP -= 2;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] =
      DW_OP_and(DW_OP_plus(S[SP - 1], S[SP]), 0xFFFFFFFF);
  S[SP] = DW_OP_shl(S[SP - 1], 0x07);
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = DW_OP_shl(S[SP], 0x03);
  S[SP] = DW_OP_xor(S[SP], S[SP + 1]);
  S[SP] = DW_OP_xor(S[SP], 0xD2105517);
  S[SP + 1] = DW_OP_shr(S[SP], 0x02);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] = DW_OP_xor(S[SP], 0xD2105517);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], 0xA571689F), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  S[SP + 2] = DW_OP_shr(S[SP + 1], 0x06);
  SP += 3;
  T = S[SP - 1];
  S[SP - 2] =
      DW_OP_and(DW_OP_or(T, DW_OP_shl(S[SP - 2], 0x1A)), 0xFFFFFFFF);
  SP -= 3;
  S[SP] =
      DW_OP_and(DW_OP_plus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP] = DW_OP_xor(S[SP], 0xD2105517);
  S[SP + 1] = DW_OP_shl(S[SP], 0x07);
  S[SP] =
      DW_OP_and(DW_OP_minus(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP + 1] = S[SP];
  SP += 2;
  S[SP] = DW_OP_shr(S[SP - 1], 0x02);
  T = S[SP];
  S[SP] = DW_OP_shl(S[SP - 1], 0x1E);
  S[SP - 1] = T;
  SP -= 1;
  S[SP] =
      DW_OP_and(DW_OP_or(S[SP], S[SP + 1]), 0xFFFFFFFF);
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 3];
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 4];
  S[SP - 1] = DW_OP_xor(S[SP - 1], S[SP]);
  S[SP] = S[SP - 5];
  SP++;
  S[SP] = S[SP - 5];
  S[SP] = DW_OP_shl(S[SP], 0x20);  
  S[SP - 1] = DW_OP_or(S[SP - 1], S[SP]);  
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = S[SP - 3];
  S[SP - 3] = T;
  SP -= 1;
  S[SP] = DW_OP_shl(S[SP], 0x20);  
  T = DW_OP_or(S[SP - 1], S[SP]);
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = S[SP - 4];
  S[SP - 4] = S[SP - 3];
  S[SP - 3] = T;
  SP -= 2;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = S[SP - 4];
  S[SP - 4] = S[SP - 3];
  S[SP - 3] = T;
  SP -= 2;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = S[SP - 4];
  S[SP - 4] = S[SP - 3];
  S[SP - 3] = T;
  SP -= 2;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = S[SP - 4];
  S[SP - 4] = S[SP - 3];
  S[SP - 3] = T;
  SP -= 2;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = T;
  SP--;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 3];
  S[SP - 3] = S[SP - 2];
  S[SP - 2] = T;
  S[SP] = S[SP - 1];
  S[SP + 1] = S[SP - 4];
  S[SP] = DW_OP_minus(S[SP], S[SP + 1]);
  if (S[SP] != 0) {
    S[SP - 1] = DW_OP_plus(S[SP - 1], 1);
    goto _004003B6; // DW_OP_skip 0xFFFFFFE9 (0x004003B6)
  }

  T = S[SP - 2];
  S[SP - 2] = S[SP - 4];
  S[SP - 4] = S[SP - 3];
  S[SP - 3] = T;
  SP -= 2;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  S[SP] = S[SP - 4];
  S[SP + 1] = 0;
  SP += 2;
  T = S[SP - 1];
  S[SP - 1] = S[SP - 2];
  S[SP - 2] = T;
  S[SP] = S[SP - 1];
  S[SP - 1] = DW_OP_and(S[SP - 1], 0x00000000FFFFFFFF);
  S[SP] =
      DW_OP_shr(DW_OP_and(S[SP], 0xFFFFFFFF00000000), 0x20);
  SP++;
  goto _004004E7; // DW_OP_skip 0x000000F5 (0x004004E7)
};
};
