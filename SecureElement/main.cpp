#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sha2.h"

// Gate operation
/*
uint8_t Gate(uint8_t A, uint8_t B, uint8_t C, uint8_t D) {
  return (A & B) | (C & D);
}
*/

#define Gate(A, B, C, D) ((A) & (B)) | ((C) & (D))

// Buttons
uint8_t Buttons = 0;
__forceinline uint8_t secure_device(uint8_t A, uint8_t B, uint8_t OP) {
  // Output
  uint8_t O = 0;

  uint8_t BT1 = (Buttons >> 0) & 1;
  uint8_t BT2 = (Buttons >> 1) & 1;
  uint8_t BT3 = (Buttons >> 2) & 1;
  uint8_t BT4 = (Buttons >> 3) & 1;

  uint8_t A0 = (A >> 0) & 1;
  uint8_t A1 = (A >> 1) & 1;
  uint8_t A2 = (A >> 2) & 1;
  uint8_t A3 = (A >> 3) & 1;
  uint8_t A4 = (A >> 4) & 1;
  uint8_t A5 = (A >> 5) & 1;
  uint8_t A6 = (A >> 6) & 1;
  uint8_t A7 = (A >> 7) & 1;

  uint8_t B0 = (B >> 0) & 1;
  uint8_t B1 = (B >> 1) & 1;
  uint8_t B2 = (B >> 2) & 1;
  uint8_t B3 = (B >> 3) & 1;
  uint8_t B4 = (B >> 4) & 1;
  uint8_t B5 = (B >> 5) & 1;
  uint8_t B6 = (B >> 6) & 1;
  uint8_t B7 = (B >> 7) & 1;

  uint8_t OP0 = (OP >> 0) & 1;
  uint8_t OP1 = (OP >> 1) & 1;

  // Gate Array C
  uint8_t C0 = Gate(A6, BT3, A7, !BT3);
  uint8_t C1 = Gate(A5, BT3, A6, !BT3);
  uint8_t C2 = Gate(A4, BT3, A5, !BT3);
  uint8_t C3 = Gate(A3, BT3, A4, !BT3);
  uint8_t C4 = Gate(A2, BT3, A3, !BT3);
  uint8_t C5 = Gate(A1, BT3, A2, !BT3);
  uint8_t C6 = Gate(A0, BT3, A1, !BT3);
  uint8_t C7 = Gate(A0, !BT3, A7, BT3);

  // Gate Array D
  uint8_t D0 = Gate(B6, BT4, B7, !BT4);
  uint8_t D1 = Gate(B5, BT4, B6, !BT4);
  uint8_t D2 = Gate(B4, BT4, B5, !BT4);
  uint8_t D3 = Gate(B3, BT4, B4, !BT4);
  uint8_t D4 = Gate(B2, BT4, B3, !BT4);
  uint8_t D5 = Gate(B1, BT4, B2, !BT4);
  uint8_t D6 = Gate(B0, BT4, B1, !BT4);
  uint8_t D7 = Gate(B0, !BT4, B7, BT4);

  // Gate Array E
  uint8_t E0 = Gate(OP0, !BT1, !OP0, BT1);
  uint8_t E1 = Gate(OP1, !BT2, !OP1, BT2);

  // Output O0
  uint8_t X0 = C7 ^ D7;
  uint8_t R0 = C7 & D7;
  uint8_t T0 = C7 | D7;
  uint8_t S0 = Gate(X0, E0, X0, !E0);
  uint8_t U0 = Gate(R0, !E0, E0, T0);
  uint8_t O0 = Gate(S0, E1, U0, !E1);

  // Output O1
  uint8_t X1 = C6 ^ D6;
  uint8_t R1 = C6 & D6;
  uint8_t T1 = C6 | D6;
  uint8_t U1 = Gate(R1, !E0, E0, T1);
  uint8_t Y0 = R0 ^ X1;
  uint8_t V0 = (R0 & X1) | R1;
  uint8_t S1 = Gate(Y0, E0, X1, !E0);
  uint8_t O1 = Gate(S1, E1, U1, !E1);

  // Output O2
  uint8_t X2 = C5 ^ D5;
  uint8_t R2 = C5 & D5;
  uint8_t T2 = C5 | D5;
  uint8_t U2 = Gate(R2, !E0, E0, T2);
  uint8_t Y1 = V0 ^ X2;
  uint8_t V1 = (V0 & X2) | R2;
  uint8_t S2 = Gate(Y1, E0, X2, !E0);
  uint8_t O2 = Gate(S2, E1, U2, !E1);

  // Output O3
  uint8_t X3 = C4 ^ D4;
  uint8_t R3 = C4 & D4;
  uint8_t T3 = C4 | D4;
  uint8_t U3 = Gate(R3, !E0, E0, T3);
  uint8_t Y2 = V1 ^ X3;
  uint8_t V2 = (V1 & X3) | R3;
  uint8_t S3 = Gate(Y2, E0, X3, !E0);
  uint8_t O3 = Gate(S3, E1, U3, !E1);

  // Output O4
  uint8_t X4 = C3 ^ D3;
  uint8_t R4 = C3 & D3;
  uint8_t T4 = C3 | D3;
  uint8_t U4 = Gate(R4, !E0, E0, T4);
  uint8_t Y3 = V2 ^ X4;
  uint8_t V3 = (V2 & X4) | R4;
  uint8_t S4 = Gate(Y3, E0, X4, !E0);
  uint8_t O4 = Gate(S4, E1, U4, !E1);

  // Output O5
  uint8_t X5 = C2 ^ D2;
  uint8_t R5 = C2 & D2;
  uint8_t T5 = C2 | D2;
  uint8_t U5 = Gate(R5, !E0, E0, T5);
  uint8_t Y4 = V3 ^ X5;
  uint8_t V4 = (V3 & X5) | R5;
  uint8_t S5 = Gate(Y4, E0, X5, !E0);
  uint8_t O5 = Gate(S5, E1, U5, !E1);

  // Output O6
  uint8_t X6 = C1 ^ D1;
  uint8_t R6 = C1 & D1;
  uint8_t T6 = C1 | D1;
  uint8_t U6 = Gate(R6, !E0, E0, T6);
  uint8_t Y5 = V4 ^ X6;
  uint8_t V5 = (V4 & X6) | R6;
  uint8_t S6 = Gate(Y5, E0, X6, !E0);
  uint8_t O6 = Gate(S6, E1, U6, !E1);

  // Output O7
  uint8_t X7 = C0 ^ D0;
  uint8_t R7 = C0 & D0;
  uint8_t T7 = C0 | D0;
  uint8_t U7 = Gate(R7, !E0, E0, T7);
  uint8_t Y6 = V5 ^ X7;
  uint8_t V6 = (V5 & X7) | R7;
  uint8_t S7 = Gate(Y6, E0, X7, !E0);
  uint8_t O7 = Gate(S7, E1, U7, !E1);

  // Gen output byte
  O = O | (O0 << 0);
  O = O | (O1 << 1);
  O = O | (O2 << 2);
  O = O | (O3 << 3);
  O = O | (O4 << 4);
  O = O | (O5 << 5);
  O = O | (O6 << 6);
  O = O | (O7 << 7);

  return O;
}

