#include <stdio.h>

/*
	
*/

void main(void) {

	int time = 812;

	if (800 <= time && time < 815)
	{
		printf("버스타고...\n");
	}
	
	printf("기상\n");
	if (time < 800)
	{
		printf("걸어서\n");
	}
	else if (time < 815)
	{
		printf("버스타고\n");
	}
	else
	{
		printf("택시타고\n");
	}
	printf("학교간다\n");

	/*printf("기상\n");
	
	if (time<800)
	{
		printf("걸어서\n");
	}
	else
	{
		printf("버스타고\n");
	}
	printf("학교간다\n");*/

}