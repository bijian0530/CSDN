#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void left_move(char* str, int k)
{
	int i = 0;
	int len = strlen(str);
	for (i = 0; i < k; i++)
	{
		char tmp = *str;
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			*(str+ j) = *(str+j+1);
		}
		*(str + len - 1) = tmp;
	}
}
int is_left_move(char* str1, char* str2)
{
	int len = strlen(str1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		left_move(str1,1);
		int ret = strcmp(str1, str2);
		if (ret == 0)
			return 1;
	}
	return 0;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1,arr2);
	if (ret == 1)
		printf("yes\n");
	else 
		printf("no\n");
	return 0;
}


//#include<stdio.h>
//#include<string.h>
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	strncat(str1,str1,6);
//	char* ret = strstr(str1,str2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdef";
//	int ret = is_left_move(arr1,arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//		printf("no\n");
//	return 0;
//}