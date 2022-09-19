#include <stdio.h>

void main(void) {

	int a, b, c, d, e;
	printf("정수 4개를 입력 : ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if (a > b && a > c && a > d)
	{
		e = a;
	}
	else if (b > c && b > d)
	{
		e = b;
	}
	else if (c > d)
	{
		e = c;
	}
	else
	{
		e = d;
	}
	printf("가장 큰 수 : %d", e);
}