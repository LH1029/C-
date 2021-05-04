#include <stdio.h>
#include <string.h>

//一.递归方式实现打印一个整数的每一位
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

//二.递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//递归
//int jiecheng1(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	return jiecheng1(n - 1)*n;
//}
//
////非递归
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
//	printf("递归方式:%d\n",jiecheng1(5));
//	printf("非递归方式:%d\n",jiecheng2(5));
//}


//三.递归和非递归分别实现strlen
//递归
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
//非递归
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
//	printf("递归:%d\n",str1(s));
//	printf("非递归:%d\n", str2(s));
//}


// 四.将参数字符串中的字符反向排列，不是逆序打印。
// 递归
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

//非递归
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

//五.写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19

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


//六.编写一个函数实现n的k次方，使用递归实现。
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

//七.递归和非递归分别实现求第n个斐波那契数
//递归
//int Fibonacci(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}

//非递归
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