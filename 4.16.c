#include <stdio.h>
//一.判断润年
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int is_leap_year(int x);
//
//	if (is_leap_year(i) == 1)
//	{
//		printf("%d是润年", i);
//	}
//	else
//	{
//		printf("不是润年");
//	}
//	return 0;
//}
//
//int is_leap_year(int x)
//{
//	if ((0 == x % 4 && 0 != x % 100) || x % 400 == 0)
//	{
//		return	1;
//	}
//	else
//	{
//		return 0;
//	}
//}


//二.交换数
//int main()
//{
//	int i = 0, j = 0;
//	void swap(int *pa, int *pb);
//	scanf("%d,%d", &i, &j);
//	printf("换数前:i=%d,j=%d\n", i, j);
//	swap(&i, &j);
//	printf("换数后:i=%d,j=%d\n", i, j);
//	return 0;
//}
//
//void swap(int *pa, int *pb)
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}


//三.乘法口诀表
//简单的指定的行，列相同

//void num_table(int x)
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d*%d=%2d", j, i, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int row = 0;
//	scanf("%d", &row);
//	num_table(row);
//	return 0;
//}


//感觉一个没有意义的代码
//void num_table(int x, int y)
//{
//	int i = 0, j = 0;
//
//	for (i = 1; i<=x; i++)
//	{
//		for (j = 1; j <= y; j++)
//		{
//				printf("%2d*%d=%2d ",i ,j, i*j);	
//		}
//		printf("\n");
//
//	}
//}
//
//int main()
//{
//	int row= 0, column = 0;
//	scanf("%d,%d", &row, &column);
//	num_table(row, column);
//	return 0;
//}
