#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable : 4102)

/*
const uint32_t Table_00400648[]{
0x489DDDDE, 0x067990F1, 0x95BF74A9, 0x77941EE7, 0x0E6D80E3, 0x2DEDAF8B,
0xFB92CD42, 0xD0E867C0, 0xF2B3A3FB, 0x6C39CE47, 0xE74F99E0, 0x5A24F221,
0xD6378FEA, 0xE23CA8C4, 0x84E3B1BC, 0xCE5E10BF, 0xA2B364DA, 0x41F250F0,
0x0FE97040, 0x1CC05266, 0x16F87E4B, 0x515E26B7, 0xEEA48DCB, 0x62B357E4,
0x39BD2041, 0x72CD387A, 0xF37AAC8B, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x1EB1B17D, 0x0ABE446F, 0x00000000, 0x00000000, 0x00000000, 0x7C296F51,
0xCD799972, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x58EBF0F3, 0x8B591C3F, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x765B3E20, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x776421CE, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0xE301D3E4, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0xFB57817D, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0xB04414FB, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0xC03E1E77, 0xA901869E, 0x00000000,
0x00000000, 0x00000000, 0xEABE1270, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xA535AE94, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x6355E5BA,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x6C88C67C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x92C84C5F,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0xFE6813C4, 0x00000000, 0x00000000, 0x00000000, 0x2BCAC45D,
0x00000000, 0x689BE0D8, 0x00000000, 0x00000000, 0x00000000, 0x72887F79,
0xCE027A75, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x64EAAFC1, 0x00000000,
0x00000000, 0x37B8F048, 0x00000000, 0x00000000, 0x00000000, 0xA76384BA,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0xB4D4D459, 0x00000000, 0x59DFFEAA, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0xB1A8C69A, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x1F82604D, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x8F5FB519,
};
*/

const uint8_t Table_00400648[] = {
    0xDE, 0xDD, 0x9D, 0x48, 0xF1, 0x90, 0x79, 0x06, 0xA9, 0x74, 0xBF, 0x95,
    0xE7, 0x1E, 0x94, 0x77, 0xE3, 0x80, 0x6D, 0x0E, 0x8B, 0xAF, 0xED, 0x2D,
    0x42, 0xCD, 0x92, 0xFB, 0xC0, 0x67, 0xE8, 0xD0, 0xFB, 0xA3, 0xB3, 0xF2,
    0x47, 0xCE, 0x39, 0x6C, 0xE0, 0x99, 0x4F, 0xE7, 0x21, 0xF2, 0x24, 0x5A,
    0xEA, 0x8F, 0x37, 0xD6, 0xC4, 0xA8, 0x3C, 0xE2, 0xBC, 0xB1, 0xE3, 0x84,
    0xBF, 0x10, 0x5E, 0xCE, 0xDA, 0x64, 0xB3, 0xA2, 0xF0, 0x50, 0xF2, 0x41,
    0x40, 0x70, 0xE9, 0x0F, 0x66, 0x52, 0xC0, 0x1C, 0x4B, 0x7E, 0xF8, 0x16,
    0xB7, 0x26, 0x5E, 0x51, 0xCB, 0x8D, 0xA4, 0xEE, 0xE4, 0x57, 0xB3, 0x62,
    0x41, 0x20, 0xBD, 0x39, 0x7A, 0x38, 0xCD, 0x72, 0x8B, 0xAC, 0x7A, 0xF3,
    0x9B, 0xB3, 0x63, 0x59, 0xDD, 0x5A, 0xF7, 0x30, 0xBC, 0xEC, 0x3F, 0x10,
    0x7A, 0x2E, 0x39, 0x00, 0xDF, 0x7A, 0xDF, 0x35, 0x13, 0xBD, 0x9A, 0xE1,
    0x5C, 0xB3, 0xF8, 0xDA, 0x14, 0x82, 0x79, 0xF8, 0x05, 0x23, 0x0C, 0xB3,
    0xE9, 0x80, 0x79, 0x06, 0x40, 0xD9, 0x00, 0x69, 0x6F, 0x87, 0x5E, 0x03,
    0x14, 0x70, 0x85, 0xA3, 0x62, 0xE1, 0xC8, 0x56, 0x56, 0x8F, 0x74, 0xE9,
    0x09, 0xE4, 0xD4, 0x91, 0x09, 0x5A, 0xC7, 0xDC, 0x2F, 0xF5, 0x65, 0xAC,
    0x07, 0xDD, 0x71, 0x85, 0xF6, 0xDC, 0x9E, 0x01, 0xEB, 0xF9, 0xCE, 0x51,
    0x7D, 0xB1, 0xB1, 0x1E, 0x6F, 0x44, 0xBE, 0x0A, 0xFE, 0x7C, 0x27, 0x3B,
    0xBC, 0x69, 0x38, 0x84, 0x98, 0xA2, 0x3E, 0xB2, 0x51, 0x6F, 0x29, 0x7C,
    0x72, 0x99, 0x79, 0xCD, 0x64, 0x0A, 0x18, 0x62, 0xD5, 0x52, 0xC0, 0x0A,
    0x05, 0x62, 0x07, 0xF0, 0x93, 0x31, 0x18, 0x13, 0x94, 0xCB, 0x08, 0xB9,
    0x3C, 0xCD, 0xF4, 0x4B, 0x8A, 0xD4, 0xE5, 0xDE, 0x74, 0x9A, 0x4F, 0xF6,
    0xD0, 0x15, 0x4A, 0xD6, 0x34, 0xD4, 0xCA, 0xB2, 0x3B, 0x01, 0xE9, 0x64,
    0xD2, 0xC1, 0x6C, 0xF4, 0xDB, 0xE9, 0x78, 0x9D, 0x16, 0x92, 0x78, 0x11,
    0xE6, 0x89, 0x56, 0x33, 0xDB, 0x7E, 0x4C, 0x07, 0x85, 0x61, 0xEB, 0xE6,
    0x0B, 0x17, 0x20, 0xD0, 0x15, 0xAA, 0x04, 0xF3, 0x9E, 0xB6, 0xF2, 0xBC,
    0xEA, 0xD2, 0xB3, 0x4E, 0x5C, 0x4D, 0x8D, 0xD7, 0xC4, 0xBF, 0xD2, 0x7E,
    0xF3, 0xF0, 0xEB, 0x58, 0x3F, 0x1C, 0x59, 0x8B, 0x6B, 0x1F, 0x04, 0xD3,
    0x88, 0xAE, 0x5C, 0x00, 0x5C, 0x6F, 0x69, 0xBA, 0xDE, 0x8E, 0x6C, 0xC1,
    0x27, 0xBB, 0xBC, 0x9A, 0x77, 0x8D, 0xD7, 0x56, 0x20, 0x3E, 0x5B, 0x76,
    0x2D, 0x21, 0x37, 0xCF, 0xCF, 0x2D, 0x2E, 0x19, 0x06, 0x28, 0xAF, 0x8C,
    0x5B, 0x57, 0x9A, 0xBC, 0xCE, 0x21, 0x64, 0x77, 0xEB, 0xB9, 0x7F, 0x52,
    0x40, 0x43, 0xF8, 0x69, 0xD7, 0x7B, 0xBC, 0xAD, 0x29, 0xC3, 0xF2, 0x73,
    0x7F, 0x8A, 0x7F, 0x73, 0xE4, 0xD3, 0x01, 0xE3, 0xB2, 0xBE, 0x7E, 0x05,
    0x58, 0xB8, 0x59, 0x58, 0x79, 0x19, 0xC4, 0x2C, 0x39, 0xA6, 0x69, 0xEC,
    0x23, 0xD5, 0xB0, 0x53, 0x32, 0xF5, 0xA2, 0x39, 0x5D, 0xE3, 0x29, 0x8B,
    0x81, 0xCE, 0xE2, 0x44, 0x6D, 0xA1, 0x10, 0xCC, 0x58, 0xFF, 0xD9, 0x44,
    0x14, 0x2C, 0x10, 0x77, 0x7D, 0x81, 0x57, 0xFB, 0xC8, 0xC8, 0xF7, 0x3C,
    0x8A, 0x86, 0x22, 0x12, 0xD1, 0xD5, 0x73, 0x41, 0x32, 0xEE, 0x29, 0x35,
    0x8E, 0xF5, 0x9D, 0x7A, 0xAC, 0x25, 0x35, 0x51, 0xAC, 0x4B, 0x95, 0x81,
    0xF5, 0xCC, 0x53, 0xCE, 0x28, 0x87, 0x16, 0x79, 0xF8, 0x60, 0xD6, 0xA2,
    0xCE, 0xC9, 0x0C, 0xF3, 0x76, 0x9C, 0xB8, 0xF0, 0xA9, 0xB3, 0x9F, 0x08,
    0xA8, 0xDB, 0x19, 0xC9, 0xC3, 0x4D, 0x9E, 0x1F, 0x0C, 0x4E, 0x59, 0xA2,
    0x78, 0xE1, 0xFF, 0x34, 0xFB, 0x14, 0x44, 0xB0, 0x3A, 0xB3, 0x1F, 0xD3,
    0x78, 0x02, 0x4D, 0x18, 0x9A, 0x6A, 0x81, 0x2C, 0xF2, 0xF2, 0x93, 0xB9,
    0x1C, 0x60, 0xD8, 0xE4, 0xDE, 0xEE, 0xE2, 0x49, 0xE1, 0x0C, 0xD5, 0x9C,
    0x77, 0x1E, 0x3E, 0xC0, 0x9E, 0x86, 0x01, 0xA9, 0x50, 0xDE, 0x79, 0x75,
    0xAB, 0xC4, 0x6A, 0x72, 0x40, 0x48, 0xD0, 0x38, 0x70, 0x12, 0xBE, 0xEA,
    0x2D, 0x81, 0x40, 0x8C, 0xB7, 0x76, 0x49, 0xE8, 0xAD, 0x04, 0x2B, 0x17,
    0xC4, 0x06, 0x66, 0x75, 0x91, 0x84, 0x25, 0x66, 0xF8, 0xBE, 0xA0, 0xB5,
    0xF3, 0x5C, 0xCC, 0x6B, 0x94, 0xAE, 0x35, 0xA5, 0xAA, 0x87, 0x7A, 0xC9,
    0xF6, 0xA8, 0x03, 0x91, 0x5F, 0x9E, 0x3B, 0xCC, 0x1F, 0xBE, 0x20, 0xBB,
    0x97, 0xEF, 0xCF, 0xFF, 0x16, 0x4F, 0x95, 0x90, 0xA6, 0xE1, 0x1A, 0x50,
    0xCD, 0x89, 0xD5, 0x6E, 0x2B, 0xB0, 0x26, 0x68, 0x63, 0xF2, 0x5F, 0x56,
    0x9B, 0x36, 0x8C, 0x8E, 0x7A, 0xBE, 0x90, 0x69, 0x40, 0xB8, 0x25, 0x35,
    0xBB, 0xD7, 0x47, 0x18, 0xC7, 0x40, 0x5A, 0x35, 0x10, 0x9F, 0x57, 0xA3,
    0xAE, 0xEC, 0xED, 0xE9, 0xB1, 0x7A, 0x33, 0xD0, 0xBA, 0xE5, 0x55, 0x63,
    0x55, 0x53, 0x97, 0x88, 0xCF, 0xF3, 0xC0, 0x5E, 0x3D, 0x21, 0xD6, 0xA0,
    0x87, 0x93, 0x38, 0x75, 0xF0, 0x16, 0x02, 0xE4, 0xE0, 0xCC, 0x80, 0xD9,
    0x7C, 0xC6, 0x88, 0x6C, 0x9C, 0x41, 0x9D, 0x82, 0x1B, 0x45, 0xF6, 0x3B,
    0xFA, 0x7B, 0xF0, 0x11, 0x4E, 0x15, 0xC1, 0xC4, 0xEB, 0x35, 0x07, 0xBD,
    0x9D, 0xDF, 0xF8, 0x9C, 0x75, 0xBE, 0x57, 0xE4, 0x18, 0xBD, 0xA6, 0x63,
    0xD3, 0x7F, 0xE7, 0xEF, 0x63, 0x1B, 0x42, 0x83, 0x2D, 0x07, 0x83, 0x7F,
    0x61, 0x0F, 0x94, 0x44, 0xF7, 0xCD, 0xBD, 0xF8, 0xCA, 0x02, 0xC8, 0x61,
    0xA8, 0xF9, 0x30, 0x0A, 0x37, 0x3B, 0xF0, 0x7F, 0xA9, 0xC5, 0x6C, 0xA2,
    0x0D, 0x57, 0x0E, 0xE1, 0x16, 0x0C, 0xEA, 0x95, 0x02, 0x6B, 0x5E, 0xA0,
    0x84, 0x53, 0x1D, 0xC8, 0x05, 0xDB, 0x85, 0x77, 0x5F, 0x4C, 0xC8, 0x92,
    0x17, 0x46, 0x58, 0x05, 0x8D, 0xFE, 0xBC, 0x82, 0xDA, 0xA1, 0x9E, 0x55,
    0xB0, 0xCD, 0xD5, 0x4F, 0xED, 0x1F, 0x87, 0x9D, 0x39, 0x55, 0x6F, 0xDD,
    0x26, 0xEF, 0xD1, 0x4E, 0xC4, 0x13, 0x68, 0xFE, 0xD5, 0x71, 0xFA, 0x1C,
    0xEA, 0x3A, 0x61, 0xD5, 0x8C, 0x9B, 0x1C, 0x0F, 0x5D, 0xC4, 0xCA, 0x2B,
    0x41, 0x0F, 0xD0, 0x65, 0xD8, 0xE0, 0x9B, 0x68, 0x00, 0x11, 0xB0, 0x68,
    0x80, 0xD2, 0x5B, 0x63, 0x4B, 0x5D, 0x4D, 0x95, 0x79, 0x7F, 0x88, 0x72,
    0x75, 0x7A, 0x02, 0xCE, 0x66, 0x1C, 0xF0, 0xFC, 0xD3, 0x1B, 0x6A, 0x00,
    0x8E, 0x1C, 0x9A, 0x19, 0x25, 0xEE, 0xD6, 0x87, 0x08, 0x9F, 0x8E, 0x93,
    0x4D, 0x1D, 0xA1, 0xD8, 0x81, 0x4D, 0x9A, 0x2B, 0xE5, 0xD2, 0xF5, 0xB6,
    0x5A, 0x32, 0x5C, 0xD1, 0xC1, 0xAF, 0xEA, 0x64, 0x1C, 0xB6, 0x33, 0xFD,
    0x57, 0xBD, 0xC1, 0x43, 0x48, 0xF0, 0xB8, 0x37, 0xF2, 0x7C, 0xBA, 0x5C,
    0xD0, 0x0C, 0x81, 0x72, 0x54, 0xF4, 0xFE, 0xAB, 0xBA, 0x84, 0x63, 0xA7,
    0x40, 0x14, 0x86, 0xD8, 0x37, 0x58, 0xDE, 0x36, 0xF1, 0x03, 0x6A, 0x0F,
    0xA1, 0x8F, 0xD4, 0x10, 0x2F, 0xEC, 0x83, 0x58, 0x9B, 0x0C, 0xC0, 0xA8,
    0xA4, 0xFE, 0x8F, 0x61, 0x06, 0xA2, 0x5D, 0xA0, 0x7A, 0xE9, 0xB9, 0xFF,
    0x81, 0x67, 0x37, 0x8A, 0x79, 0xB4, 0x56, 0x31, 0xCD, 0x5E, 0xAF, 0xE4,
    0x6F, 0xE0, 0xD9, 0x87, 0x59, 0xD4, 0xD4, 0xB4, 0x25, 0x7D, 0x9A, 0xEB,
    0xAA, 0xFE, 0xDF, 0x59, 0x53, 0xF5, 0x8B, 0xDC, 0x3A, 0x3C, 0xCE, 0x6D,
    0x0E, 0x97, 0x62, 0x21, 0x9D, 0x92, 0xC9, 0xE8, 0xF4, 0x9B, 0x3A, 0x6C,
    0x92, 0x53, 0xDA, 0x45, 0xB0, 0xE7, 0xEE, 0x9C, 0xEB, 0xD4, 0x68, 0x3F,
    0x4F, 0x43, 0x29, 0xCD, 0x12, 0xF7, 0x4D, 0x0E, 0x9A, 0xC6, 0xA8, 0xB1,
    0x46, 0x0F, 0x19, 0x1C, 0x3C, 0x87, 0x45, 0x2B, 0xC9, 0xDF, 0xAF, 0x46,
    0x3F, 0x88, 0xE8, 0x61, 0xC7, 0x18, 0x91, 0x97, 0xB1, 0x91, 0xF9, 0x70,
    0x4D, 0x60, 0x82, 0x1F, 0x8F, 0xF4, 0x8B, 0xC1, 0xFF, 0xF4, 0x27, 0xB3,
    0x08, 0x75, 0x9A, 0x51, 0x0D, 0x9B, 0x61, 0xFA, 0x90, 0x14, 0x8D, 0x26,
    0xC2, 0x37, 0x7E, 0x56, 0x91, 0x76, 0xA0, 0x25, 0xC0, 0x59, 0x43, 0x42,
    0x53, 0x0C, 0x32, 0x13, 0xFD, 0x42, 0xF7, 0xEF, 0xBA, 0x45, 0xB9, 0x48,
    0x11, 0xE7, 0xA8, 0xCF, 0x19, 0xB5, 0x5F, 0x8F, 0xA5, 0x32, 0x73, 0x2B,
    0x7C, 0x76, 0xAA, 0x10, 0xC0, 0x0C, 0x9F, 0x68, 0x71, 0xA5, 0x1C, 0x0C,
    0xFF, 0xFF, 0xFF, 0xFF, 0x1A, 0x0C, 0x18, 0x00, 0x03, 0xFF, 0x22, 0x0C,
    0xFF, 0xFF, 0xFF, 0xFF, 0x1A, 0x12, 0x08, 0x02, 0x25, 0x1C, 0x0C, 0xFF,
    0xFF, 0xFF, 0xFF, 0x1A, 0x12, 0x08, 0x06, 0x24, 0x16, 0x08, 0x1A, 0x25,
    0x21, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x1A, 0x12, 0x12, 0x08, 0x02, 0x25,
    0x16, 0x08, 0x1E, 0x24, 0x21, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x1A, 0x27,
    0x12, 0x08, 0x09, 0x24, 0x22, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x1A, 0x12,
    0x08, 0x07, 0x24, 0x1C,
};

