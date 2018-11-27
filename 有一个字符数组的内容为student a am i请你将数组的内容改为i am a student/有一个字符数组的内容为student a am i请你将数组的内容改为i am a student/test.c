#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>//主要是用俩次逆置，第一次逆置整个数组，第二次是逆置am和student
int my_strlen(const char *str)//字符串长度
{
	assert(str);
	int len = 0;
	while (*str++)
	{
		len++;
	}
	return len;
}
void reverse(char *start, char *end)//逆置数组
{
	assert(start);
	assert(end);
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
void str_reverse(char *str)
{
	assert(str);
	int len = my_strlen(str);
	reverse(str, str + len - 1);
	while (*str != '\0')
	{
		char *p = str;
		while ((*str != ' ') && (*str != '\0'))
		{
			str++;
		}
		reverse(p, str - 1);//逆置 am  student
		if (*str != '\0')
		{
			str++;
		}
	}

}
int main()
{
	char arr[] = "student a am i";
	str_reverse(arr);
	printf("%s",arr);
	system("pause");
	return 0;
}