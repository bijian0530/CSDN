#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"


void menu()
{
	printf("******************t*****");
	printf("*****1.game  0.exit*****");
	printf("******************t*****");
}

void game()
{
	char Board[ROW][COL] = {0};
	InitBoard(Board,ROW,COL);
	DisplayBoard(Board, ROW, COL);

	while (1)
	{
		PlayerMove(Board,ROW,COL);
		char ret = checkwin(Board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(Board, ROW, COL);
		ComputerMove(Board,ROW,COL);
		ret = checkwin(Board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(Board, ROW, COL);
		if (ret == '*')
		{
			printf("���Ӯ\n");
		}
		else if (ret == '#')
		{
			printf("����Ӯ\n");
		}
		else if (ret=='Q')
		{
			printf("ƽ��\n");
		}
		DisplayBoard(Board, ROW, COL);
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("����������\n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
		default:
			printf("����������\n");
		}
	} while (input);
	return 0;
}