/*
const uint8_t Table_00400648[256*4] =
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
};
*/

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

  return *(uint64_t *)(&Table_00400648[index]);
}

INLINE uint64_t DW_OP_deref_size(int Size, uint64_t Ptr) {
  int index = (Ptr - 0x400648) / 4;

#ifdef Unroll
  printf("S%d = *(uint32_t *)(&Table_00400648[S%d - 0x400648]);\n", StackPtr,
         StackPtr);
#endif

  return ((uint32_t *)Table_00400648)[index];
}

INLINE void DW_OP_swap(uint64_t &A, uint64_t &B) {
  uint64_t t = A;
  A = B;
  B = t;

#ifdef Unroll
  printf("STemp1 = S%d; S%d = S%d;S%d = STemp1;\n", StackPtr - 1, StackPtr - 1,
         StackPtr - 2, StackPtr - 2);
#endif
}

INLINE void DW_OP_rot(uint64_t &A, uint64_t &B, uint64_t &C) {
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

/*
INLINE uint64_t Stack[StackPtr -1]; //uint64_t Stack[44], int Ptr) {
#ifdef Unroll
  printf("S%d = S%d;\n", Ptr + 1, Ptr);
#endif
  return Stack[Ptr];
}
*/
/*
INLINE uint64_t DW_OP_pick(uint64_t Stack[44], uint64_t StackPtr, uint64_t Offset) {
#ifdef Unroll
  printf("S%d = S%d;\n", StackPtr, StackPtr - 1 - Offset);
#endif
  return Stack[StackPtr - 1 - Offset];
}
*/

uint64_t VM_Func(uint64_t Flag[4]) {
	uint64_t Stack[44];

	// The Stack Ptr
	uint64_t StackPtr = 2;

  // Part 1
  Stack[StackPtr] = Flag[0];
#ifdef Unroll
  printf("S%d = *(const uint64_t *)Flag;\n", StackPtr);
#endif

  StackPtr++;
_00400263:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);

  // Part 2  0x3232313131313131
  StackPtr = 3;
  // Stack[StackPtr] = DW_OP_deref(Stack[StackPtr]);
  Stack[StackPtr] = Flag[1];

#ifdef Unroll
  printf("S%d = *(const uint64_t *)(Flag + 8);\n", StackPtr);
#endif

  StackPtr++;
_00400269:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);

  // Part 3 //0x3333323232323232
  // Stack[StackPtr] = DW_OP_deref(Stack[StackPtr]);
  StackPtr = 4;
  Stack[StackPtr] = Flag[2];

#ifdef Unroll
  printf("S%d = *(const uint64_t *)(Flag + 16);\n", StackPtr);
#endif

  StackPtr++;
_0040026F:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);

_00400274:
  StackPtr--;
  // Part 4 0x7d5a333333333333
  // Stack[StackPtr] = DW_OP_deref(Stack[StackPtr]);
  StackPtr = 5;
  Stack[StackPtr] = Flag[3];

#ifdef Unroll
  printf("S%d = *(const uint64_t *)(Flag + 24);\n", StackPtr);
#endif

  StackPtr++;
_00400275:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);

  // Part 5 Last Byte (has to be ZERO !!!!)
  // Stack[StackPtr] = DW_OP_deref_size(1, Stack[StackPtr]);
  StackPtr = 5;
	Stack[StackPtr] = 0; *(const uint8_t *)(Flag + 32);

#ifdef Unroll
  printf("S%d = *(const uint8_t *)(Flag + 32);\n", StackPtr);
#endif
  StackPtr++;

_0040027B:
  StackPtr--;
  if (Stack[StackPtr] != 0)
    goto _004002C2; //// DW_OP_bra 0x00000044 (0x0040027E, 0x004002C2)
_0040027E:
  Stack[StackPtr] = Stack[StackPtr - 1 -  3];
  StackPtr++; // DW_OP_pick(S1)
_00400280:
  Stack[StackPtr] = Stack[StackPtr - 1 -  3];
  StackPtr++; // DW_OP_pick(S2)
_00400282:
  goto _004002CE; // DW_OP_skip 0x00000049 (0x004002CE)
