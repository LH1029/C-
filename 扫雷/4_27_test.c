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

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//��ӡ����(��������Ϣ�����̲���ӡ)
	Display(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);
	//Display(mine, ROW, COL);(��Ҫ�Լ�����ʱ���ӡ)

	//����
	FindMine(mine, show, ROW, COL);

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�������\n");
			break;
		}

	} while (input);


	return 0;
}
