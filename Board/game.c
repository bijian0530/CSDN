#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void InitBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			Board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//打印数据
		for (j = 0; j < col; j++)
		{
			printf(" %c ");
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
			}
			if (j < col - 1)
			{
				printf("|");
			}
		}
	}
}

void PlayerMove(char Board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走\n");
	while (1)
	{
		printf("请输入坐标\n");
		scanf("%d%d",&x,&y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (Board[x - 1][y - 1]== ' ')
			{
				Board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已经被占用\n");
			}
		}
		else
		{
			printf("输入错误\n");
		}
	}
}


void ComputerMove(char Board[ROW][COL], int row, int col)
{
	printf("电脑走\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (Board[x][y]== ' ')
		{
			Board[x][y] = '#';
			break;
		}
	}
}

int is_full(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (Board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char checkwin(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2] &&
			Board[i][0] != ' ')
		{
			return Board[i][0];
		}
	}
	for (j = 0; j < col; j++)
	{
		if (Board[0][j] == Board[1][j] && Board[1][j] == Board[2][j] &&
			Board[0][j] != ' ')
		{
			return Board[0][j];
		}
	}
	if (Board[0][0] == Board[1][1]&& Board[1][1] == Board[2][2]
		&& Board[1][1]!=' ')
	{
		return Board[0][0];
	}
	if (Board[2][0] == Board[1][1] && Board[1][1] == Board[0][2]
		&& Board[1][1] != ' ')
	{
		return Board[1][1];	
	}
	if (is_full(Board,row,col) == 1)
	{
		return 'Q';
	}
	return 'C';
}