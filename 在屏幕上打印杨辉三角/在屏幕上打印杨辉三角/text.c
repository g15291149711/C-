#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (j == 1 || j == i)
			{
				printf("%d", 1);
			}
			else 
			{
				printf("%d", i-1);
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
