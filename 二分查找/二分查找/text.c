#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0]) - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
			if (arr[mid] > k)
			{
				right = mid - 1;
			}
			else if (arr[mid] < k)
			{
				left = mid + 1;
			}
			else
			{
				printf("找到了下标为：%d\n",arr[mid]);
				break;
			}
	}
	if (left>right)
	{
		printf("找不到");
	}
	system("pause");
	return 0;
}