#include <stdio.h>
#include <string.h>

//һ.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void print(int n)
//{
//	if (n > 9)
//	
//		print(n / 10);
//	
//	printf("%d\n", n%10);
//}
//
//int main()
//{
//	print(199);
//}

//��.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//�ݹ�
//int jiecheng1(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	return jiecheng1(n - 1)*n;
//}
//
////�ǵݹ�
//int jiecheng2(int n)
//{
//	int i = 1;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//
//int main()
//{
//	printf("�ݹ鷽ʽ:%d\n",jiecheng1(5));
//	printf("�ǵݹ鷽ʽ:%d\n",jiecheng2(5));
//}


//��.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ݹ�
//int str1(char s[])
//{
//	if ('\0' == *s)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + str1(s + 1);
//	}
//}
//�ǵݹ�
//int str2(char s[])
//{
//	int count = 0;
//	while (0 != *s)
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//int main()
//{
//	char s[] = "lihao";
//	printf("�ݹ�:%d\n",str1(s));
//	printf("�ǵݹ�:%d\n", str2(s));
//}


// ��.�������ַ����е��ַ��������У����������ӡ��
// �ݹ�
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	*(arr + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//}

//�ǵݹ�
//void reverse_string(char *arr)
//{
//	char *left = arr;
//	char *right = arr+strlen(arr) - 1;
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//	}
//}

//��.дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	printf("%d\n",DigitSum(1729));
//}


//��.��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//double pow1(double n, double k)
//{
//	if (k == 0)
//	{
//		return 1.0;
//	}
//	else if (k > 0)
//	{
//		return n*pow1(n, k - 1);
//	}
//	else
//	{
//		return 1.0 /( n*pow1(n, -k));
//	}
//
//}
//
//int main()
//{
//	double n = 0;
//	double k = 0;
//	scanf("%lf %lf", &n, &k);
//	printf("%lf", pow1(n, k));
//
//	return 0;
//}

//��.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//�ݹ�
//int Fibonacci(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}

//�ǵݹ�
//int Fibonacci(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d\n", Fibonacci(i));
//	return 0;
//}