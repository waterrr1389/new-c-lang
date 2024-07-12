#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define ROW 11
#define COL 11
#define ROWS 9
#define COLS 9
#include <time.h>
#define EASY_COUNT 80


void game();
void SetBoard(char board[ROW][COL], int rows, int cols, char target);
void DisplayBoard(char board[ROW][COL], int row, int col);
void FindMine(char mine[ROW][COL], char show[ROW][COL], int row, int col);
void SetMine(char board[ROW][COL], int rows, int cols);
int get_my_count(char mine[ROW][COL], int x, int y);
void openmine(char mine[ROW][COL], char show[ROW][COL], int x, int y);