uint8_t Step1Table[16] = { 0xD7, 0x19, 0xDF, 0x40, 0xAF, 0x62, 0xBF, 0x81, 0x47, 0x39, 0xC7, 0xC2, 0x90, 0x72, 0x8F, 0x89, };
uint8_t Step2Table[16] = { 0x29, 0xD1, 0x08, 0xDB, 0x52, 0xA4, 0x10, 0xB5, 0x32, 0xD9, 0x90, 0xDA, 0xF3, 0xB4, 0x20, 0xF5, };
uint8_t Step3Table[16] = { 0xED, 0x8D, 0xD9, 0xDF, 0xDB, 0x1C, 0xB0, 0xBF, 0xBD, 0x4F, 0xDC, 0xDD, 0x7B, 0x9F, 0x01, 0xBB, };
uint8_t Step4Table[16] = { 0xAA, 0x38, 0xA9, 0x28, 0x55, 0x71, 0x53, 0x52, 0x1A, 0x4E, 0xAD, 0x00, 0x35, 0x9C, 0x5B, 0x40, };
uint8_t Step5Table[16] = { 0xFD, 0x00, 0xAF, 0x47, 0xFF, 0x01, 0x60, 0x8E, 0xED, 0x41, 0xDE, 0xD4, 0xCB, 0x82, 0xBD, 0xA9, };
uint8_t Step6Table[16] = { 0x31, 0xB2, 0xF6, 0x64, 0x4E, 0x65, 0xED, 0xC8, 0x3D, 0xCF, 0xEE, 0xE0, 0x1B, 0x9D, 0xDD, 0xC1, };
uint8_t Step7Table[16] = { 0xDD, 0x54, 0x4D, 0x4F, 0xBB, 0xA9, 0x9A, 0x9E, 0x60, 0x86, 0x05, 0xDF, 0xCA, 0xE8, 0x0A, 0xBF, };
uint8_t Step8Table[16] = { 0x83, 0x54, 0x78, 0xFB, 0x07, 0xAA, 0xF0, 0xF3, 0x97, 0x85, 0xD8, 0xFC, 0x4D, 0x48, 0xB0, 0xFD, };


