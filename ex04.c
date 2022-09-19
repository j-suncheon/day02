#include <stdio.h>

void main(void) {
	int num = 3045; // 0x0BE5
	
	printf("%x\n", num & 0x000F);
	printf("%x\n", num>>4 & 0x000F);
	printf("%x\n", num>>8 & 0x000F);
	printf("%x\n", num>>12 & 0x000F);
	
}