#pragma once
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#define ROW 5
#define COL 5
#define COUNT 4
void Game();
void SetGameBoard(char board[ROW][COL], int row, int col);
void DisplayGameBoard(char board[ROW][COL], int rol, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);