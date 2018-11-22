#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[5] = {0};
	int brr[5] = {0};
	int i = 0;
	int j = 0;
	printf("给俩个数组初始化：\n");
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < sizeof(brr) / sizeof(brr[0]); i++)
	{
		scanf("%d", &brr[i]);
	}
	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		j = arr[i];
		arr[i] = brr[i];
		brr[i] = j;
	}
	printf("数组内容交换后：\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", brr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