uint8_t step1() {
  uint8_t r = 0;
  r = secure_device(0x35, 0x27, 3);
  r = secure_device(0x7e, r, 3);
  r = secure_device(0x66, r, 2);
  r = secure_device(0x8, r, 1);
  r = secure_device(0x13, r, 0);
  r = secure_device(0x1f, r, 1);
  r = secure_device(0xa, r, 2);
  r = secure_device(0xd3, r, 0);
  r = secure_device(0xc6, r, 3);

  return r;
};

uint8_t step2() {
  uint8_t r = 0;
  r = secure_device(0xde, 0xab, 0);
  r = secure_device(0x67, r, 3);
  r = secure_device(0x2a, r, 2);
  r = secure_device(0x6d, r, 1);
  r = secure_device(0x4a, r, 3);
  r = secure_device(0xe7, r, 0);
  r = secure_device(0x1c, r, 1);
  r = secure_device(0x35, r, 0);
  r = secure_device(0xde, r, 3);
  r = secure_device(0xf7, r, 0);
  r = secure_device(0xda, r, 2);
  return r;
};

uint8_t step3() {
  uint8_t r = 0;
  r = secure_device(0x14, 0x23, 3);
  r = secure_device(0x72, r, 0);
  r = secure_device(0x48, r, 3);
  r = secure_device(0x53, r, 1);
  r = secure_device(0xa7, r, 0);
  r = secure_device(0x5f, r, 1);
  r = secure_device(0x3, r, 3);
  r = secure_device(0xb7, r, 3);
  r = secure_device(0x73, r, 1);
  r = secure_device(0x37, r, 3);
  r = secure_device(0xc5, r, 2);
  r = secure_device(0xa4, r, 1);
  r = secure_device(0x30, r, 0);
  r = secure_device(0xdd, r, 2);
  return r;
};

uint8_t step4() {
  uint8_t r = 0;
  r = secure_device(0xb0, 0x42, 2);
  r = secure_device(0xbc, r, 2);
  r = secure_device(0xfc, r, 2);
  r = secure_device(0x54, r, 3);
  r = secure_device(0x30, r, 2);
  r = secure_device(0x97, r, 1);
  r = secure_device(0xe8, r, 2);
  r = secure_device(0xd6, r, 0);
  r = secure_device(0x26, r, 0);
  r = secure_device(0xeb, r, 0);
  r = secure_device(0x68, r, 1);
  r = secure_device(0x26, r, 0);
  r = secure_device(0x9, r, 3);
  r = secure_device(0x2a, r, 2);
  r = secure_device(0xa9, r, 3);
  return r;
};

