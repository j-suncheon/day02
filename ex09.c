#include <stdio.h>

/*
	�ѹ��� �� ���ʴ�; �ʱ�ȭ
	while(!������ �� �پ���?)
	{
		��� �ѹ��� �ڴ�;
		������ ����;
	}

	<�ݺ����� �⺻���>
	1. �ݺ��� ����(statment)
	2. ���۰�(init)
	3. ����/����(incre/decre)
	4. ��������(expr)

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

	for (int num = 0; num < 5; num++)  // for {} �������� num�� ��ȿ��.
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