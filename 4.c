#include <stdio.h>

void main(void) {

	int a, b, c, d, e;
	printf("���� 4���� �Է� : ");
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
	printf("���� ū �� : %d", e);
}