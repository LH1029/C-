#pragma once

//ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COL 9
#define ROW 9

#define COLS COL+2
#define ROWS ROW+2

#define  COUNT 10

//��ʼ������
void InitBoard(char board[ROWS][COLS],int rows,int cols, char set);

//��ӡ����
void Display(char board[ROWS][COLS],int row,int col);

//������
void SetMine(char board[ROWS][COLS], int row, int col);

//����
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);