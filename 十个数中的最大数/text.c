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
//	printf("������10����\n"); 
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	max = arr[0];//��arr[0]��ֵ��max
//	for (i = 1; i < 10; i++)//��Ϊarr[0]�Ѿ���ֵ��max����i��1��ʼ
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