uint8_t step5() {
  uint8_t r = 0;
  r = secure_device(0xff, 0x12, 0);
  r = secure_device(0xfd, r, 1);
  r = secure_device(0xe5, r, 1);
  r = secure_device(0x26, r, 3);
  r = secure_device(0x85, r, 3);
  r = secure_device(0x63, r, 1);
  r = secure_device(0x93, r, 3);
  r = secure_device(0xba, r, 2);
  r = secure_device(0x97, r, 0);
  r = secure_device(0xab, r, 1);
  r = secure_device(0x6e, r, 3);
  r = secure_device(0xfd, r, 0);
  r = secure_device(0x4c, r, 3);
  r = secure_device(0x50, r, 0);
  r = secure_device(0xa, r, 2);
  r = secure_device(0xfc, r, 3);
  r = secure_device(0xe3, r, 2);
  r = secure_device(0xa6, r, 3);
  r = secure_device(0x64, r, 2);
  r = secure_device(0x8e, r, 3);
  r = secure_device(0xc1, r, 1);
  return r;
};

uint8_t step6() {
  uint8_t r = 0;
  r = secure_device(0x90, 0x77, 1);
  r = secure_device(0x8e, r, 0);
  r = secure_device(0xbd, r, 2);
  r = secure_device(0x39, r, 2);
  r = secure_device(0x4c, r, 2);
  r = secure_device(0xc5, r, 2);
  r = secure_device(0xb6, r, 3);
  r = secure_device(0x93, r, 1);
  r = secure_device(0x9f, r, 3);
  r = secure_device(0xd6, r, 3);
  r = secure_device(0x6e, r, 2);
  r = secure_device(0x39, r, 3);
  r = secure_device(0x40, r, 1);
  r = secure_device(0x14, r, 2);
  r = secure_device(0xe6, r, 3);
  return r;
};

uint8_t step7() {
  uint8_t r = 0;
  r = secure_device(0xf, 0xab, 3);
  r = secure_device(0xa2, r, 1);
  r = secure_device(0x7c, r, 0);
  r = secure_device(0x34, r, 1);
  r = secure_device(0x14, r, 1);
  r = secure_device(0xe7, r, 0);
  r = secure_device(0xb9, r, 0);
  r = secure_device(0xf1, r, 2);
  r = secure_device(0xd5, r, 1);
  r = secure_device(0x4e, r, 2);
  r = secure_device(0xe, r, 2);
  r = secure_device(0x6, r, 0);
  r = secure_device(0x7d, r, 2);
  r = secure_device(0x87, r, 3);
  r = secure_device(0xbc, r, 0);
  r = secure_device(0xd4, r, 3);
  r = secure_device(0x8a, r, 1);
  r = secure_device(0xe7, r, 3);
  r = secure_device(0x9e, r, 1);
  r = secure_device(0x58, r, 0);
  r = secure_device(0x24, r, 2);
  r = secure_device(0x44, r, 3);
  r = secure_device(0xc9, r, 1);
  r = secure_device(0xd4, r, 1);
  r = secure_device(0x1d, r, 3);
  r = secure_device(0xcd, r, 0);
  r = secure_device(0xde, r, 1);
  r = secure_device(0x54, r, 0);
  r = secure_device(0x5e, r, 2);
  r = secure_device(0x46, r, 1);
  r = secure_device(0x21, r, 0);
  r = secure_device(0xff, r, 1);
  r = secure_device(0x51, r, 0);
  r = secure_device(0x78, r, 1);
  r = secure_device(0x2f, r, 3);
  r = secure_device(0xed, r, 2);
  r = secure_device(0x4b, r, 3);
  r = secure_device(0x4d, r, 2);
  return r;
};