_004002C2:
  Stack[StackPtr] = DW_OP_const8u(0x00000000004030B8);
  StackPtr++;
  //_004002CB: goto _004082CD; // DW_OP_skip 0x00007FFF (0x004082CD)
  return 0x4030B8;
_004002CE:
  Stack[StackPtr] = DW_OP_lit(00);
  StackPtr++;
_004002CF:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004002D0:
  Stack[StackPtr] = DW_OP_lit(00);
  StackPtr++;
_004002D1:
  Stack[StackPtr] = Stack[StackPtr - 1 -  5];
  StackPtr++; // DW_OP_pick(S3)
_004002D3:
  Stack[StackPtr] = Stack[StackPtr - 1 -  5];
  StackPtr++; // DW_OP_pick(S4)
_004002D5:
  goto _0040030B; // DW_OP_skip 0x00000033 (0x0040030B)
_0040030B:
  Stack[StackPtr] = DW_OP_lit(04);
  StackPtr++;
_0040030C:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_0040030D:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040030E:
  Stack[StackPtr] = DW_OP_const8u(0x00000000FFFFFFFF);
  StackPtr++;
_00400317:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400318:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400319:
  Stack[StackPtr] = DW_OP_const8u(0xFFFFFFFF00000000);
  StackPtr++;
_00400322:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400323:
  Stack[StackPtr] = DW_OP_const1u(0x20);
  StackPtr++;
_00400325:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400326:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400327:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400328:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400329:
  Stack[StackPtr] = DW_OP_const8u(0x00000000FFFFFFFF);
  StackPtr++;
_00400332:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400333:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400334:
  Stack[StackPtr] = DW_OP_const8u(0xFFFFFFFF00000000);
  StackPtr++;
_0040033D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040033E:
  Stack[StackPtr] = DW_OP_const1u(0x20);
  StackPtr++;
_00400340:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400341:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400342:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400343:
  Stack[StackPtr] = Stack[StackPtr - 1 -  4];
  StackPtr++; // DW_OP_pick(S10)
_00400345:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400346:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400347:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040034C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040034D:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040034E:
  Stack[StackPtr] = Stack[StackPtr - 1 -  3];
  StackPtr++; // DW_OP_pick(S10)
_00400350:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400351:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400352:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400353:
  Stack[StackPtr] = Stack[StackPtr - 1 -  4];
  StackPtr++; // DW_OP_pick(S10)
_00400355:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400356:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400357:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040035C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040035D:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040035E:
  Stack[StackPtr] = Stack[StackPtr - 1 -  3];
  StackPtr++; // DW_OP_pick(S11)
_00400360:
  Stack[StackPtr] = DW_OP_const1u(0xFF);
  StackPtr++;
_00400362:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400363:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_00400365:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400366:
  Stack[StackPtr] = DW_OP_const8u(0x00000000004006B4);
  StackPtr++;
_0040036F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400370:
  StackPtr--;
  Stack[StackPtr] = DW_OP_deref_size(4, Stack[StackPtr]);
  StackPtr++;
_00400372:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400373:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400378:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400379:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040037A:
  Stack[StackPtr] = Stack[StackPtr - 1 -  4];
  StackPtr++; // DW_OP_pick(S11)
_0040037C:
  Stack[StackPtr] = DW_OP_const1u(0x08);
  StackPtr++;
_0040037E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040037F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400380:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400381:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400382:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400383:
  Stack[StackPtr] = DW_OP_const1u(0x20);
  StackPtr++;
_00400385:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400386:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400387:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400388:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400389:
  Stack[StackPtr] = DW_OP_const1u(0x20);
  StackPtr++;
_0040038B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040038C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040038D:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040038E:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_0040038F:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400390:
  StackPtr--; // DW_OP_drop(&StackPtr);
_00400391:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400392:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400393:
  StackPtr--; // DW_OP_drop(&StackPtr);
_00400394:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400395:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400396:
  Stack[StackPtr] = DW_OP_const1u(0x01);
  StackPtr++;
_00400398:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400399:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040039A:
  StackPtr--;
  if (Stack[StackPtr] != 0)
    goto _0040030C; //// DW_OP_bra 0xFFFFFF6F (0x0040039D, 0x0040030C)
_0040039D:
  StackPtr--; // DW_OP_drop(&StackPtr);
_0040039E:
  Stack[StackPtr] = Stack[StackPtr - 1 -  2];
  StackPtr++; // DW_OP_pick(S8)
_004003A0:
  StackPtr--;
  if (Stack[StackPtr] != 0)
    goto _004003A6; //// DW_OP_bra 0x00000003 (0x004003A3, 0x004003A6)
_004003A3:
  goto _004002D8; // DW_OP_skip 0xFFFFFF32 (0x004002D8)
_004002D8:
  Stack[StackPtr] = Stack[StackPtr - 1 -  4];
  StackPtr++; // DW_OP_pick(S6)
_004002DA:
  Stack[StackPtr] = Stack[StackPtr - 1 -  4];
  StackPtr++; // DW_OP_pick(S7)
_004002DC:
  goto _004003A9; // DW_OP_skip 0x000000CA (0x004003A9)
_004003A6:
  goto _004002ED; // DW_OP_skip 0xFFFFFF44 (0x004002ED)
_004002ED:
  Stack[StackPtr] = Stack[StackPtr - 1 -  7];
  StackPtr++; // DW_OP_pick(S3)
_004002EF:
  Stack[StackPtr] = Stack[StackPtr - 1 -  7];
  StackPtr++; // DW_OP_pick(S4)
_004002F1:
  goto _004003A9; // DW_OP_skip 0x000000B5 (0x004003A9)
_004003A9:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004003AA:
  Stack[StackPtr] = DW_OP_lit(00);
  StackPtr++;
_004003AB:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004003AC:
  Stack[StackPtr] = Stack[StackPtr - 1 -  2];
  StackPtr++; // DW_OP_pick(S11)
_004003AE:
  Stack[StackPtr] = Stack[StackPtr - 1 -  5];
  StackPtr++; // DW_OP_pick(S9)
_004003B0:
  Stack[StackPtr] = Stack[StackPtr - 1 -  5];
  StackPtr++; // DW_OP_pick(S10)
_004003B2:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004003B3:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004003B4:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004003B5:
  Stack[StackPtr] = DW_OP_lit(00);
  StackPtr++;
_004003B6:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004003B7:
  Stack[StackPtr] = Stack[StackPtr - 1 -  2];
  StackPtr++; // DW_OP_pick(S15)
_004003B9:
  goto _0040055C; // DW_OP_skip 0x000001A0 (0x0040055C)
_0040055C:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_0040055D:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040055E:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040055F:
  Stack[StackPtr] = DW_OP_const8u(0x00000000FFFFFFFF);
  StackPtr++;
_00400568:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400569:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040056A:
  Stack[StackPtr] = DW_OP_const8u(0xFFFFFFFF00000000);
  StackPtr++;
_00400573:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400574:
  Stack[StackPtr] = DW_OP_const1u(0x20);
  StackPtr++;
_00400576:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400577:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400578:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400579:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040057A:
  Stack[StackPtr] = DW_OP_const8u(0x00000000FFFFFFFF);
  StackPtr++;
_00400583:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400584:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400585:
  Stack[StackPtr] = DW_OP_const8u(0xFFFFFFFF00000000);
  StackPtr++;
_0040058E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040058F:
  Stack[StackPtr] = DW_OP_const1u(0x20);
  StackPtr++;
_00400591:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400592:
  Stack[StackPtr] = Stack[StackPtr - 1 -  4];
  StackPtr++; // DW_OP_pick(S16)
_00400594:
  Stack[StackPtr] = DW_OP_lit(04);
  StackPtr++;
