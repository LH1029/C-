#include <stdio.h>

//一.冒泡排序
//void num_sort(int a[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int flag=0;
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//				flag = 1;
//			}
//		}
//		if (0 == flag)
//		{
//			printf("数组是整齐顺序的不用排序");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	num_sort(arr,sz);//进行从大到小的排序
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//二.创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
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

//实现print()  打印数组的每个元素
//void print(int arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//实现reverse()  函数完成数组元素的逆置。
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//三.交换数组
//
//void swap_arr(int a[], int b[], int sz)
//{
//	int i = 0;
//	for (i = 0; i <sz ; i++)
//	{
//		int temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[5] = { 5,4,3,2,1 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	printf("%d\n", sz);
//	swap_arr(a, b, sz);
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	printf("\n");
//	return 0;
//}
//四.三子棋

