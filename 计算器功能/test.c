#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.add   2.sub*****\n");
//	printf("*****3.mul   4.div*****\n");
//	printf("*****   0.exit   ******\n");
//	printf("***********************\n");
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int Sub(int x, int y)
//{
//	int z = x -y;
//	return z;
//}
//int Mul(int x, int y)
//{
//	int z = x * y;
//	return z;
//}
//int Div(int x, int y)
//{
//	int z = x / y;
//	return z;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择功能\n");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数\n");
//			scanf("%d%d",&x,&y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数\n");
//			scanf("%d%d",&x,&y);
//			printf("%d\n",Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("there is error\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}





//#include<stdio.h>
//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.add   2.sub*****\n");
//	printf("*****3.mul   4.div*****\n");
//	printf("*****   0.exit   ******\n");
//	printf("***********************\n");
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int Sub(int x, int y)
//{
//	int z = x - y;
//	return z;
//}
//int Mul(int x, int y)
//{
//	int z = x * y;
//	return z;
//}
//int Div(int x, int y)
//{
//	int z = x / y;
//	return z;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int (*Arr[5])(int,int) = {0,Add,Sub,Mul,Div};
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d",&input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数\n");
//			scanf("%d%d", &x, &y);
//			int ret = Arr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("exit\n");
//		}
//		else
//			printf("enter error\n");
//	} while (input);
//	return 0;
//}
//



#include<stdio.h>
void menu()
{
	printf("***********************\n");
	printf("*****1.add   2.sub*****\n");
	printf("*****3.mul   4.div*****\n");
	printf("*****   0.exit   ******\n");
	printf("***********************\n");
}
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int Sub(int x, int y)
{
	int z = x - y;
	return z;
}
int Mul(int x, int y)
{
	int z = x * y;
	return z;
}
int Div(int x, int y)
{
	int z = x / y;
	return z;
}
void calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入两个操作数\n");
	scanf("%d%d",&x,&y);
	printf("%d",pf(x,y));
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(Add);
			break;
		case 2:
			calc(Sub);
			break;
		case 3:
			calc(Mul);
			break;
		case 4:
			calc(Div);
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("enter error\n");
			break;
		}
	} while (input);
	return 0;
}