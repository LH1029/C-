#include <stdio.h>	
//һ.��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
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
	//��.����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

	//int i = 1;
	//double k = 1.0,sum=0.0;
	//
	//for (i; i <= 100; i++)
	//{
	//	sum += k/i;
	//	k = -k;
	//}
	//printf("%lf", sum);

	
	//��.��10 �����������ֵ
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

	


	//��.�˷��ھ���
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
	//��.������Ϸ

//#include<stdio.h>
//#include<Windows.h>
//
//void menu()
//{
//	printf("*************************************\n");
//	printf("**********��ӭ������������Ϸ*********\n");
//	printf("**********    ��1����       *********\n");
//	printf("**********    ��0�˳�       *********\n");
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
//		printf("����������:");
//		scanf("%d", &guess);
//		if (guess < k)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > k)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ��,�¶���\n");
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
//		printf("���������ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ!\n");
//			break;
//		default:
//			printf("ѡ�����,����������\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//���ַ���������
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	printf("�������ҵ���(1~9)��");
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
//			printf("�ҵ����±�Ϊ:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("������û�и�����!!!\n");
//	}
//
//	return 0;
//}





