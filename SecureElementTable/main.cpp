//#include "klee.h"
#include "sha2.h"
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <vector>
#include <thread>
#include <cmath>

// Gate operation
uint8_t Step1Table[16] = { 0xD7, 0x19, 0xDF, 0x40, 0xAF, 0x62, 0xBF, 0x81, 0x47, 0x39, 0xC7, 0xC2, 0x90, 0x72, 0x8F, 0x89, };
uint8_t Step2Table[16] = { 0x29, 0xD1, 0x08, 0xDB, 0x52, 0xA4, 0x10, 0xB5, 0x32, 0xD9, 0x90, 0xDA, 0xF3, 0xB4, 0x20, 0xF5, };
uint8_t Step3Table[16] = { 0xED, 0x8D, 0xD9, 0xDF, 0xDB, 0x1C, 0xB0, 0xBF, 0xBD, 0x4F, 0xDC, 0xDD, 0x7B, 0x9F, 0x01, 0xBB, };
uint8_t Step4Table[16] = { 0xAA, 0x38, 0xA9, 0x28, 0x55, 0x71, 0x53, 0x52, 0x1A, 0x4E, 0xAD, 0x00, 0x35, 0x9C, 0x5B, 0x40, };
uint8_t Step5Table[16] = { 0xFD, 0x00, 0xAF, 0x47, 0xFF, 0x01, 0x60, 0x8E, 0xED, 0x41, 0xDE, 0xD4, 0xCB, 0x82, 0xBD, 0xA9, };
uint8_t Step6Table[16] = { 0x31, 0xB2, 0xF6, 0x64, 0x4E, 0x65, 0xED, 0xC8, 0x3D, 0xCF, 0xEE, 0xE0, 0x1B, 0x9D, 0xDD, 0xC1, };
uint8_t Step7Table[16] = { 0xDD, 0x54, 0x4D, 0x4F, 0xBB, 0xA9, 0x9A, 0x9E, 0x60, 0x86, 0x05, 0xDF, 0xCA, 0xE8, 0x0A, 0xBF, };
uint8_t Step8Table[16] = { 0x83, 0x54, 0x78, 0xFB, 0x07, 0xAA, 0xF0, 0xF3, 0x97, 0x85, 0xD8, 0xFC, 0x4D, 0x48, 0xB0, 0xFD, };
   
// 00c8bb35d44dcbb2712a11799d8e1316045d64404f337f4ff653c27607f436ea
const uint8_t ValidHash[] = {0x00, 0xc8, 0xbb, 0x35, 0xd4, 0x4d, 0xcb, 0xb2,
                             0x71, 0x2a, 0x11, 0x79, 0x9d, 0x8e, 0x13, 0x16,
                             0x04, 0x5d, 0x64, 0x40, 0x4f, 0x33, 0x7f, 0x4f,
                             0xf6, 0x53, 0xc2, 0x76, 0x07, 0xf4, 0x36, 0xea};

typedef struct {
	int ThreadID;
	uint64_t Min;
	uint64_t Max;
} Range;
static std::vector<Range> Ranges;


int main(int argc, char **argv) {

	// Get amount of threads
	uint64_t V = 0;
	uint64_t Max = (uint64_t)((std::pow(2, 4 * 8)) - 1);
	const int TCount = std::thread::hardware_concurrency();
	uint64_t Step = (Max) / TCount;
	uint64_t Min = 0;

	for (int i = 0;i < TCount;i++) {
		Range R;
		R.Min = Min;
		if (Min + Step > Max) {
			R.Max = Max;
		}
		else {
			R.Max = Min + Step;
		}

		Min += Step + 1;

		Ranges.push_back(R);
	}

	int TID = 0;
	for (auto& R : Ranges) {
		R.ThreadID = TID++;
		printf("[*] T%02i Range       : %08lX - %08lX\n", R.ThreadID, R.Min, R.Max);
	}

	bool Finished = false;
	std::vector<std::thread> workers;
  
	for (auto& R : Ranges) {
		workers.push_back(std::thread([&]() {
			uint8_t Digest[32];
			sha256_ctx ctx;
			clock_t start, end;
			double cpu_time_used;
			uint8_t key[8];

			uint64_t RMin = R.Min;
			uint64_t RMax = R.Max;
			start = clock();
			for (uint64_t pin = RMin; pin <= RMax; pin++) {
				// klee_make_symbolic(&Input, 4, "Input");

				// klee_make_symbolic(&Input1, sizeof(Input1), "Input1");
				uint8_t s1 = Step1Table[pin & 0xF];
				uint8_t s2 = Step2Table[(pin >> 4) & 0xF];
				uint8_t s3 = Step3Table[(pin >> 8) & 0xF];
				uint8_t s4 = Step4Table[(pin >> 12) & 0xF];
				uint8_t s5 = Step5Table[(pin >> 16) & 0xF];
				uint8_t s6 = Step6Table[(pin >> 20) & 0xF];
				uint8_t s7 = Step7Table[(pin >> 24) & 0xF];
				uint8_t s8 = Step8Table[(pin >> 28) & 0xF];

				// Calc digest
				key[0] = s1;
				key[1] = s2;
				key[2] = s3;
				key[3] = s4;
				key[4] = s5;
				key[5] = s6;
				key[6] = s7;
				key[7] = s8;


				sha256_init(&ctx);
				sha256_update(&ctx, key, 8);
				sha256_final(&ctx, Digest);

				/*
				if (pin % 0x01000000 == 0) {
					end = clock();
					cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
					printf("%i PIN: %08llX (%fs)\n", R.ThreadID, pin, cpu_time_used);
					for (int i = 0; i < 32; i++) {
						printf("%02X", Digest[i]);
					}
					printf("\n");

					start = clock();
				}
				*/

				if (!memcmp(Digest, ValidHash, 32)) {
					printf("Valid key: ");
					for (int i = 0; i < 8; i++) {
						printf("%02X", key[i]);
					}

					printf("\nPin: %llX\n", pin);
					Finished = true;
					return;
				}

				if (Finished)
					return;
			}
			}));
	};


	// Wait until all threads are finished
	for (auto& t : workers) {
		t.join();
	};

	if (Finished == false) 
		printf("Not found!");	
  return 0;
}