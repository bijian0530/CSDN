#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
void menu()
{
	printf("******************\n");
	printf("**1.begin 0.exit**\n");
	printf("******************\n");
}
void game()
{
	int ret = 0;
	int num = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("����������\n");
		scanf("%d",&num);
		if (num == ret)
		{
			printf("congratulation\n");
			break;
		}
		else if (num < ret)
		{
			printf("��С��\n");
		}
		else
			 printf("�´���\n");
		break;
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d",&input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			game();
			break;
		default:
			break;
		}
	}while(input);
	return 0;
}