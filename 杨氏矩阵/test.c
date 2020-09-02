#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>          //杨氏矩阵中查找一个数字
//int  FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int ret = FindNum(arr,k,3,3);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//		printf("no\n");
//	return 0;
//}


#include<stdio.h>
int FindNum(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *py - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 5;
	int x = 3;
	int y = 3;
	int ret = FindNum(arr,k,&x,&y);
	if (ret == 1)
	{
		printf("yes\n");
		printf("下标是:%d %d\n",x,y);
	}
	else
		printf("no\n");
	return 0;
}