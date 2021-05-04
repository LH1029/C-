//#include <stdio.h>
//#include "game.h"
//
//void menu()
//{
//	printf("***************************\n");
//	printf("*******   1.play   ********\n");
//	printf("*******   0.exit   ********\n");
//	printf("***************************\n");
//}
//
//void game()
//{
//	//存储数据—存储二维数组
//	char two_dimensional[ROW][COL];
//	//初始化数组(空格)
//	Init_two_dimensional(two_dimensional, ROW, COL);
//	//打印棋盘
//	Display_two_dimensional( two_dimensional, ROW, COL);
//
//	//游戏当前状态
//	char ret = '\0';
//
//	while (1)
//	{
//		//玩家下棋
//		 Player_two_dimensional( two_dimensional, ROW, COL);
//		 Display_two_dimensional(two_dimensional, ROW, COL);
//		//判断是否玩家赢
//		 ret = IsWin(two_dimensional, ROW, COL);
//		 if ( ret !='C')
//		 {
//			 break;
//		 }
//		 //电脑下棋
//		 Computer_two_dimensional( two_dimensional, ROW, COL);
//		 Display_two_dimensional(two_dimensional, ROW, COL);
//		 //判断是否电脑赢
//		 ret = IsWin(two_dimensional, ROW, COL);
//		 if ( ret !='C')
//		 {
//			 break;
//		 }
//	}
//
//	if ('*' == ret)
//	{
//		printf("Player win！\n");
//	}
//	else if('#'==ret)
//	{
//		printf("Computer win....\n");
//	}
//	else
//	{
//		printf("The game a draw！\n");
//	}
//	Display_two_dimensional(two_dimensional, ROW, COL);
//}
//
//int main()
//{
//
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("Please enter the number：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("Finish the game!\n");
//			break;
//		default:
//			printf("Enter error number,Pelase enter again number!\n");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}