#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	if (1 == *(char*)&a)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}


//#include<stdio.h>
//int check_sys(int a)
//{
//	return *(char*)&a;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys(a);
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}


#include<stdio.h>
int check_sys(int a)
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int a = 1;
	int ret = check_sys(a);
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
		printf("大端\n");
	return 0;
}