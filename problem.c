#include <stdio.h>

/*

	�����ϰ� �ִ� å �Ǽ� �Է� : 1
	1 book

	�����ϰ� �ִ� å �Ǽ� �Է� : 3
	3 books

	�����ϰ� �ִ� å �Ǽ� �Է� : 0
	�����ϰ� �ִ� å ����.
*/

void main(void) {
	int book;

	/*printf("�����ϰ� �ִ� å �Ǽ� �Է� : ");
	scanf("%d", &book);

	printf("%d book", book);

	if (book > 1)
	{
		printf("s\n");
	}*/

	printf("�����ϰ� �ִ� å �Ǽ� �Է� : ");
	scanf("%d", &book);

	if (book < 0)
	{
		printf("�߸��Է��߽��ϴ�.\n");
	}
	else if (book == 0)
	{
		printf("�����ϰ� �ִ� å ����.\n");
	}
	else if (book == 1)
	{
		printf("%d book\n",book);
	}
	else
	{
		printf("%d books\n", book);
	}
}