#pragma once

//头文件
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COL 9
#define ROW 9

#define COLS COL+2
#define ROWS ROW+2

#define  COUNT 10

//初始化棋盘
void InitBoard(char board[ROWS][COLS],int rows,int cols, char set);

//打印棋盘
void Display(char board[ROWS][COLS],int row,int col);

//布置雷
void SetMine(char board[ROWS][COLS], int row, int col);

//排雷
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);