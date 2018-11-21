#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[4] = {0};
	int brr[4] = {0};
	int i = 0;
	int y;
		for (i = 0; i < 4; i++)
		{
			scanf_s("%d", &arr[i]);
		}
		printf("\n");
		for (i = 0; i < 4; i++)
		{
			scanf_s("%d", &brr[i]);
		}
		printf("\n");
	for (i = 0; i < 4; i++)
	{
		y = arr[i];
		arr[i] = brr[i];
		brr[i] = y;
	}
		for (i = 0; i < 4; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
		for (i = 0; i < 4; i++)
		{
			printf("%d ", brr[i]);
		}
	printf("\n");
	system("pause");
	return 0;
}
//int main()
//{
//	int a[10] = { 0 };
//	int b[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &b[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		int tep = a[i];
//		printf("")
//	}
//	for (i = 0; i < 10; i++)
//	{
//		int tep = b[i];
//	}
//	printf("\n");
//	return 0;
//}