uint8_t step8() {
  uint8_t r = 0;
  r = secure_device(0x88, 0x74, 0);
  r = secure_device(0x48, r, 2);
  r = secure_device(0x11, r, 2);
  r = secure_device(0x76, r, 0);
  r = secure_device(0x2b, r, 3);
  r = secure_device(0xf8, r, 2);
  return r;
};

uint8_t Init() {
  uint8_t r = secure_device(0x46, 0x92, 0);
  r = secure_device(0xdf, r, 2);
  r = secure_device(0x3e, r, 0);
  r = secure_device(0x3a, r, 3);
  r = secure_device(0x36, r, 2);
  r = secure_device(0x8e, r, 2);
  r = secure_device(0xc9, r, 3);
  r = secure_device(0xe7, r, 1);
  r = secure_device(0x29, r, 2);
  r = secure_device(0xc2, r, 2);
  r = secure_device(0x79, r, 0);
  r = secure_device(0x2a, r, 2);
  r = secure_device(0x4c, r, 3);
  r = secure_device(0xde, r, 0);
  r = secure_device(0x88, r, 0);
  r = secure_device(0x8b, r, 2);
  r = secure_device(0x97, r, 3);
  r = secure_device(0x6a, r, 2);
  r = secure_device(0x60, r, 1);
  r = secure_device(0x0f, r, 0);
  r = secure_device(0x5b, r, 3);
  r = secure_device(0xd0, r, 2);
  r = secure_device(0xa9, r, 1);
  r = secure_device(0xe3, r, 3);
  r = secure_device(0xd0, r, 1);
  r = secure_device(0x27, r, 0);
  r = secure_device(0x90, r, 0);
  r = secure_device(0x3b, r, 1);
  r = secure_device(0x66, r, 2);
  r = secure_device(0xe2, r, 0);
  r = secure_device(0x24, r, 3);
  r = secure_device(0xee, r, 1);
  r = secure_device(0xf2, r, 3);
  return r;
}

int BruteForcePin_0(uint8_t Expected) {
  for (int i = 0; i < 16; i++) {
    Buttons = i;

    auto r = Init();
    // Test 1 (‭1 0 1 0 0 0 0 1‬) (0xA1)
    if (r == Expected) {
      return i;
    }
  }
  assert("Pin not found!");
}

void PrintPin(uint8_t Pin) {
  printf("BTN: 0 1 2 3\n");
  printf("PIN: ");
  for (int i = 0; i < 4; i++) {
    printf("%i ", (Pin >> (3 - i)) & 1);
  }
  printf("\n");
}

void PrintTable(char *TableName, uint8_t Table[16]) {
  printf("uint8_t %s[16] = { ", TableName);
  for (int i = 0; i < 16; i++) {
    printf("0x%02X, ", Table[i]);
  }
  printf("};\n");
}

void GenTables() { 
  uint8_t Step1Table[16];
  uint8_t Step2Table[16];
  uint8_t Step3Table[16];
  uint8_t Step4Table[16];
  uint8_t Step5Table[16];
  uint8_t Step6Table[16];
  uint8_t Step7Table[16];
  uint8_t Step8Table[16];

  for (int i = 0; i < 16; i++) {
    Buttons = i;
    Step1Table[i] = step1();
  }

  for (int i = 0; i < 16; i++) {
    Buttons = i;
    Step2Table[i] = step2();
  }

  for (int i = 0; i < 16; i++) {
    Buttons = i;
    Step3Table[i] = step3();
  }

  for (int i = 0; i < 16; i++) {
    Buttons = i;
    Step4Table[i] = step4();
  }

  for (int i = 0; i < 16; i++) {
    Buttons = i;
    Step5Table[i] = step5();
  }

  for (int i = 0; i < 16; i++) {
    Buttons = i;
    Step6Table[i] = step6();
  }

  for (int i = 0; i < 16; i++) {
    Buttons = i;
    Step7Table[i] = step7();
  }

  for (int i = 0; i < 16; i++) {
    Buttons = i;
    Step8Table[i] = step8();
  }

  // Print
  PrintTable((char *) "Step1Table", Step1Table);
  PrintTable((char *) "Step2Table", Step2Table);
  PrintTable((char *) "Step3Table", Step3Table);
  PrintTable((char *) "Step4Table", Step4Table);
  PrintTable((char *) "Step5Table", Step5Table);
  PrintTable((char *) "Step6Table", Step6Table);
  PrintTable((char *) "Step7Table", Step7Table);
  PrintTable((char *) "Step8Table", Step8Table);
}

