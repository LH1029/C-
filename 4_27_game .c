#include "4_27_game.h"

//��ʼ������
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

//��ӡ����
void Display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("----------ɨ����Ϸ--------\n");
	//��ӡ���
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
	printf("----------ɨ����Ϸ--------\n");

}


//�����ϲ�����

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

//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-COUNT)
	{
		printf("�������Ų������:>");
		scanf("%d %d", &x, &y);
		//�ж�����Ϸ���
		if (x >= 1 && x <= row && y <= col && y >= 1)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				//�鿴�ȵ���
				Display(mine, row, col);
				break;
			}
			else
			{
				int count = get_mine(mine, x, y);
				show[x][y] = count + '0';
				//�鿴��Ϣ
				Display(show, row, col);
				win++;
			}
		}
		else
		{
			printf("���겻�Ϸ������������룡����\n");
		}

	}

	if (win == row*col - COUNT)
	{
		printf("��ϲ��ɨ�������ף�����\n");
		Display(mine, row, col);
	}
	
	
}