#include <stdio.h>

void main(void) {

	int score;
	char alpa;

	printf("������ �Է� : ");
	scanf("%d", &score);

	/*if (score > 100 || score < 0)
	{
		printf("ERROR!!\n");
	}
	else if (score >= 90)
	{
		alpa = 'A';
		printf("%d���� ������ %c�Դϴ�.", score, alpa);
	}
	else if (score >= 80)
	{
		alpa = 'B';
		printf("%d���� ������ %c�Դϴ�.", score, alpa);
	}
	else if (score >= 70)
	{
		alpa = 'C';
		printf("%d���� ������ %c�Դϴ�.", score, alpa);
	}
	else if (score >= 60)
	{
		alpa = 'D';
		printf("%d���� ������ %c�Դϴ�.", score, alpa);
	}
	else
	{
		alpa = 'F';
		printf("%d���� ������ %c�Դϴ�.", score, alpa);
	}

}*/


	int a;
	a = score / 10;

	switch (score >= 0 && score <= 100) 
	{
	case 1 :
		switch (a)
		{
		case 9: case 10:
			printf("%d���� ������ A�Դϴ�.", score);
			break;
		case 8:
			printf("%d���� ������ B�Դϴ�.", score);
			break;
		case 7:
			printf("%d���� ������ C�Դϴ�.", score);
			break;
		case 6:
			printf("%d���� ������ D�Դϴ�.", score);
			break;
		default :
			printf("%d���� ������ F�Դϴ�.", score);
			break;
		}
		break;
	default : 
		printf("������ �ٽ��Է��Ͻÿ�.\n");
		break;
	}
}