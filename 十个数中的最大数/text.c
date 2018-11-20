#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10] = { 0 };
	int i;
	int max;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
	{
		scanf_s("%d", &arr[i]);
	}
	max = arr[0];
	for (i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d", max);
	system("pause");
	return 0;
}
//int main()
//{
//	int i;
//	int max;
//	int arr[10];
//	printf("请输入10个数\n"); 
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	max = arr[0];//把arr[0]赋值给max
//	for (i = 1; i < 10; i++)//因为arr[0]已经赋值给max所以i从1开始
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);
//	system("pause");
//	return 0;
//}