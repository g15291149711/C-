#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char *dst, const char *src)//返回char*，为了实现链式访问
{
	char * ret = dst;
	assert(dst != NULL);//健壮性
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
	printf("%s\n", my_strcpy(arr, "啦啦啦"));//链式访问
	system("pause");
	return 0;
}
