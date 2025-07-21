#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Q3 1~100 사이의 3의 배수만 출력하세요
int main()
{
	int i = 0;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d\n", i);
		}
	}

	printf("\n");
	printf("Q1 끝\n");
	printf("\n");

	for (i = 1; i <= 100; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d\n", i);
		}
	}

	printf("\n");
	printf("홀수 끝\n");
	printf("\n");


	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}
	}

	printf("\n");
	printf("Q2 끝\n");
	printf("\n");

	i = 100;

	while (i >= 0)
	{
		printf("%d\n", i);
		i--;
	}

	printf("\n");
	printf("Q3 끝\n");
	printf("\n");


	for (i = 100; i >= 0; i--)
	{
		printf("%d\n", i);
	}

	return 0;
}
