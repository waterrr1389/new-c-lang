#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//游戏函数
void game()
{
	char mine[ROW][COL] = { 0 };
	char show[ROW][COL] = { 0 };
	SetBoard(mine,ROW,COL,'0');
	SetBoard(show, ROW, COL,'*');
	SetMine(mine, ROWS, COLS);
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	FindMine(mine,show,ROWS,COLS);
}
//设置数组
void SetBoard(char board[ROW][COL], int row, int col,char target)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = target;
		}
	}
}
//显示1-9
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印坐标行
	for (j = 0; j < row - 1; j++)
	{
		printf("%d ", j);

	}
	printf("\n");
	//打印数组
	for (i = 1; i < row-1; i++)//row-1=10 col-1=10
	{
		printf("%d ", i);
		for (j = 1; j < col-1; j++)
		{	
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
//设置雷
void SetMine(char board[ROW][COL], int rows, int cols)
{
	int x = 0;
	int y = 0;
	int count = 0;
	while (count < EASY_COUNT)
	{
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		if ( x >= 1 && x <= rows && y >= 1 && y <= cols && board[x][y] == '0')
		{
			board[x][y] = '1';//1表示雷
			count++;
		}
	}
}


//找雷
void FindMine(char mine[ROW][COL], char show[ROW][COL], int rows, int cols)
{
	int x = 0;
	int y = 0;
	int count = 0;
	printf("请输入坐标\n");
	while (count < (ROWS * COLS - EASY_COUNT))
	{
		scanf("%d %d", &x, &y);
		if (show[x][y] != '*')
		{
			printf("坐标被占用\n");
		}
		else
		{
			if (x >= 1 && x <= rows && y >= 1 && y <= cols)
			{
				if (mine[x][y] == '1')
				{
					printf("你被炸死了\n");
					break;
				}
				else
				{
					count++;
					openmine(mine, show, x, y);
					DisplayBoard(show, ROW, COL);
				}
			}
			else
			{
				printf("输入非法，请重新输入\n");
			}
		}	
	}
	if ((ROWS*COLS - EASY_COUNT )== count)
	{
		printf("你赢了，游戏结束");

	}
}

int get_my_count(char mine[ROW][COL], int x, int y)
{
	return (mine[x - 1][y - 1] +
		    mine[x - 1][y + 0] +
		    mine[x - 1][y + 1] +
		    mine[x + 0][y - 1] +
		    mine[x + 0][y + 1] +
		    mine[x + 1][y - 1] +
		    mine[x + 1][y + 0] +
		    mine[x + 1][y + 1] - 8 * '0');
}
//点击一下自动扩展
void openmine(char mine[ROW][COL], char show[ROW][COL], int x, int y)
{
	if (0 == (show[x][y] = get_my_count(mine, x, y)) )
	{
		show[x][y] = ' ';
		
			if ((x - 1) > 0 && (y - 1) > 0 && (show[x - 1][y - 1] == '*'))
			{
				openmine(mine, show, x - 1, y - 1);
			}
			if ((x - 1) > 0 && y && (show[x - 1][y] == '*'))
			{
				openmine(mine, show, x - 1, y);
			}
			if ((x - 1) > 0 && (y + 1) <= COL && (show[x - 1][y + 1] == '*'))
			{
				openmine(mine, show, x - 1, y + 1);
			}
			if ((x) > 0 && (y - 1) > 0 && (show[x][y - 1] == '*'))
			{
				openmine(mine, show, x, y - 1);
			}
			if ((x) > 0 && (y + 1) <= COL && (show[x][y + 1] == '*'))
			{
				openmine(mine, show, x, y + 1);
			}
			if ((x + 1) <= ROW && (y - 1) > 0 && (show[x + 1][y - 1] == '*'))
			{
				openmine(mine, show, x + 1, y - 1);
			}
			if ((x + 1) <= ROW && y && (show[x + 1][y] == '*'))
			{
				openmine(mine, show, x + 1, y);
			}
			if ((x + 1) <= ROW && (y + 1) <= COL && (show[x + 1][y + 1] == '*'))
			{
				openmine(mine, show, x + 1, y + 1);
			}
	}
	else
	{
		show[x][y] = get_my_count(mine, x, y) + '0';
	}
}