_00400595:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_mul(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400596:
  Stack[StackPtr] = DW_OP_const8u(0x0000000000400678);
  StackPtr++;
_0040059F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004005A0:
  StackPtr--;
  Stack[StackPtr] = DW_OP_deref_size(4, Stack[StackPtr]);
  StackPtr++;
_004005A2:
  Stack[StackPtr] = Stack[StackPtr - 1 -  4];
  StackPtr++; // DW_OP_pick(S17)
_004005A4:
  StackPtr -= 2;
	Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
#ifdef Unroll
	//printf("printf(\"%%d %%llX\\n\", %d, S%d); // _004005A4 %08llX\n", StackPtr, StackPtr, Stack[StackPtr]);
#endif
  StackPtr++;
_004005A5:
  Stack[StackPtr] = Stack[StackPtr - 1 -  3];
  StackPtr++; // DW_OP_pick(S18)
_004005A7:
  Stack[StackPtr] = DW_OP_const4u(0x45786532);
  StackPtr++;
_004005AC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004005AD:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004005B2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004005B3:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004005B4:
  Stack[StackPtr] = Stack[StackPtr - 1 -  4];
  StackPtr++; // DW_OP_pick(S19)
_004005B6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004005B7:
  Stack[StackPtr] = Stack[StackPtr - 1 -  3];
  StackPtr++; // DW_OP_pick(S20)
_004005B9:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004005BA:
  Stack[StackPtr] = DW_OP_const1u(0x04);
  StackPtr++;
_004005BC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004005BD:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004005BE:
  Stack[StackPtr] = DW_OP_const1u(0x1C);
  StackPtr++;
_004005C0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004005C1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004005C2:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004005C7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004005C8:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004005C9:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004005CA:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004005CB:
  Stack[StackPtr] = Stack[StackPtr - 1 -  4];
  StackPtr++; // DW_OP_pick(S21)
_004005CD:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004005CE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004005CF:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004005D4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004005D5:
  Stack[StackPtr] = Stack[StackPtr - 1 -  3];
  StackPtr++; // DW_OP_pick(S22)
_004005D7:
  Stack[StackPtr] = DW_OP_const4u(0x80000000);
  StackPtr++;
_004005DC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004005DD:
  StackPtr--;

	// Fix me	(Extra check!!!!)
#ifdef Unroll
	printf("if (S%d != 0) S%d = 0x84653217; else S%d = 0x17246549;\n", StackPtr, StackPtr, StackPtr);
	// Store old StackPtr
	int OldStackPtr = StackPtr;
#endif 
  if (Stack[StackPtr] != 0)
    goto _004005E8; //// DW_OP_bra 0x00000008 (0x004005E0, 0x004005E8)
_004005E0:
  Stack[StackPtr] = DW_OP_const4u(0x17246549, false);
  StackPtr++;
_004005E5:
  goto _004005ED; // DW_OP_skip 0x00000005 (0x004005ED)
_004005E8:
  Stack[StackPtr] = DW_OP_const4u(0x84653217, false);
  StackPtr++;
_004005ED:
  goto _00400AB5; // DW_OP_skip 0x000004C5 (0x00400AB5)

_00400AB5:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_00400ABA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400ABB:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400AC0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400AC1:
  Stack[StackPtr] = DW_OP_const4u(0xFF030018);
  StackPtr++;
_00400AC6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400AC7:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400ACC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400ACD:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400ACE:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_00400AD0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400AD1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400AD2:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400AD7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400AD8:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400AD9:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400ADB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400ADC:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400ADD:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400ADF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400AE0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400AE1:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400AE6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400AE7:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400AE8:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400AE9:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_00400AEB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400AEC:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400AED:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_00400AEF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400AF0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400AF1:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400AF6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400AF7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400AF8:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400AF9:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00400AFB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400AFC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400AFD:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400B02:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B03:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400B04:
  Stack[StackPtr] = DW_OP_const1u(0x07);
  StackPtr++;
_00400B06:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B07:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B08:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400B0D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B0E:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400B0F:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400B10:
  Stack[StackPtr] = DW_OP_const1u(0x05);
  StackPtr++;
_00400B12:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B13:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400B14:
  Stack[StackPtr] = DW_OP_const1u(0x1B);
  StackPtr++;
_00400B16:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B17:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B18:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400B1D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B1E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B1F:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400B24:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B25:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400B26:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400B27:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00400B29:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B2A:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400B2B:
  Stack[StackPtr] = DW_OP_const1u(0x17);
  StackPtr++;
_00400B2D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B2E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B2F:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400B34:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B35:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B36:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400B37:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00400B39:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B3A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B3B:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400B3C:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400B3D:
  Stack[StackPtr] = DW_OP_const1u(0x05);
  StackPtr++;
_00400B3F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B40:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400B41:
  Stack[StackPtr] = DW_OP_const1u(0x1B);
  StackPtr++;
_00400B43:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B44:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B45:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400B4A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B4B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B4C:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400B51:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B52:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400B53:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400B54:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400B56:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B57:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400B58:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400B5A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B5B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B5C:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400B61:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B62:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B63:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400B68:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B69:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400B6A:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00400B6C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B6D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B6E:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400B6F:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400B70:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_00400B72:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B73:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400B74:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_00400B76:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B77:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B78:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400B7D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B7E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B7F:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400B84:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B85:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400B86:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00400B88:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B89:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B8A:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400B8F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B90:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400B91:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400B92:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00400B94:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B95:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400B96:
  Stack[StackPtr] = DW_OP_const1u(0x17);
  StackPtr++;
_00400B98:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B99:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400B9A:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400B9F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BA0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BA1:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400BA2:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00400BA4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BA5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BA6:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400BA7:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00400BA9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BAA:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400BAB:
  Stack[StackPtr] = DW_OP_const1u(0x1D);
  StackPtr++;
_00400BAD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BAE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BAF:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400BB4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BB5:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400BB6:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400BB8:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BB9:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400BBA:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400BBC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BBD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BBE:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400BC3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BC4:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400BC5:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00400BC7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BC8:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BC9:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400BCE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BCF:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400BD0:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00400BD2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BD3:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400BD4:
  Stack[StackPtr] = DW_OP_const1u(0x1D);
  StackPtr++;
_00400BD6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BD7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BD8:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400BDD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BDE:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400BDF:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400BE1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BE2:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400BE3:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400BE5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BE6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BE7:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400BEC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BED:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400BEE:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00400BF0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BF1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BF2:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400BF3:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400BF4:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00400BF6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BF7:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400BF8:
  Stack[StackPtr] = DW_OP_const1u(0x17);
  StackPtr++;
_00400BFA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BFB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400BFC:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400C01:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C02:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C03:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400C04:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400C05:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400C07:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C08:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400C09:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400C0B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C0C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C0D:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400C12:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C13:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C14:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400C19:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C1A:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400C1B:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400C1C:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400C1E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C1F:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400C20:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400C22:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C23:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C24:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400C29:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C2A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C2B:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400C30:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C31:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_00400C36:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C37:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400C3C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C3D:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400C3E:
  Stack[StackPtr] = DW_OP_const1u(0x0A);
  StackPtr++;
_00400C40:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C41:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C42:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400C47:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C48:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400C49:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00400C4B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C4C:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400C4D:
  Stack[StackPtr] = DW_OP_const1u(0x1D);
  StackPtr++;
_00400C4F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C50:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C51:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400C56:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C57:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400C58:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400C59:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400C5B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C5C:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400C5D:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400C5F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C60:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C61:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400C66:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C67:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C68:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400C6D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C6E:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400C6F:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400C70:
  Stack[StackPtr] = DW_OP_const1u(0x05);
  StackPtr++;
_00400C72:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C73:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400C74:
  Stack[StackPtr] = DW_OP_const1u(0x1B);
  StackPtr++;
_00400C76:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C77:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C78:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400C7D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C7E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C7F:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400C84:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C85:
  Stack[StackPtr] = DW_OP_const4u(0xFF030018);
  StackPtr++;
_00400C8A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C8B:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400C90:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C91:
  Stack[StackPtr] = DW_OP_const4u(0xD2105517);
  StackPtr++;
_00400C96:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C97:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400C98:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400C99:
  Stack[StackPtr] = DW_OP_const1u(0x05);
  StackPtr++;
_00400C9B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400C9C:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400C9D:
  Stack[StackPtr] = DW_OP_const1u(0x1B);
  StackPtr++;
_00400C9F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CA0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CA1:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400CA6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CA7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CA8:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400CAD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CAE:
  Stack[StackPtr] = DW_OP_const4u(0xD2105517);
  StackPtr++;
_00400CB3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CB4:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400CB5:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400CB7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CB8:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400CB9:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400CBB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CBC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CBD:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400CC2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CC3:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_00400CC8:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CC9:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400CCE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CCF:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400CD0:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400CD2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CD3:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400CD4:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400CD6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CD7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CD8:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400CDD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CDE:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400CDF:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400CE1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CE2:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400CE3:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400CE5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CE6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CE7:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400CEC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CED:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400CEE:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_00400CF0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CF1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CF2:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400CF7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CF8:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400CF9:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400CFA:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400CFC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400CFD:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400CFE:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400D00:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D01:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D02:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400D07:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D08:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D09:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400D0E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D0F:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_00400D14:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D15:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400D1A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D1B:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400D1C:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00400D1E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D1F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D20:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400D25:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D26:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400D27:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_00400D29:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D2A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D2B:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400D30:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D31:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400D32:
  Stack[StackPtr] = DW_OP_const1u(0x07);
  StackPtr++;
_00400D34:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D35:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D36:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400D3B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D3C:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400D3D:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00400D3F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D40:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D41:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_00400D46:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D47:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400D4C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D4D:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400D4E:
  Stack[StackPtr] = DW_OP_const1u(0x0A);
  StackPtr++;
_00400D50:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D51:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D52:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400D57:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D58:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_00400D5D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D5E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400D63:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D64:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400D65:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400D66:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_00400D68:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D69:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400D6A:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_00400D6C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D6D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D6E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400D73:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D74:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D75:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400D7A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D7B:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400D7C:
  Stack[StackPtr] = DW_OP_lit(06);
  StackPtr++;
_00400D7D:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400D7E:
  Stack[StackPtr] = DW_OP_const4u(0xD2105517);
  StackPtr++;
_00400D83:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D84:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400D85:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400D86:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00400D88:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D89:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400D8A:
  Stack[StackPtr] = DW_OP_const1u(0x17);
  StackPtr++;
_00400D8C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D8D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D8E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400D93:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D94:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D95:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400D96:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400D97:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_00400D99:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D9A:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400D9B:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_00400D9D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D9E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400D9F:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400DA4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DA5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DA6:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400DAB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DAC:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400DAD:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400DAE:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400DB0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DB1:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400DB2:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400DB4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DB5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DB6:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400DBB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DBC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DBD:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400DC2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DC3:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400DC4:
  Stack[StackPtr] = DW_OP_const1u(0x0A);
  StackPtr++;
_00400DC6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DC7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DC8:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400DCD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DCE:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400DCF:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00400DD1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DD2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DD3:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400DD4:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00400DD6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DD7:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400DD8:
  Stack[StackPtr] = DW_OP_const1u(0x1D);
  StackPtr++;
_00400DDA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DDB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DDC:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400DE1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DE2:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400DE3:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400DE5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DE6:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400DE7:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400DE9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DEA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DEB:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400DF0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DF1:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_00400DF6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DF7:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400DFC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400DFD:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400DFE:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400DFF:
  Stack[StackPtr] = DW_OP_const1u(0x05);
  StackPtr++;
_00400E01:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E02:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400E03:
  Stack[StackPtr] = DW_OP_const1u(0x1B);
  StackPtr++;
_00400E05:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E06:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E07:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400E0C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E0D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E0E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400E13:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E14:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_00400E19:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E1A:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400E1F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E20:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400E21:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400E22:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400E24:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E25:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400E26:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400E28:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E29:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E2A:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400E2F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E30:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E31:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400E36:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E37:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_00400E3C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E3D:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400E42:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E43:
  Stack[StackPtr] = DW_OP_const4u(0xFF030018);
  StackPtr++;
_00400E48:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E49:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400E4E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E4F:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400E50:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00400E52:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E53:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E54:
  Stack[StackPtr] = DW_OP_const4u(0xFF030018);
  StackPtr++;
_00400E59:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E5A:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400E5F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E60:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400E61:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00400E63:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E64:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400E65:
  Stack[StackPtr] = DW_OP_const1u(0x1D);
  StackPtr++;
_00400E67:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E68:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E69:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400E6E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E6F:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400E70:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00400E72:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E73:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E74:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400E75:
  Stack[StackPtr] = DW_OP_const1u(0x0A);
  StackPtr++;
_00400E77:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E78:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E79:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400E7E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E7F:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400E80:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00400E82:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E83:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E84:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400E85:
  Stack[StackPtr] = DW_OP_lit(01);
  StackPtr++;
_00400E86:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E87:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400E88:
  StackPtr--;
  if (Stack[StackPtr] != 0)
    goto _00400D7D; //// DW_OP_bra 0xFFFFFEF2 (0x00400E8B, 0x00400D7D)
_00400E8B:
  StackPtr--; // DW_OP_drop(&StackPtr);
_00400E8C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E8D:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400E8E:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_00400E90:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E91:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E92:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400E97:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E98:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_00400E9D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400E9E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400EA3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EA4:
  Stack[StackPtr] = DW_OP_const4u(0xFF030018);
  StackPtr++;
_00400EA9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EAA:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400EAF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EB0:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400EB1:
  Stack[StackPtr] = DW_OP_const1u(0x07);
  StackPtr++;
_00400EB3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EB4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EB5:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400EBA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EBB:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400EBC:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400EBD:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400EBF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EC0:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400EC1:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400EC3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EC4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EC5:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400ECA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400ECB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400ECC:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400ED1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400ED2:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400ED3:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400ED5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400ED6:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400ED7:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400ED9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EDA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EDB:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400EE0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EE1:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_00400EE6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EE7:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400EEC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EED:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400EEE:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400EEF:
  Stack[StackPtr] = DW_OP_const1u(0x05);
  StackPtr++;
_00400EF1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EF2:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400EF3:
  Stack[StackPtr] = DW_OP_const1u(0x1B);
  StackPtr++;
_00400EF5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EF6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EF7:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400EFC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EFD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400EFE:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400F03:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F04:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400F05:
  Stack[StackPtr] = DW_OP_const1u(0x07);
  StackPtr++;
_00400F07:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F08:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F09:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400F0E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F0F:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400F10:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400F11:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400F13:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F14:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400F15:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400F17:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F18:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F19:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400F1E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F1F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F20:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400F25:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F26:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400F27:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400F28:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400F2A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F2B:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400F2C:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400F2E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F2F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F30:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400F35:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F36:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F37:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400F3C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F3D:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400F3E:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400F40:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F41:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400F42:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400F44:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F45:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F46:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400F4B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F4C:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400F4D:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400F4E:
  Stack[StackPtr] = DW_OP_const1u(0x05);
  StackPtr++;
_00400F50:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F51:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400F52:
  Stack[StackPtr] = DW_OP_const1u(0x1B);
  StackPtr++;
_00400F54:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F55:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F56:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400F5B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F5C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F5D:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400F62:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F63:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400F64:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00400F66:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F67:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400F68:
  Stack[StackPtr] = DW_OP_const1u(0x1D);
  StackPtr++;
_00400F6A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F6B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F6C:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400F71:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F72:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400F73:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400F74:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400F76:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F77:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400F78:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400F7A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F7B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F7C:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400F81:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F82:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F83:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400F88:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F89:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400F8A:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00400F8C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F8D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F8E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400F93:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F94:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400F95:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00400F97:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F98:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F99:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400F9A:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400F9C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400F9D:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400F9E:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400FA0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FA1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FA2:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400FA7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FA8:
  Stack[StackPtr] = DW_OP_const4u(0xD2105517);
  StackPtr++;
_00400FAD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FAE:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400FAF:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400FB0:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00400FB2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FB3:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400FB4:
  Stack[StackPtr] = DW_OP_const1u(0x17);
  StackPtr++;
_00400FB6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FB7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FB8:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400FBD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FBE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FBF:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400FC0:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00400FC2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FC3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FC4:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400FC9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FCA:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400FCB:
  Stack[StackPtr] = DW_OP_const1u(0x0A);
  StackPtr++;
_00400FCD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FCE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FCF:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400FD4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FD5:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400FD6:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400FD7:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400FD9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FDA:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400FDB:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400FDD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FDE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FDF:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400FE4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FE5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FE6:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400FEB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FEC:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400FED:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00400FEF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FF0:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400FF1:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00400FF3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FF4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FF5:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400FFA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400FFB:
  Stack[StackPtr] = DW_OP_const4u(0xFF030018);
  StackPtr++;
_00401000:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401001:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401006:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401007:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401008:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401009:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_0040100B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040100C:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040100D:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_0040100F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401010:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401011:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401016:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401017:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401018:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040101D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040101E:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_00401023:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401024:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401029:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040102A:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040102B:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_0040102D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040102E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040102F:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401030:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401031:
  Stack[StackPtr] = DW_OP_const1u(0x05);
  StackPtr++;
_00401033:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401034:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401035:
  Stack[StackPtr] = DW_OP_const1u(0x1B);
  StackPtr++;
_00401037:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401038:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401039:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040103E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040103F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401040:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401045:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401046:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401047:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401048:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_0040104A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040104B:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040104C:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_0040104E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040104F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401050:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401055:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401056:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401057:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401058:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401059:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_0040105B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040105C:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040105D:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_0040105F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401060:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401061:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401066:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401067:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401068:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401069:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_0040106B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040106C:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040106D:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_0040106F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401070:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401071:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401076:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401077:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401078:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401079:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_0040107B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040107C:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040107D:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_0040107F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401080:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401081:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401086:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401087:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401088:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040108D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040108E:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040108F:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00401091:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401092:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401093:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401094:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_00401096:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401097:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401098:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040109D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040109E:
  Stack[StackPtr] = DW_OP_const4u(0xFF030018);
  StackPtr++;
_004010A3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010A4:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004010A9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010AA:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004010AB:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_004010AD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010AE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010AF:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004010B4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010B5:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004010B6:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004010B7:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_004010B9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010BA:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004010BB:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_004010BD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010BE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010BF:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004010C4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010C5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010C6:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004010CB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010CC:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004010CD:
  Stack[StackPtr] = DW_OP_const1u(0x0A);
  StackPtr++;
_004010CF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010D0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010D1:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004010D6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010D7:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004010D8:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_004010DA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010DB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010DC:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004010E1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010E2:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004010E3:
  Stack[StackPtr] = DW_OP_const1u(0x07);
  StackPtr++;
_004010E5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010E6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010E7:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004010EC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010ED:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004010EE:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004010EF:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_004010F1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010F2:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004010F3:
  Stack[StackPtr] = DW_OP_const1u(0x17);
  StackPtr++;
_004010F5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010F6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010F7:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004010FC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010FD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004010FE:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004010FF:
  Stack[StackPtr] = DW_OP_const1u(0x0A);
  StackPtr++;
_00401101:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401102:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401103:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401108:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401109:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040110A:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_0040110C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040110D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040110E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401113:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401114:
  Stack[StackPtr] = DW_OP_const4u(0xD2105517);
  StackPtr++;
_00401119:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040111A:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040111B:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040111C:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_0040111E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040111F:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401120:
  Stack[StackPtr] = DW_OP_const1u(0x17);
  StackPtr++;
_00401122:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401123:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401124:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401129:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040112A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040112B:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040112C:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040112D:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_0040112F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401130:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401131:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00401133:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401134:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401135:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040113A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040113B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040113C:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401141:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401142:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_00401147:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401148:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040114D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040114E:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040114F:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00401151:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401152:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401153:
  Stack[StackPtr] = DW_OP_const1u(0x1D);
  StackPtr++;
_00401155:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401156:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401157:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040115C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040115D:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040115E:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040115F:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00401161:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401162:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401163:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00401165:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401166:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401167:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040116C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040116D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040116E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401173:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401174:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401175:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00401177:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401178:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401179:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_0040117B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040117C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040117D:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401182:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401183:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401184:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401185:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00401187:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401188:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401189:
  Stack[StackPtr] = DW_OP_const1u(0x17);
  StackPtr++;
_0040118B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040118C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040118D:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401192:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401193:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401194:
  Stack[StackPtr] = DW_OP_const4u(0xD2105517);
  StackPtr++;
_00401199:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040119A:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040119B:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_0040119D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040119E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040119F:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004011A0:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_004011A2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011A3:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004011A4:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_004011A6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011A7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011A8:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004011AD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011AE:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004011AF:
  Stack[StackPtr] = DW_OP_const1u(0x07);
  StackPtr++;
_004011B1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011B2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011B3:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004011B8:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011B9:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004011BA:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004011BB:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_004011BD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011BE:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004011BF:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_004011C1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011C2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011C3:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004011C8:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011C9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011CA:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004011CF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011D0:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004011D1:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004011D2:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_004011D4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011D5:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004011D6:
  Stack[StackPtr] = DW_OP_const1u(0x17);
  StackPtr++;
_004011D8:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011D9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011DA:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004011DF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011E0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011E1:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004011E2:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004011E3:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_004011E5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011E6:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004011E7:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_004011E9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011EA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011EB:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004011F0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011F1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011F2:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004011F7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011F8:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004011F9:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_004011FB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011FC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004011FD:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401202:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401203:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401204:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00401206:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401207:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401208:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401209:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_0040120B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040120C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040120D:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040120E:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00401210:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401211:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401212:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401213:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401214:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00401216:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401217:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401218:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_0040121A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040121B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040121C:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401221:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401222:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401223:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401228:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401229:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040122A:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_0040122C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040122D:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040122E:
  Stack[StackPtr] = DW_OP_const1u(0x1D);
  StackPtr++;
_00401230:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401231:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401232:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401237:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401238:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401239:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_0040123B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040123C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040123D:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040123E:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00401240:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401241:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401242:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00401244:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401245:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401246:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040124B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040124C:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040124D:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_0040124F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401250:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401251:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401256:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401257:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401258:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401259:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_0040125B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040125C:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040125D:
  Stack[StackPtr] = DW_OP_const1u(0x17);
  StackPtr++;
_0040125F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401260:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401261:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401266:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401267:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401268:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_0040126D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040126E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401273:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401274:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401275:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401276:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_00401278:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401279:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040127A:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_0040127C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040127D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040127E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401283:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401284:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401285:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040128A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040128B:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040128C:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_0040128E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040128F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401290:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401295:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401296:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401297:
  Stack[StackPtr] = DW_OP_const1u(0x0A);
  StackPtr++;
_00401299:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040129A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040129B:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004012A0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012A1:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004012A2:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004012A3:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_004012A5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012A6:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004012A7:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_004012A9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012AA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012AB:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004012B0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012B1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012B2:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004012B3:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_004012B5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012B6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012B7:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004012BC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012BD:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004012BE:
  Stack[StackPtr] = DW_OP_const1u(0x07);
  StackPtr++;
_004012C0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012C1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012C2:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004012C7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012C8:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004012C9:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_004012CB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012CC:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004012CD:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_004012CF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012D0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012D1:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004012D6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012D7:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004012D8:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_004012DA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012DB:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004012DC:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_004012DE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012DF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012E0:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004012E5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012E6:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004012E7:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004012E8:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_004012EA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012EB:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004012EC:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_004012EE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012EF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012F0:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004012F5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012F6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012F7:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004012FC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004012FD:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004012FE:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004012FF:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00401301:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401302:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401303:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00401305:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401306:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401307:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040130C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040130D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040130E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401313:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401314:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401315:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401316:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00401318:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401319:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040131A:
  Stack[StackPtr] = DW_OP_const1u(0x17);
  StackPtr++;
_0040131C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040131D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040131E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401323:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401324:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401325:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401326:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401327:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00401329:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040132A:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040132B:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_0040132D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040132E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040132F:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401334:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401335:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401336:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040133B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040133C:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040133D:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_0040133F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401340:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401341:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401342:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00401344:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401345:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401346:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040134B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040134C:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040134D:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_0040134F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401350:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401351:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401352:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00401354:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401355:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401356:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401357:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00401359:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040135A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040135B:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401360:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401361:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401362:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401363:
  Stack[StackPtr] = DW_OP_const1u(0x05);
  StackPtr++;
_00401365:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401366:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401367:
  Stack[StackPtr] = DW_OP_const1u(0x1B);
  StackPtr++;
_00401369:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040136A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040136B:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401370:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401371:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401372:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401377:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401378:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401379:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_0040137B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040137C:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040137D:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_0040137F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401380:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401381:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401386:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401387:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401388:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_0040138A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040138B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040138C:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040138D:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_0040138F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401390:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401391:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401396:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401397:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401398:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401399:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_0040139B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040139C:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040139D:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_0040139F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013A0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013A1:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004013A6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013A7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013A8:
  Stack[StackPtr] = DW_OP_const4u(0xD2105517);
  StackPtr++;
_004013AD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013AE:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004013AF:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_004013B1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013B2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013B3:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004013B4:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_004013B6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013B7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013B8:
  Stack[StackPtr] = DW_OP_const4u(0xFF030018);
  StackPtr++;
_004013BD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013BE:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004013C3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013C4:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004013C5:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004013C6:
  Stack[StackPtr] = DW_OP_const1u(0x05);
  StackPtr++;
_004013C8:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013C9:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004013CA:
  Stack[StackPtr] = DW_OP_const1u(0x1B);
  StackPtr++;
_004013CC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013CD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013CE:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004013D3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013D4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013D5:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004013DA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013DB:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004013DC:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_004013DE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013DF:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004013E0:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_004013E2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013E3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013E4:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004013E9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013EA:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004013EB:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_004013ED:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013EE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013EF:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004013F4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013F5:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004013F6:
  Stack[StackPtr] = DW_OP_const1u(0x0A);
  StackPtr++;
_004013F8:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013F9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004013FA:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004013FF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401400:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401401:
  Stack[StackPtr] = DW_OP_const1u(0x0A);
  StackPtr++;
_00401403:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401404:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401405:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040140A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040140B:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_00401410:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401411:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401416:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401417:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401418:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401419:
  Stack[StackPtr] = DW_OP_const1u(0x05);
  StackPtr++;
_0040141B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040141C:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040141D:
  Stack[StackPtr] = DW_OP_const1u(0x1B);
  StackPtr++;
_0040141F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401420:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401421:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401426:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401427:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401428:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040142D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040142E:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040142F:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00401431:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401432:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401433:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00401435:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401436:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401437:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040143C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040143D:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040143E:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040143F:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_00401441:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401442:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401443:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_00401445:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401446:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401447:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040144C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040144D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040144E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401453:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401454:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401455:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401456:
  Stack[StackPtr] = DW_OP_const1u(0x05);
  StackPtr++;
_00401458:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401459:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040145A:
  Stack[StackPtr] = DW_OP_const1u(0x1B);
  StackPtr++;
_0040145C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040145D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040145E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401463:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401464:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401465:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040146A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040146B:
  Stack[StackPtr] = DW_OP_const4u(0xD2105517);
  StackPtr++;
_00401470:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401471:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401472:
  Stack[StackPtr] = DW_OP_const1u(0x07);
  StackPtr++;
_00401474:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401475:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401476:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040147B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040147C:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040147D:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_0040147F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401480:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401481:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00401483:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401484:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401485:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040148A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040148B:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040148C:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040148D:
  Stack[StackPtr] = DW_OP_const1u(0x05);
  StackPtr++;
_0040148F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401490:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401491:
  Stack[StackPtr] = DW_OP_const1u(0x1B);
  StackPtr++;
_00401493:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401494:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401495:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040149A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040149B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040149C:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004014A1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014A2:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004014A3:
  Stack[StackPtr] = DW_OP_const1u(0x07);
  StackPtr++;
_004014A5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014A6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014A7:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004014AC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014AD:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004014AE:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_004014B0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014B1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014B2:
  Stack[StackPtr] = DW_OP_const4u(0xD2105517);
  StackPtr++;
_004014B7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014B8:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004014B9:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_004014BB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014BC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014BD:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004014BE:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004014BF:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_004014C1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014C2:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004014C3:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_004014C5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014C6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014C7:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004014CC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014CD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014CE:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004014D3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014D4:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004014D5:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_004014D7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014D8:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004014D9:
  Stack[StackPtr] = DW_OP_const1u(0x1D);
  StackPtr++;
_004014DB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014DC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014DD:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004014E2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014E3:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004014E4:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004014E5:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_004014E7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014E8:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004014E9:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_004014EB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014EC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014ED:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004014F2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014F3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014F4:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004014F9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014FA:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004014FB:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004014FC:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_004014FE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004014FF:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401500:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00401502:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401503:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401504:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401509:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040150A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040150B:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401510:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401511:
  Stack[StackPtr] = DW_OP_const4u(0xD2105517);
  StackPtr++;
_00401516:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401517:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401518:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401519:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_0040151B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040151C:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040151D:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_0040151F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401520:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401521:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401526:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401527:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401528:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_0040152D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040152E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401533:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401534:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401535:
  Stack[StackPtr] = DW_OP_const1u(0x0A);
  StackPtr++;
_00401537:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401538:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401539:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040153E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040153F:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401540:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00401542:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401543:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401544:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401545:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401546:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00401548:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401549:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040154A:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_0040154C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040154D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040154E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401553:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401554:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401555:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040155A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040155B:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040155C:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_0040155E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040155F:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401560:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00401562:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401563:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401564:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401569:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040156A:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040156B:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040156C:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_0040156E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040156F:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401570:
  Stack[StackPtr] = DW_OP_const1u(0x17);
  StackPtr++;
_00401572:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401573:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401574:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401579:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040157A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040157B:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040157C:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_0040157E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040157F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401580:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401585:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401586:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401587:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00401589:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040158A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040158B:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040158C:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040158D:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_0040158F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401590:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401591:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_00401593:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401594:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401595:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040159A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040159B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040159C:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004015A1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015A2:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004015A3:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004015A4:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_004015A6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015A7:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004015A8:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_004015AA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015AB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015AC:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004015B1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015B2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015B3:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004015B8:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015B9:
  Stack[StackPtr] = DW_OP_const4u(0xFF030018);
  StackPtr++;
_004015BE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015BF:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004015C4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015C5:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004015C6:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004015C7:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_004015C9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015CA:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004015CB:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_004015CD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015CE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015CF:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004015D4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015D5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015D6:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004015DB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015DC:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004015DD:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004015DE:
  Stack[StackPtr] = DW_OP_const1u(0x05);
  StackPtr++;
_004015E0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015E1:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004015E2:
  Stack[StackPtr] = DW_OP_const1u(0x1B);
  StackPtr++;
_004015E4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015E5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015E6:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004015EB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015EC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015ED:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004015F2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015F3:
  Stack[StackPtr] = DW_OP_const4u(0xFF030018);
  StackPtr++;
_004015F8:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015F9:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004015FE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004015FF:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401600:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401601:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_00401603:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401604:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401605:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_00401607:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401608:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401609:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040160E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040160F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401610:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401615:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401616:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401617:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00401619:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040161A:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040161B:
  Stack[StackPtr] = DW_OP_const1u(0x1D);
  StackPtr++;
_0040161D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040161E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040161F:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401624:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401625:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401626:
  Stack[StackPtr] = DW_OP_const1u(0x07);
  StackPtr++;
_00401628:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401629:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040162A:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040162F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401630:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401631:
  Stack[StackPtr] = DW_OP_const1u(0x07);
  StackPtr++;
_00401633:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401634:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401635:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040163A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040163B:
  Stack[StackPtr] = DW_OP_const4u(0xFF030018);
  StackPtr++;
_00401640:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401641:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401646:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401647:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401648:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_0040164A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040164B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040164C:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401651:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401652:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401653:
  Stack[StackPtr] = DW_OP_const1u(0x0A);
  StackPtr++;
_00401655:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401656:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401657:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040165C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040165D:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040165E:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040165F:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_00401661:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401662:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401663:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_00401665:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401666:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401667:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040166C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040166D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040166E:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040166F:
  Stack[StackPtr] = DW_OP_const1u(0x07);
  StackPtr++;
_00401671:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401672:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401673:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401678:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401679:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040167A:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_0040167C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040167D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040167E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401683:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401684:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401685:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401686:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_00401688:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401689:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040168A:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_0040168C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040168D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040168E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401693:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401694:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401695:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401696:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00401698:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401699:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040169A:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040169F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016A0:
  Stack[StackPtr] = DW_OP_const4u(0xD2105517);
  StackPtr++;
_004016A5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016A6:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004016A7:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_004016A9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016AA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016AB:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004016AC:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_004016AE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016AF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016B0:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004016B5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016B6:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004016B7:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004016B8:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_004016BA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016BB:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004016BC:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_004016BE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016BF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016C0:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004016C5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016C6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016C7:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004016C8:
  Stack[StackPtr] = DW_OP_const1u(0x0A);
  StackPtr++;
_004016CA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016CB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016CC:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004016D1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016D2:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004016D3:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_004016D5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016D6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016D7:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004016DC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016DD:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004016DE:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_004016E0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016E1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016E2:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004016E7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016E8:
  Stack[StackPtr] = DW_OP_const4u(0xFF030018);
  StackPtr++;
_004016ED:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016EE:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004016F3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016F4:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004016F5:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_004016F7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016F8:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016F9:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004016FE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004016FF:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401700:
  Stack[StackPtr] = DW_OP_const1u(0x07);
  StackPtr++;
_00401702:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401703:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401704:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401709:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040170A:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040170B:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040170C:
  Stack[StackPtr] = DW_OP_const1u(0x05);
  StackPtr++;
_0040170E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040170F:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401710:
  Stack[StackPtr] = DW_OP_const1u(0x1B);
  StackPtr++;
_00401712:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401713:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401714:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401719:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040171A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040171B:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401720:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401721:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401722:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401723:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00401725:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401726:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401727:
  Stack[StackPtr] = DW_OP_const1u(0x17);
  StackPtr++;
_00401729:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040172A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040172B:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401730:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401731:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401732:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401733:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401734:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00401736:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401737:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401738:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_0040173A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040173B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040173C:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401741:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401742:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401743:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401748:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401749:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040174A:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_0040174C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040174D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040174E:
  Stack[StackPtr] = DW_OP_const4u(0xFF030018);
  StackPtr++;
_00401753:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401754:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401759:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040175A:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_0040175F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401760:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401765:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401766:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401767:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401768:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_0040176A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040176B:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040176C:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_0040176E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040176F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401770:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401775:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401776:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401777:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040177C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040177D:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040177E:
  Stack[StackPtr] = DW_OP_const1u(0x07);
  StackPtr++;
_00401780:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401781:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401782:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401787:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401788:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401789:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040178A:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_0040178C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040178D:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040178E:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00401790:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401791:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401792:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401797:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401798:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401799:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040179E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040179F:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004017A0:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004017A1:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_004017A3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017A4:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004017A5:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_004017A7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017A8:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017A9:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004017AE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017AF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017B0:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004017B1:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_004017B3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017B4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017B5:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004017BA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017BB:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004017BC:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004017BD:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_004017BF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017C0:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004017C1:
  Stack[StackPtr] = DW_OP_const1u(0x17);
  StackPtr++;
_004017C3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017C4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017C5:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004017CA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017CB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017CC:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004017CD:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004017CE:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_004017D0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017D1:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004017D2:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_004017D4:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017D5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017D6:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004017DB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017DC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017DD:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004017E2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017E3:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004017E4:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004017E5:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_004017E7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017E8:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004017E9:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_004017EB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017EC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017ED:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004017F2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017F3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017F4:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004017F5:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_004017F7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017F8:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017F9:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004017FE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004017FF:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401800:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401801:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00401803:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401804:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401805:
  Stack[StackPtr] = DW_OP_const1u(0x17);
  StackPtr++;
_00401807:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401808:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401809:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040180E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040180F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401810:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401811:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00401813:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401814:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401815:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401816:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00401818:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401819:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040181A:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_0040181F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401820:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401825:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401826:
  Stack[StackPtr] = DW_OP_const4u(0xFF030018);
  StackPtr++;
_0040182B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040182C:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401831:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401832:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401833:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00401835:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401836:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401837:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401838:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401839:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_0040183B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040183C:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040183D:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_0040183F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401840:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401841:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401846:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401847:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401848:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040184D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040184E:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040184F:
  Stack[StackPtr] = DW_OP_const1u(0x09);
  StackPtr++;
_00401851:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401852:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401853:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401858:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401859:
  Stack[StackPtr] = DW_OP_const4u(0xD2105517);
  StackPtr++;
_0040185E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040185F:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401860:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00401862:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401863:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401864:
  Stack[StackPtr] = DW_OP_const1u(0x1D);
  StackPtr++;
_00401866:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401867:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401868:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040186D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040186E:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040186F:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401870:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_00401872:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401873:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401874:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_00401876:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401877:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401878:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040187D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040187E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040187F:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401884:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401885:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_0040188A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040188B:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401890:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401891:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401892:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401893:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00401895:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401896:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401897:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00401899:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040189A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040189B:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004018A0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018A1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018A2:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004018A7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018A8:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004018A9:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004018AA:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_004018AC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018AD:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004018AE:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_004018B0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018B1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018B2:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004018B7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018B8:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018B9:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004018BE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018BF:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004018C0:
  Stack[StackPtr] = DW_OP_const1u(0x07);
  StackPtr++;
_004018C2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018C3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018C4:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004018C9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018CA:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004018CB:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_004018CD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018CE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018CF:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004018D0:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004018D1:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_004018D3:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018D4:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004018D5:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_004018D7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018D8:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018D9:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004018DE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018DF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018E0:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004018E5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018E6:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004018E7:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004018E8:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_004018EA:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018EB:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004018EC:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_004018EE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018EF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018F0:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004018F5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018F6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018F7:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004018FC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004018FD:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004018FE:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004018FF:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_00401901:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401902:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401903:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_00401905:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401906:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401907:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040190C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040190D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040190E:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401913:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401914:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401915:
  Stack[StackPtr] = DW_OP_const1u(0x07);
  StackPtr++;
_00401917:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401918:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401919:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040191E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040191F:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401920:
  Stack[StackPtr] = DW_OP_const1u(0x03);
  StackPtr++;
_00401922:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401923:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401924:
  Stack[StackPtr] = DW_OP_const4u(0xD2105517);
  StackPtr++;
_00401929:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040192A:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040192B:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_0040192D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040192E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040192F:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401934:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401935:
  Stack[StackPtr] = DW_OP_const4u(0xD2105517);
  StackPtr++;
_0040193A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040193B:
  Stack[StackPtr] = DW_OP_const4u(0xA571689F);
  StackPtr++;
_00401940:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401941:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401946:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401947:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401948:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401949:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_0040194B:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040194C:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040194D:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_0040194F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401950:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401951:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00401956:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401957:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401958:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040195D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040195E:
  Stack[StackPtr] = DW_OP_const4u(0xD2105517);
  StackPtr++;
_00401963:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401964:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401965:
  Stack[StackPtr] = DW_OP_const1u(0x07);
  StackPtr++;
_00401967:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401968:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401969:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040196E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040196F:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401970:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00401971:
  Stack[StackPtr] = DW_OP_const1u(0x02);
  StackPtr++;
_00401973:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401974:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00401975:
  Stack[StackPtr] = DW_OP_const1u(0x1E);
  StackPtr++;
_00401977:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401978:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401979:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_0040197E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040197F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00401980:
  goto _004005F0; // DW_OP_skip 0xFFFFEC6D (0x004005F0)
_004005F0:
  Stack[StackPtr] = Stack[StackPtr - 1 -  2];
  StackPtr++; // DW_OP_pick(S24)
_004005F2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004005F3:
  Stack[StackPtr] = Stack[StackPtr - 1 -  3];
  StackPtr++; // DW_OP_pick(S23)
_004005F5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004005F6:
  Stack[StackPtr] = Stack[StackPtr - 1 -  4];
  StackPtr++; // DW_OP_pick(S22)
_004005F8:
  Stack[StackPtr] = Stack[StackPtr - 1 -  4];
  StackPtr++; // DW_OP_pick(S23)
_004005FA:
  Stack[StackPtr] = DW_OP_const1u(0x20);
  StackPtr++;
_004005FC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004005FD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004005FE:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004005FF:
  Stack[StackPtr] = DW_OP_const1u(0x20);
  StackPtr++;
_00400601:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400602:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400603:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400604:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400605:
  StackPtr--; // DW_OP_drop(&StackPtr);
_00400606:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400607:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400608:
  StackPtr--; // DW_OP_drop(&StackPtr);
_00400609:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_0040060A:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_0040060B:
  StackPtr--; // DW_OP_drop(&StackPtr);
_0040060C:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_0040060D:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_0040060E:
  StackPtr--; // DW_OP_drop(&StackPtr);
_0040060F:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400610:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400611:
  StackPtr--; // DW_OP_drop(&StackPtr);
_00400612:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400613:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400614:
  StackPtr--; // DW_OP_drop(&StackPtr);
_00400615:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400616:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400617:
  StackPtr--; // DW_OP_drop(&StackPtr);
_00400618:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400619:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_0040061A:
  StackPtr--; // DW_OP_drop(&StackPtr);
_0040061B:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040061C:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_0040061D:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_0040061E:
  StackPtr--; // DW_OP_drop(&StackPtr);
_0040061F:
  goto _004003BC; // DW_OP_skip 0xFFFFFD9A (0x004003BC)
_004003BC:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004003BD:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004003BE:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004003BF:
  Stack[StackPtr] = Stack[StackPtr - 1 -  4];
  StackPtr++; // DW_OP_pick(S14)
_004003C1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004003C2:
  StackPtr--;
  if (Stack[StackPtr] != 0)
    goto _004003C8; //// DW_OP_bra 0x00000003 (0x004003C5, 0x004003C8)
_004003C5:
  goto _004003CD; // DW_OP_skip 0x00000005 (0x004003CD)
_004003C8:
  Stack[StackPtr] = DW_OP_lit(01);
  StackPtr++;
_004003C9:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004003CA:
  goto _004003B6; // DW_OP_skip 0xFFFFFFE9 (0x004003B6)
_004003CD:
  StackPtr--; // DW_OP_drop(&StackPtr);
_004003CE:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004003CF:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004003D0:
  StackPtr--; // DW_OP_drop(&StackPtr);
_004003D1:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004003D2:
  Stack[StackPtr] = Stack[StackPtr - 1 -  3];
  StackPtr++; // DW_OP_pick(S12)
_004003D4:
  Stack[StackPtr] = DW_OP_lit(00);
  StackPtr++;
_004003D5:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004003D6:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004003D7:
  Stack[StackPtr] = DW_OP_const8u(0x00000000FFFFFFFF);
  StackPtr++;
_004003E0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004003E1:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004003E2:
  Stack[StackPtr] = DW_OP_const8u(0xFFFFFFFF00000000);
  StackPtr++;
_004003EB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004003EC:
  Stack[StackPtr] = DW_OP_const1u(0x20);
  StackPtr++;
_004003EE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004003EF:
  goto _004004E7; // DW_OP_skip 0x000000F5 (0x004004E7)
_004004E7:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004004E8:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004004E9:
  Stack[StackPtr] = DW_OP_lit(00);
  StackPtr++;
_004004EA:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004004EB:
  Stack[StackPtr] = DW_OP_lit(02);
  StackPtr++;
_004004EC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_mul(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004ED:
  Stack[StackPtr] = DW_OP_lit(04);
  StackPtr++;
_004004EE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_mul(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004EF:
  Stack[StackPtr] = DW_OP_const8u(0x0000000000400648);
  StackPtr++;
_004004F8:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004F9:
  StackPtr--;
  Stack[StackPtr] = DW_OP_deref_size(4, Stack[StackPtr]);
  StackPtr++;
_004004FB:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004004FC:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004004FD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004FE:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400503:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400504:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400505:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400506:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400507:
  Stack[StackPtr] = Stack[StackPtr - 1 -  1];
  StackPtr++; // DW_OP_pick(S18)
_00400509:
  Stack[StackPtr] = DW_OP_lit(02);
  StackPtr++;
_0040050A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_mul(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040050B:
  Stack[StackPtr] = DW_OP_lit(01);
  StackPtr++;
_0040050C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040050D:
  Stack[StackPtr] = DW_OP_lit(04);
  StackPtr++;
_0040050E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_mul(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040050F:
  Stack[StackPtr] = DW_OP_const8u(0x0000000000400648);
  StackPtr++;
_00400518:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400519:
  StackPtr--;
  Stack[StackPtr] = DW_OP_deref(Stack[StackPtr]);
  StackPtr++;
_0040051A:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040051B:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040051C:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_0040051D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040051E:
  Stack[StackPtr] = Stack[StackPtr - 1 -  3];
  StackPtr++; // DW_OP_pick(S17)
_00400520:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
#ifdef Unroll
	//printf("printf(\"%%d %%llX\\n\", %d, S%d); // _00400520 %08llX\n", StackPtr, StackPtr, Stack[StackPtr]);
#endif
  StackPtr++;
_00400521:
  Stack[StackPtr] = DW_OP_const1u(0x20);
  StackPtr++;
_00400523:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400524:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400525:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400526:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400527:
  StackPtr--; // DW_OP_drop(&StackPtr);
_00400528:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400529:
  Stack[StackPtr] = DW_OP_const8u(0x00000000FFFFFFFF);
  StackPtr++;
_00400532:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400533:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400534:
  Stack[StackPtr] = DW_OP_const8u(0xFFFFFFFF00000000);
  StackPtr++;
_0040053D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040053E:
  Stack[StackPtr] = DW_OP_const1u(0x20);
  StackPtr++;
_00400540:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400541:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400542:
  Stack[StackPtr] = Stack[StackPtr - 1 -  2];
  StackPtr++; // DW_OP_pick(S17)
_00400544:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400545:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400546:
  Stack[StackPtr] = DW_OP_lit(01);
  StackPtr++;
_00400547:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400548:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400549:
  Stack[StackPtr] = DW_OP_lit(06);
  StackPtr++;
_0040054A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040054B:
  StackPtr--;
  if (Stack[StackPtr] != 0)
    goto _004004EA; //// DW_OP_bra 0xFFFFFF9C (0x0040054E, 0x004004EA)
_0040054E:
  StackPtr--; // DW_OP_drop(&StackPtr);
_0040054F:
  StackPtr--; // DW_OP_drop(&StackPtr);
_00400550:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400551:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400552:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400553:
  StackPtr--;
  if (Stack[StackPtr] != 0)
    goto _00400559; //// DW_OP_bra 0x00000003 (0x00400556, 0x00400559)
_00400556:
  goto _004003F2; // DW_OP_skip 0xFFFFFE99 (0x004003F2)
_004003F2:
  Stack[StackPtr] = Stack[StackPtr - 1 -  4];
  StackPtr++; // DW_OP_pick(S13)
_004003F4:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004003F5:
  Stack[StackPtr] = DW_OP_const8u(0x00000000FFFFFFFF);
  StackPtr++;
_004003FE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004003FF:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400400:
  Stack[StackPtr] = DW_OP_const8u(0xFFFFFFFF00000000);
  StackPtr++;
_00400409:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040040A:
  Stack[StackPtr] = DW_OP_const1u(0x20);
  StackPtr++;
_0040040C:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040040D:
  goto _00400480; // DW_OP_skip 0x00000070 (0x00400480)
_00400480:
  Stack[StackPtr] = Stack[StackPtr - 1 -  2];
  StackPtr++; // DW_OP_pick(S17)
_00400482:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400483:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400484:
  Stack[StackPtr] = Stack[StackPtr - 1 -  3];
  StackPtr++; // DW_OP_pick(S16)
_00400486:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400487:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400488:
  Stack[StackPtr] = DW_OP_const1u(0x04);
  StackPtr++;
_0040048A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040048B:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040048C:
  Stack[StackPtr] = DW_OP_const1u(0x1C);
  StackPtr++;
_0040048E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040048F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400490:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_00400495:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400496:
  Stack[StackPtr] = Stack[StackPtr - 1 -  2];
  StackPtr++; // DW_OP_pick(S17)
_00400498:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400499:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040049A:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040049B:
  Stack[StackPtr] = DW_OP_const1u(0x12);
  StackPtr++;
_0040049D:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040049E:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040049F:
  Stack[StackPtr] = DW_OP_const1u(0x0E);
  StackPtr++;
_004004A1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004A2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004A3:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004004A8:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004A9:
  Stack[StackPtr] = Stack[StackPtr - 1 -  3];
  StackPtr++; // DW_OP_pick(S16)
_004004AB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004AC:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004004AD:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004004AE:
  StackPtr--; // DW_OP_drop(&StackPtr);
_004004AF:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004004B0:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004004B1:
  StackPtr--; // DW_OP_drop(&StackPtr);
_004004B2:
  goto _00400410; // DW_OP_skip 0xFFFFFF5B (0x00400410)
_00400410:
  Stack[StackPtr] = DW_OP_const1u(0x20);
  StackPtr++;
_00400412:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400413:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400414:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400415:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400416:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400417:
  StackPtr--; // DW_OP_drop(&StackPtr);
_00400418:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_00400419:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_0040041A:
  Stack[StackPtr] = DW_OP_lit(01);
  StackPtr++;
_0040041B:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040041C:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040041D:
  Stack[StackPtr] = DW_OP_const8u(0x00000000FFFFFFFF);
  StackPtr++;
_00400426:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400427:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400428:
  Stack[StackPtr] = DW_OP_const8u(0xFFFFFFFF00000000);
  StackPtr++;
_00400431:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400432:
  Stack[StackPtr] = DW_OP_const1u(0x20);
  StackPtr++;
_00400434:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400435:
  goto _004004E7; // DW_OP_skip 0x000000AF (0x004004E7)
_00400559:
  goto _00400438; // DW_OP_skip 0xFFFFFEDC (0x00400438)
_00400438:
  Stack[StackPtr] = Stack[StackPtr - 1 -  4];
  StackPtr++; // DW_OP_pick(S13)
_0040043A:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_0040043B:
  Stack[StackPtr] = DW_OP_const8u(0x00000000FFFFFFFF);
  StackPtr++;
_00400444:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400445:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400446:
  Stack[StackPtr] = DW_OP_const8u(0xFFFFFFFF00000000);
  StackPtr++;
_0040044F:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400450:
  Stack[StackPtr] = DW_OP_const1u(0x20);
  StackPtr++;
_00400452:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400453:
  goto _004004B5; // DW_OP_skip 0x0000005F (0x004004B5)
_004004B5:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004004B6:
  Stack[StackPtr] = Stack[StackPtr - 1 -  2];
  StackPtr++; // DW_OP_pick(S17)
_004004B8:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004B9:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004004BA:
  Stack[StackPtr] = DW_OP_const1u(0x1A);
  StackPtr++;
_004004BC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004BD:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004004BE:
  Stack[StackPtr] = DW_OP_const1u(0x06);
  StackPtr++;
_004004C0:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004C1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004C2:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004004C7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004C8:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004004C9:
  Stack[StackPtr] = Stack[StackPtr - 1 -  3];
  StackPtr++; // DW_OP_pick(S16)
_004004CB:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004CC:
  Stack[StackPtr] = Stack[StackPtr - 1 -  2];
  StackPtr++; // DW_OP_pick(S17)
_004004CE:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004CF:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004004D0:
  Stack[StackPtr] = DW_OP_const1u(0x0E);
  StackPtr++;
_004004D2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shr(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004D3:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004004D4:
  Stack[StackPtr] = DW_OP_const1u(0x12);
  StackPtr++;
_004004D6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004D7:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004D8:
  Stack[StackPtr] = DW_OP_const4u(0xFFFFFFFF);
  StackPtr++;
_004004DD:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_and(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004004DE:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004004DF:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004004E0:
  StackPtr--; // DW_OP_drop(&StackPtr);
_004004E1:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004004E2:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004004E3:
  StackPtr--; // DW_OP_drop(&StackPtr);
_004004E4:
  goto _00400456; // DW_OP_skip 0xFFFFFF6F (0x00400456)
_00400456:
  Stack[StackPtr] = DW_OP_const1u(0x20);
  StackPtr++;
_00400458:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_shl(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400459:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_or(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040045A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040045B:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_0040045C:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_0040045D:
  StackPtr--; // DW_OP_drop(&StackPtr);
_0040045E:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_0040045F:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400460:
  Stack[StackPtr] = DW_OP_lit(01);
  StackPtr++;
_00400461:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400462:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400463:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400464:
  Stack[StackPtr] = Stack[StackPtr - 1 -  2];
  StackPtr++; // DW_OP_pick(S12)
_00400466:
  Stack[StackPtr] = DW_OP_lit(15);
  StackPtr++;
_00400467:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400468:
  StackPtr--;
  if (Stack[StackPtr] != 0)
    goto _004003AC; //// DW_OP_bra 0xFFFFFF41 (0x0040046B, 0x004003AC)
_0040046B:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_0040046C:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_0040046D:
  StackPtr--; // DW_OP_drop(&StackPtr);
_0040046E:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_0040046F:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400470:
  StackPtr--; // DW_OP_drop(&StackPtr);
_00400471:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400472:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400473:
  StackPtr--; // DW_OP_drop(&StackPtr);
_00400474:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400475:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400476:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_00400477:
  StackPtr--;
  if (Stack[StackPtr] != 0)
    goto _0040047D; //// DW_OP_bra 0x00000003 (0x0040047A, 0x0040047D)
_0040047A:
  goto _004002DF; // DW_OP_skip 0xFFFFFE62 (0x004002DF)
_004002DF:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004002E0:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004002E1:
  StackPtr--; // DW_OP_drop(&StackPtr);
_004002E2:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004002E3:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004002E4:
  StackPtr--; // DW_OP_drop(&StackPtr);
_004002E5:
  Stack[StackPtr] = DW_OP_lit(01);
  StackPtr++;
_004002E6:
  Stack[StackPtr] = Stack[StackPtr - 1 -  2];
  StackPtr++; // DW_OP_pick(S7)
_004002E8:
  Stack[StackPtr] = Stack[StackPtr - 1 -  2];
  StackPtr++; // DW_OP_pick(S8)
_004002EA:
  goto _0040030B; // DW_OP_skip 0x0000001E (0x0040030B)
_0040047D:
  goto _004002F4; // DW_OP_skip 0xFFFFFE74 (0x004002F4)
_004002F4:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004002F5:
  DW_OP_rot(Stack[StackPtr - 1], Stack[StackPtr - 2], Stack[StackPtr - 3]);
_004002F6:
  Stack[StackPtr] = Stack[StackPtr - 1 -  3];
  StackPtr++; // DW_OP_pick(S7)
_004002F8:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004002F9:
  Stack[StackPtr] = Stack[StackPtr - 1 -  5];
  StackPtr++; // DW_OP_pick(S6)
_004002FB:
  Stack[StackPtr] = DW_OP_lit(01);
  StackPtr++;
_004002FC:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004002FD:
  Stack[StackPtr] = Stack[StackPtr -1]; //Stack,StackPtr - 1);
  StackPtr++;
_004002FE:
  Stack[StackPtr] = DW_OP_lit(04);
  StackPtr++;
_004002FF:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_minus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_00400300:
  StackPtr--;
  if (Stack[StackPtr] != 0)
    goto _004002CF; //// DW_OP_bra 0xFFFFFFCC (0x00400303, 0x004002CF)
_00400303:
  StackPtr--; // DW_OP_drop(&StackPtr);
_00400304:
  Stack[StackPtr] = Stack[StackPtr - 1 -  3];
#ifdef Unroll
	//printf("printf(\"%%d %%llX\\n\", %d, S%d); // _00400304 %08llX\n", StackPtr, StackPtr, Stack[StackPtr]);
#endif
  StackPtr++; // DW_OP_pick(S8)
_00400306:
  Stack[StackPtr] = Stack[StackPtr - 1 -  3];
#ifdef Unroll
	//printf("printf(\"%%d %%llX\\n\", %d, S%d); // _00400306 %08llX\n", StackPtr, StackPtr, Stack[StackPtr]);
#endif
  StackPtr++; // DW_OP_pick(S9)
_00400308:
  goto _00400285; // DW_OP_skip 0xFFFFFF7A (0x00400285)
_00400285:
  Stack[StackPtr] = DW_OP_const8u(0x658302A68E8E1C24);
  StackPtr++;
_0040028E:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);	
  StackPtr++;
_0040028F:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_00400290:
  Stack[StackPtr] = DW_OP_const8u(0xDC7564F1612E5347);
  StackPtr++;
_00400299:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040029A:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_0040029B:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_0040029C:
  Stack[StackPtr] = DW_OP_const8u(0xD9C69B74A86EC613);
  StackPtr++;
_004002A5:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004002A6:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004002A7:
  DW_OP_swap(Stack[StackPtr - 1], Stack[StackPtr - 2]);
_004002A8:
  Stack[StackPtr] = DW_OP_const8u(0x65850B36E76AAED5);
  StackPtr++;
_004002B1:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_xor(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004002B2:
  StackPtr -= 2;
  Stack[StackPtr] = DW_OP_plus(Stack[StackPtr], Stack[StackPtr + 1]);
  StackPtr++;
_004002B3:
	StackPtr--;
	
	printf("Result = S%d; // %llX\n", StackPtr, Stack[StackPtr]);
	return Stack[StackPtr];
	//printf("printf(\"// Finale Check (X == 0) => %%d %%lX\\n\", %d, S%d); // _00400306 %08llX\n", StackPtr, StackPtr, Stack[StackPtr]);
	if (Stack[StackPtr] != 0)
		goto _004002C2; //// DW_OP_bra 0x0000000C (0x004002B6, 0x004002C2)
_004002B6:
	// Disable this here to not destroy the value
	//Stack[StackPtr] = DW_OP_const8u(0x0000000000403098);
	//StackPtr++;
	//_004002BF: goto _004082C1; // DW_OP_skip 0x00007FFF (0x004082C1)

  return 0x00403098;
};

int main(void) {
  // BinaryEnd = (uint64_t)decrypted_file + decrypted_file_len;

  // SSTIC{a947d6980ccf7b87cb8d7c246} <= Example key
  // Build up flag
  // 25 chars huma readable
  // char FlagInner[] = "A11111112222222233333333Z"; //190329E3C524966B
  //char FlagInner[] = "Z11111112222222233333333Z"; // D7783616EF60E415
	char FlagInner[] = "Z11111112222222233333333Z";
  // klee_make_symbolic(FlagInner, 26, "InnerFlag");
  // printf("%d\n", sizeof(FlagInner));
  for (int i = 0; i < 25; i++) {
    if (FlagInner[i] >= '0' && FlagInner[i] <= '9')
      continue;

    if (FlagInner[i] >= 'a' && FlagInner[i] <= 'z')
      continue;

    if (FlagInner[i] >= 'A' && FlagInner[i] <= 'Z')
      continue;

    // printf("Wrong Input!\n");
    exit(1);
  }

  char Flag[] = "SSTIC{1111111122222222333333334}"; // Only => 2DB6A6078FFCF147
  memcpy(Flag + 6, FlagInner, 25); // = D7783616EF60E415

  uint64_t *SimArgv[2];
  SimArgv[0] = (uint64_t *)0x1111111111111111;
  SimArgv[1] = (uint64_t *)Flag;

	printf("//%s\n", Flag);
  uint64_t Result = VM_Func((uint64_t*) Flag);
  printf("//Result %llX\n", Result);

  return 0;
}