#include <stdio.h>

//���� ���ܻ�[ ? :] - ���ǹ��� ���̸� ���� ��. �����̶�� ���� ���� ��Ÿ����.

void main(void) {
	int a, b;

	printf("Input a : ");
	scanf("%d", &a);

	printf("Input b : ");
	scanf("%d", &b);

	printf("���� ū�� : %d\n", (a > b ? a : b));

	int max = (a > b ? a : b);
	printf("���� ū�� : %d\n", max);

	int num = 10;
	num += (a > b ? -1 : 1);
	printf("%d\n", num);

}