#include <stdio.h>

void main(void) {

	int score;
	char alpa;

	printf("성적을 입력 : ");
	scanf("%d", &score);

	/*if (score > 100 || score < 0)
	{
		printf("ERROR!!\n");
	}
	else if (score >= 90)
	{
		alpa = 'A';
		printf("%d점의 학점은 %c입니다.", score, alpa);
	}
	else if (score >= 80)
	{
		alpa = 'B';
		printf("%d점의 학점은 %c입니다.", score, alpa);
	}
	else if (score >= 70)
	{
		alpa = 'C';
		printf("%d점의 학점은 %c입니다.", score, alpa);
	}
	else if (score >= 60)
	{
		alpa = 'D';
		printf("%d점의 학점은 %c입니다.", score, alpa);
	}
	else
	{
		alpa = 'F';
		printf("%d점의 학점은 %c입니다.", score, alpa);
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
			printf("%d점의 학점은 A입니다.", score);
			break;
		case 8:
			printf("%d점의 학점은 B입니다.", score);
			break;
		case 7:
			printf("%d점의 학점은 C입니다.", score);
			break;
		case 6:
			printf("%d점의 학점은 D입니다.", score);
			break;
		default :
			printf("%d점의 학점은 F입니다.", score);
			break;
		}
		break;
	default : 
		printf("점수를 다시입력하시요.\n");
		break;
	}
}