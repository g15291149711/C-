#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char *dst, const char *src)//����char*��Ϊ��ʵ����ʽ����
{
	char * ret = dst;
	assert(dst != NULL);//��׳��
	assert(src != NULL);
	while (*dst++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr[20] = "**************";
	printf("%s\n", my_strcpy(arr, "������"));//��ʽ����
	system("pause");
	return 0;
}
