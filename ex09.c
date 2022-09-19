#include <stdio.h>

/*
	한바퀴 뛸 차례다; 초기화
	while(!열바퀴 다 뛰었냐?)
	{
		운동장 한바퀴 뛴다;
		바퀴수 증가;
	}

	<반복문의 기본요소>
	1. 반복할 문장(statment)
	2. 시작값(init)
	3. 증가/감소(incre/decre)
	4. 종료조건(expr)

	init;
	while(expr)
	{
		statment;
		incre/decre
	}


	for(init ; expr ; incre/decre)
	{
		statement;
	}

*/

void main(void) {
	
	int count = 1;
	while (count<=5)
	{
		printf("Hello\n");
		count++;
	}
	printf("count : %d\n", count);

	for (int num = 0; num < 5; num++)  // for {} 내에서만 num가 유효함.
	{
		printf("Hello\n");
	}

	int i = 1;
	while (i <= 5)
	{
		printf("%d\n", i);
		i++;
	}
}