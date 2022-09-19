#include <stdio.h>

/*
	if(조건) - 조건이 참이라면 블럭의 코드를 수행하고 거짓이라면 블록을 건너뜀
	{

	}
*/


void main(void) {

	int time;
	
	printf("기상시간을 입력(ex 7시 15분이면 715) : ");
	scanf("%d", &time);

	printf("기상\n");
	if (time <700)
	{
		printf("밥먹고\n");
	}
	printf("학교간다.\n");
}