#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>//��Ҫ�����������ã���һ�������������飬�ڶ���������am��student
int my_strlen(const char *str)//�ַ�������
{
	assert(str);
	int len = 0;
	while (*str++)
	{
		len++;
	}
	return len;
}
void reverse(char *start, char *end)//��������
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
		reverse(p, str - 1);//���� am  student
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