const uint8_t ValidHash[]{0x00, 0xc8, 0xbb, 0x35, 0xd4, 0x4d, 0xcb, 0xb2,
                          0x71, 0x2a, 0x11, 0x79, 0x9d, 0x8e, 0x13, 0x16,
                          0x04, 0x5d, 0x64, 0x40, 0x4f, 0x33, 0x7f, 0x4f,
                          0xf6, 0x53, 0xc2, 0x76, 0x07, 0xf4, 0x36, 0xea};

int main(int argc, char **argv) {
  /*
  GenTables();
  return 0;
	*/
  

  // 0xA1
  printf("Pin for 0xA1:\n");
  uint8_t Pin = BruteForcePin_0(0xA1);
  PrintPin(Pin);

  // 0xE0
  printf("\nPin for 0xE0:\n");
  Pin = BruteForcePin_0(0xE0);
  PrintPin(Pin);
  
  uint16_t Input = 0;
  Buttons = Input;
  uint8_t s1 = step1();

  Input = 0;
  Buttons = Input;
  uint8_t s2 = step2();

  Input = 0;
  Buttons = Input;
  uint8_t s3 = step3();

  Input = 0;
  Buttons = Input;
  uint8_t s4 = step4();

  Input = 0;
  Buttons = Input;
  uint8_t s5 = step5();

  Input = 0;
  Buttons = Input;
  uint8_t s6 = step6();

  Input = 0;
  Buttons = Input;
  uint8_t s7 = step7();

  Input = 0;
  Buttons = Input;
  uint8_t s8 = step8();

  //Tables
  /*
  uint16_t Input1 = 0;
  uint8_t s1 = Step1Table[Input1];

  uint16_t Input2 = 0;
  uint8_t s2 = Step2Table[Input2];

  uint16_t Input3 = 0;
  uint8_t s3 = Step3Table[Input3];

  uint16_t Input4 = 0;
  uint8_t s4 = Step4Table[Input4];

  uint16_t Input5 = 0;
  uint8_t s5 = Step5Table[Input5];

  uint16_t Input6 = 0;
  uint8_t s6 = Step6Table[Input6];

  uint16_t Input7 = 0;
  uint8_t s7 = Step7Table[Input7];

  uint16_t Input8 = 0;
  uint8_t s8 = Step8Table[Input8];
  */
  // Calc digest
  uint8_t key[8] = {s1, s2, s3, s4, s5, s6, s7, s8};
  printf("\nKey:\n");
  for (int i = 0; i < 8; i++) {
    printf("%02X", key[i]);
  }
  printf("\n");

  sha256_ctx ctx;
  sha256_init(&ctx);
  sha256_update(&ctx, key, 8);
  uint8_t Digest[32];
  sha256_final(&ctx, Digest);

  printf("\nDigest:\n");
  for (int i = 0; i < 32; i++) {
    printf("%02X", Digest[i]);
  }
  printf("\n\n");

  if (!memcmp(Digest, ValidHash, 32)) {
    printf("Valid key!");    
  } else {
    printf("Not Valid key!");    
  }

  return 0;
}