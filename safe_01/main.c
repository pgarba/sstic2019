#include <stdio.h>

int main() {
printf("uint64_t ");
for (int i=0;i<45;i++) {
	printf("S%i,",i);
}
printf(";\n");

for (int i=0;i<45;i++) {
	printf("uint64_t &S%i,",i);
}
printf(")\n\n");

printf("switch (ptr) {");
for (int i=0;i<45;i++) {
	printf("case %i:\n",i);
	printf("return S%i;\n",i);
}
printf("};\n");

return 0;
};
