#include <stdio.h>

/*

	보유하고 있는 책 권수 입력 : 1
	1 book

	보유하고 있는 책 권수 입력 : 3
	3 books

	보유하고 있는 책 권수 입력 : 0
	보유하고 있는 책 없다.
*/

void main(void) {
	int book;

	/*printf("보유하고 있는 책 권수 입력 : ");
	scanf("%d", &book);

	printf("%d book", book);

	if (book > 1)
	{
		printf("s\n");
	}*/

	printf("보유하고 있는 책 권수 입력 : ");
	scanf("%d", &book);

	if (book < 0)
	{
		printf("잘못입력했습니다.\n");
	}
	else if (book == 0)
	{
		printf("보유하고 있는 책 없다.\n");
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