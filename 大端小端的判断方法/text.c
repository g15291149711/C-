#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
int check_sys()
{
	union
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	if (check_sys() == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���");
	}
	system("pause");
	return 0;
}