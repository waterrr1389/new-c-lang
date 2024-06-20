#pragma once
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#define ROW 3
#define COL 3
#define COUNT 2
void Game();
void SetGameBoard(char board[ROW][COL], int row, int col);
void DisplayGameBoard(char board[ROW][COL], int rol, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);