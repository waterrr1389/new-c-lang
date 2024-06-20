#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void Game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	SetGameBoard(board, ROW, COL);
	DisplayGameBoard(board, ROW, COL);
	while (1)
	{
	PlayerMove(board, ROW, COL);
	ret = IsWin(board, ROW, COL);
	if (ret != 'C')
		break;
	DisplayGameBoard(board, ROW, COL);
	ComputerMove(board, ROW, COL);
	ret = IsWin(board, ROW, COL);
	if (ret != 'C')
		break;
	DisplayGameBoard(board, ROW, COL);
	}
	if (ret == '#')
		printf("����Ӯ");
	if (ret == 'Q')
		printf("ƽ��");
	if (ret == '*')
		printf("���Ӯ");
}
void SetGameBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayGameBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//���д�ӡ��һ��һ��
	{
		int j = 0;//���д�ӡ
		for (j = 0; j < col; j++)
		{
			//��ӡ������
			printf(" %c ", board[i][j]);
			if (j < (col - 1))
				printf("|");
		}
		printf("\n");//ÿ�д�ӡ�����
		if(i < row-1)
		{
			for (j = 0; j < col; j++)
			{
				//��ӡ�ָ���
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("����ƶ�\n����������:");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && y >= 1 && x <= row && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
			printf("���걻ռ��,����������:");
			}
		}
		else
		{
			printf("����Ƿ�,����������:");
		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����ƶ�\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (x >=0 && y >=0 && x < row && y < col)
		{
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				break;
			}
		}
	}
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;//ROW
	int j = 0;//COL
	int count_player = 0;
	int count_computer = 0;
	//������
	for (i = 0; i < row - 1; i++)
	{	 
		for (j = 0, count_player = 0, count_computer = 0; j < col-1; j++)
		{
			if (board[i][j] == '*')
			{
				if (board[i][j] == board[i][j + 1] && board[i][j] != ' ')
				{
					count_player++;
				}
				if (count_player == COUNT)
				{
					return '*';
				}
			}
			if (board[i][j] == '#')
			{
				if (board[i][j] == board[i][j + 1] && board[i][j] != ' ')
				{
					count_computer++;
				}
				if (count_player == COUNT)
				{
					return '#';
				}
			}
			if (board[i][j] == ' ')
				continue;
		}	
	}
	//������
	for (j = 0; j < row - 1; j++)
	{

		for (i = 0, count_player = 0, count_computer = 0; i < col - 1; i++)
		{
			if (board[i][j] == '*')
			{
				if (board[i][j] == board[i+1][j] && board[i][j] != ' ')
				{
					count_player++;
				}
				if (count_player == COUNT)
				{
					return '*';
				}
			}
			if (board[i][j] == '#')
			{
				if (board[i][j] == board[i+1][j] && board[i][j] != ' ')
				{
					count_computer++;
				}
				if (count_player == COUNT)
				{
					return '#';
				}
			}
			if (board[i][j] == ' ')
				continue;
		}
	}
	//б����
	for (i = 0; i < row - 1; i++)
	{

		for (j = 0, count_player = 0, count_computer = 0; j < col - 1; j++)
		{
			if (board[i][j] == '*')
			{
				if (board[i][j] == board[i+1][j + 1] && board[i][j] != ' ')
				{
					count_player++;
				}
				if (count_player == COUNT)
				{
					return '*';
				}
			}
			if (board[i][j] == '#')
			{
				if (board[i][j] == board[i+1][j + 1] && board[i][j] != ' ')
				{
					count_computer++;
				}
				if (count_player == COUNT)
				{
					return '#';
				}
			}
			if (board[i][j] == ' ')
				continue;
		}
	}
	
	//�ж��Ƿ�ƽ��
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	//��ƽ�־ͼ���
	else
	{
		return 'C';
	}
}
int IsFull(char board[ROW][COL], int row, int col)
//isfull  return 1
//not full else return 0
{
	int full = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')
			{
				full++;
			}
		}
	}
	if (full == row * col)
		return 1;
	else
		return 0;
}
	