#include <stdio.h>

void main(void) {
	/*int a = 0, b = 0, c = 0;
	printf("%d\n", ++a >= 0 && ++b >= 0 && ++c >= 0);
	//				1>=0		1>=0		1>=0
	//		1
	printf("%d %d %d/\n", a, b, c);
	// 1 1 1*/

	/*int a = 0, b = 0, c = 0;
	printf("%d\n", a++ >= 0 || b++ >= 0 || c++ >= 0);
	//a++ >= 0�� ���̱� ������ ���� �ڵ�� ������������

	printf("%d %d %d/\n", a, b, c);
	// ���� 1 0 0 �� ����� ��µ�*/

	/*int a = 1, b = 0, c = -1;
	printf("%d\n", --a > 0 && ++b >= 0 || ++c >= 0); 
	//			0				1			1
	//	1

	printf("%d %d %d/\n", a, b, c);
	// ���� 0 0 0 �� ����� ��µ�*/

	/*int a = 1, b = 0, c = -1;
	printf("%d\n", a-- > 0 || b++ >= 0 && c-- > 0);
	// 1 1 0
	// 1

	printf("%d %d %d/\n", a, b, c);
	// ���� 0 0 -1 �� ����� ��µ�*/


	int a, b;
	printf("Input a : ");
	scanf("%d", &a);

	printf("Input b : ");
	scanf("%d", &b);

	printf("%d�� %d�� ������� : %d\n", b, a, b!=0&& a % b == 0);


}