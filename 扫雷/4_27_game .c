#include "4_27_game.h"

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印棋盘
void Display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("----------扫雷游戏--------\n");
	//打印序号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------扫雷游戏--------\n");

}


//棋盘上布置雷

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

static int get_mine(char mine[ROWS][COLS],int x,int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
		+ mine[x][y - 1] + mine[x][y + 1]
		+ mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
			
			
}

//排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-COUNT)
	{
		printf("请输入排查的坐标:>");
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y <= col && y >= 1)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				//查看踩得雷
				Display(mine, row, col);
				break;
			}
			else
			{
				int count = get_mine(mine, x, y);
				show[x][y] = count + '0';
				//查看信息
				Display(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标不合法，请重新输入！！！\n");
		}

	}

	if (win == row*col - COUNT)
	{
		printf("恭喜你扫完所有雷！！！\n");
		Display(mine, row, col);
	}
	
	
}