#include <stdio.h>

void main(void) {
	int a = 10, b = 2;
	a += b++;
	printf("a=%d, b=%d\n", a, b);
	{
		int a = 2;
		a += b;
		b -= a;
		printf("a=%d, b=%d\n", a, b);
		{
			int b = 5;

		}
	}
}