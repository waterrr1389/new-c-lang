#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void print(int a)
//{
//	
//	if(a/10 != 0)
//	print(a / 10);
//	printf("%d ", a % 10);
//}
//
//int main()
//{
//	int a = 0; 
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
//int sum(int n)
//{
//	int ret = 0;
//	if (n == 1)
//		return 1;
//	if (n > 1)
//		ret = n * sum(n - 1);
//		return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = sum(n);
//	printf("%d", ret);
//	return 0;
//}
// 
// 
//int length(char arr[])
//{
//	int i = 0;
//	if (*arr != '\0')
//		return 1 + length(arr+1);
//	if (*arr == '\0')
//		return 0;
//}
//
//int main()
//{
//	char arr[20] = {0};
//	scanf("%s", arr);
//	int len = length(arr);
//	printf("%d", len);
//	return 0;
//}
//int my_strlen(char arr[])
//{
//	int i = 0;//arr 1 2 \0
//	if (arr[i] != '\0')
//		return 1 + my_strlen(arr+1);
//	if (arr[i] == '\0')
//		return 0;
//}
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*(arr) != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
// }
//int DigitSum(int n)
//{
//	if (n / 10 != 0)
//		return n%10 + DigitSum(n / 10);
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}
//float Pow(int n, int k)
//{
//	if (k > 1)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1.0;
//	else if (0 < k && k <= 1)
//		return n;
//	else
//		return 1.0 / Pow(n, -k);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n,&k);
//	float ret = Pow(n,k);
//	printf("%f\n", ret);
//	return 0;
//}
int fib(n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d", ret);
	return 0;
}