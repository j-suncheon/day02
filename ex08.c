#include <stdio.h>

/*

*/

void main(void) {
	int num;

	printf("1~3사이의 정수 입력 : ");
	scanf("%d", &num);

	if (num == 1)
	{
		printf("ONE\n");
	}
	else if (num==2)
	{
		printf("TWO\n");
	}
	else if (num==3)
	{
		printf("THREE\n");
	}
	else
	{
		printf("ERROR!\n");
	}

	char ch;
	scanf("%c", &ch);

	switch (ch)
	{
	case 'a':
		printf("ONE\n");
		break;
	case 'b':
		printf("TWO\n");
		break;
	case 3 :
		printf("THREE\n");
		break;
	default :
		printf("ERROR!\n");
		break;
	}
}