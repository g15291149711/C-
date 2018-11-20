#include<stdio.h.>
#include<stdlib.h>
//·Çµİ¹é
//int my_strlen(char *str)
//{
//	int i = 0;
//	while ('\0' != *str)
//	{
//		i++;
//		str++;
//	}
//	return i;
//
//}
//int main()
//{
//	int red = 0;
//	char  *p = "abcde";
//	red = my_strlen(p);
//	printf("%d\n", red);
//	system("pause");
//	return 0;
//}
//µİ¹é
int my_strlen(char *str)
{
	if ('\0' == *str)
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	int red = 0;
	char  *p = "abcde";
	red = my_strlen(p);
	printf("%d\n", red);
	system("pause");
	return 0;
}