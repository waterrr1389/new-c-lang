#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int fib(int x);
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		int ret = 0;
//		int sec = 1;
//		int fst = 1;
//		int i = 0;
//		for (i = 3; i <= n; i++)
//		{
//			ret = fst + sec;
//			fst = sec;
//			sec = ret;
//		}
//		return ret;
//	}
//}
int main()
{
	int n = 0;
	for (n = 1; n <= 9; n++)
	{
		int j = 1;
		for (j = 1; j <= n; j++)
		{
			printf("%d*%d = %-2d ", n, j, n * j);
			
		}
		printf("\n");
	}
	return 0;
}