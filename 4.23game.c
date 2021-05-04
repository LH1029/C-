//#include "game.h"
//
//
//void Init_two_dimensional(char two_dimensional[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			two_dimensional [i][j] = ' ';
//		}
//	}
//}
//
//void Display_two_dimensional(char two_dimensional[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", two_dimensional[i][j]);
//			if (j < col - 1)
//			{
//				printf("|");
//			}
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if(j<col-1)
//				{
//					printf("|");
//				}
//			}
//			printf("\n");
//		}
//	}
//}
//
//
//void Player_two_dimensional(char two_dimensional[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//
//	printf("Please players to play chess:\n");
//	while (1)
//	{
//		printf("Please row and column:");
//		scanf("%d %d", &i, &j);
//		//判断一下行和列合法性
//		if (i <= row&&i >= 1 && j <= col&&j >= 1)
//		{
//			//合法坐标
//			//判断是否已经有棋子
//			if (' ' == two_dimensional[i-1][j-1])
//			{
//				two_dimensional[i-1][j-1] = '*';
//				break;
//			}
//			else
//			{
//				printf("Have been occupied,Pelase enter again number!\n");
//			}
//		}
//		else
//		{
//			printf("Enter error row and column , Pelase enter again number!\n");
//		}
//
//	}
//}
//
//void Computer_two_dimensional(char two_dimensional[ROW][COL], int row, int col)
//{
//	printf("The computer to play chess！\n");
//
//
//	while (1)
//	{
//		int i = rand() % row;
//		int j = rand() % col;
//
//		if (' ' == two_dimensional[i][j])
//		{
//			two_dimensional[i][j] = '#';
//			break;
//		}
//	}
//}
//
//int isFull(char two_dimensional[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; i++)
//		{
//			if (' ' == two_dimensional[i][j])
//			{
//				return 0;
//			}
//		}
//	}
//}
//
//
//char IsWin(char two_dimensional[ROW][COL], int row, int col)
//{
//	int i = 0;
//	//行
//	for (i = 0; i < row; i++)
//	{
//		if (two_dimensional[i][0] == two_dimensional[i][1] && two_dimensional[i][1] == two_dimensional[i][2] && two_dimensional[i][2] != ' ')
//		{
//			return two_dimensional[i][0];
//		}
//	}
//
//	//列
//	for (i = 0; i < col; i++)
//	{
//		if (two_dimensional[0][i] == two_dimensional[1][i] && two_dimensional[1][i] == two_dimensional[2][i] && two_dimensional[2][i] != ' ')
//		{
//			return two_dimensional[0][i];
//		}
//	}
//
//	//对角线
//	if (two_dimensional[0][0] == two_dimensional[1][1] && two_dimensional[1][1] == two_dimensional[2][2] && two_dimensional[2][2] != ' ')
//	{
//		return two_dimensional[1][1];
//	}
//	if (two_dimensional[0][2] == two_dimensional[1][1] && two_dimensional[1][1] == two_dimensional[2][0] && two_dimensional[2][0] != ' ')
//	{
//		return two_dimensional[1][1];
//	}
//
//	//判断平局
//	int ret = isFull(two_dimensional, ROW, COL);
//	if (1 == ret)
//	{
//		return 'Q';
//	}
//
//	//继续
//	return 'C';
//}
//
//
