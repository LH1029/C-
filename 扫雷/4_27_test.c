#include "4_27_game.h"

void menu()
{
	printf("*********************************\n");
	printf("*********    1.play    **********\n");
	printf("*********    0.exit    **********\n");
	printf("*********************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//打印棋盘(布置雷信息的棋盘不打印)
	Display(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);
	//Display(mine, ROW, COL);(需要自己看的时候打印)

	//排雷
	FindMine(mine, show, ROW, COL);

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}

	} while (input);


	return 0;
}
