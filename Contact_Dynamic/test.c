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
	//����ͨѶ¼
	struct Contact con = {0};  //con��ͨѶ¼�����������dataָ���size��capaticy

	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��\n");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("���������������\n");
			break;
		}
	} while(input);
	return 0;
}