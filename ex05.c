#include <stdio.h>

//조건 연잔사[ ? :] - 조건문이 참이면 앞의 값. 거짓이라면 뒤의 값을 나타낸다.

void main(void) {
	int a, b;

	printf("Input a : ");
	scanf("%d", &a);

	printf("Input b : ");
	scanf("%d", &b);

	printf("가장 큰수 : %d\n", (a > b ? a : b));

	int max = (a > b ? a : b);
	printf("가장 큰수 : %d\n", max);

	int num = 10;
	num += (a > b ? -1 : 1);
	printf("%d\n", num);

}