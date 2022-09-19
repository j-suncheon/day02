#include <stdio.h>

void main(void) {
	for (int i = 100; i > 0; i--)
	{
		if (i%2==1)
		{
			printf("%d ", i);
		}
	}
}