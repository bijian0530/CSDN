#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void menu()
{
	printf("****************************\n");
	printf("******1.add      2.del******\n");
	printf("******3.search   4.mod******\n");
	printf("******5.show     0.exit*****\n");
	printf("****************************\n");
}
int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con = {0};  //con是通讯录，里面包含：data指针和size，capaticy

	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d",&input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			DestoryContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}
	} while(input);
	return 0;
}