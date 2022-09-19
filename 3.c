#include <stdio.h>

void main(void)
{
	int a, b, c;
	printf("정수 3개를 입력 : ");
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && b >= c)
	{
		printf("%d %d %d", c, b, a);
	}
	else if (a >= b && c >= b)
	{
		printf("%d %d %d", b, c, a);
	}
	else if (b >= a && a >= c)
	{
		printf("%d %d %d", c, a, b);
	}
	else if (b >= a && c >= a)
	{
		printf("%d %d %d", a, c, b);
	}
	else if (c >= a && a >= b)
	{
		printf("%d %d %d", b, a, c);
	}
	else
	{
		printf("%d %d %d", a, b, c);
	}
}