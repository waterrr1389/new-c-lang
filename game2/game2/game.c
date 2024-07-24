#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//��Ϸ����
void game()
{
	char mine[ROW][COL] = { 0 };
	char show[ROW][COL] = { 0 };
	char is_recursion[ROW][COL] = { 0 };
	SetBoard(mine,ROW,COL,'0');
	SetBoard(show, ROW, COL,'*');
	SetBoard(is_recursion, ROW, COL, '0');
	SetMine(mine, ROWS, COLS);
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	FindMine(mine,show, is_recursion,ROWS,COLS);
}
//��������
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
//��ʾ1-9
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ������
	for (j = 0; j < row - 1; j++)
	{
		printf("%d ", j);

	}
	printf("\n");
	//��ӡ����
	for (i = 1; i < row-1; i++)//row-1=10 col-1=10
	{
		printf("%d ", i);
		for (j = 1; j < col-1; j++)
		{	
			if (board[i][j] != '0')
			{
				printf("%c ", board[i][j]);
			}
			else
			{
				printf("%c ", ' ');
			}
		}
		printf("\n");
	}
	printf("\n");
}
//������
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
			board[x][y] = '1';//1��ʾ��
			count++;
		}
	}
}


//����
void FindMine(char mine[ROW][COL], char show[ROW][COL], char is_recursion[ROW][COL], int rows, int cols)
{
	int x = 0;
	int y = 0;
	int count = 0;
	printf("����������\n");
	while (count < (ROWS * COLS - EASY_COUNT))
	{
		scanf("%d %d", &x, &y);
		if (show[x][y] != '*')
		{
			printf("���걻ռ��\n");
		}
		else
		{
			if (x >= 1 && x <= rows && y >= 1 && y <= cols)
			{
				if (mine[x][y] == '1')
				{
					printf("�㱻ը����\n");
					break;
				}
				else
				{
					count++;
					openmine(mine, show, is_recursion, x, y);
					DisplayBoard(show, ROW, COL);
				}
			}
			else
			{
				printf("����Ƿ�������������\n");
			}
		}	
	}
	if ((ROWS*COLS - EASY_COUNT )== count)
	{
		printf("��Ӯ�ˣ���Ϸ����");

	}
}

int get_mine_count(char mine[ROW][COL], int x, int y)
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
//���һ���Զ���չ
void openmine(char mine[ROW][COL], char show[ROW][COL], char is_recursion[ROW][COL], int x, int y)
{
	if (x > 0 && x < ROW - 1 && y>0 && y < COL - 1)
	{
		if (mine[x - 1][y] == '0' && get_mine_count(mine, x, y) == 0 && is_recursion[x][y] == '0')//ǰһ������������֤��
		{
			is_recursion[x][y] = '1';
			openmine(mine, show, is_recursion, x - 1, y - 1);
			openmine(mine, show, is_recursion, x - 1, y + 0);
			openmine(mine, show, is_recursion, x - 1, y + 1);
			openmine(mine, show, is_recursion, x + 0, y - 1);
			openmine(mine, show, is_recursion, x + 0, y + 1);
			openmine(mine, show, is_recursion, x + 1, y - 1);
			openmine(mine, show, is_recursion, x + 1, y + 0);
			openmine(mine, show, is_recursion, x + 1, y - 1);
		}
		else
		{
			show[x][y] = get_mine_count(mine, x, y) + '0';
		}
	}
}