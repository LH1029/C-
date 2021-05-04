#include <stdio.h>	
//一.编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//
//	int i = 1, count = 0;
//
//	for (i; i <= 100; i++)
//	{
//		if (9 == i % 10)
//		{
//			count++;
//		}
//		if (9 == i / 10)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}
	//二.计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

	//int i = 1;
	//double k = 1.0,sum=0.0;
	//
	//for (i; i <= 100; i++)
	//{
	//	sum += k/i;
	//	k = -k;
	//}
	//printf("%lf", sum);

	
	//三.求10 个整数中最大值
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//}

	


	//四.乘法口诀表
//int main()
//{
//	int i = 1, j = 1;
//	for (i; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
	//五.猜字游戏

//#include<stdio.h>
//#include<Windows.h>
//
//void menu()
//{
//	printf("*************************************\n");
//	printf("**********欢迎来到猜字谜游戏*********\n");
//	printf("**********    按1进入       *********\n");
//	printf("**********    按0退出       *********\n");
//	printf("*************************************\n");
//}
//
//void game()
//{
//	int k = rand() % 100 + 1;
//	int guess = 0;
//
//	while (1)
//	{
//		printf("请输入数字:");
//		scanf("%d", &guess);
//		if (guess < k)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > k)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你,猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("请输入你的选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏!\n");
//			break;
//		default:
//			printf("选择错误,请重新输入\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//二分法查找数组
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	printf("输入想找的数(1~9)：");
//	scanf("%d",&n);
//	int k = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = k - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了下标为:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("数组中没有该数字!!!\n");
//	}
//
//	return 0;
//}





