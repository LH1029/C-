#pragma once

//ͷ�ļ��İ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//���ŵĶ���
#define ROW 3
#define COL 3

//����������

//��ʼ�����̵�
void Init_two_dimensional(char two_dimensional[ROW][COL], int row, int col);

//��ӡ���̵ĺ���
void Display_two_dimensional(char two_dimensional[ROW][COL], int row, int col);

//�������
void Player_two_dimensional(char two_dimensional[ROW][COL], int row, int col);

//��������
void Computer_two_dimensional(char two_dimensional[ROW][COL], int row, int col);

//
//1. ���Ӯ�� - *
//2. ����Ӯ�� - #
//3. ƽ�� - Q
//4. ��Ϸ���� - C

//�ж���Ϸ�Ƿ�����Ӯ
char IsWin(char two_dimensional[ROW][COL], int row, int col);