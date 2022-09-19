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
	//a++ >= 0이 참이기 때문에 뒤의 코드는 수행하지않음

	printf("%d %d %d/\n", a, b, c);
	// 따라서 1 0 0 이 결과로 출력됨*/

	/*int a = 1, b = 0, c = -1;
	printf("%d\n", --a > 0 && ++b >= 0 || ++c >= 0); 
	//			0				1			1
	//	1

	printf("%d %d %d/\n", a, b, c);
	// 따라서 0 0 0 이 결과로 출력됨*/

	/*int a = 1, b = 0, c = -1;
	printf("%d\n", a-- > 0 || b++ >= 0 && c-- > 0);
	// 1 1 0
	// 1

	printf("%d %d %d/\n", a, b, c);
	// 따라서 0 0 -1 이 결과로 출력됨*/


	int a, b;
	printf("Input a : ");
	scanf("%d", &a);

	printf("Input b : ");
	scanf("%d", &b);

	printf("%d가 %d의 약수여부 : %d\n", b, a, b!=0&& a % b == 0);


}