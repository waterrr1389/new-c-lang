#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int tpp(int n)
//{
//	if (n > 0)
//		return n * tpp(n - 1);
//	else if (n == 0)
//		return 1;
//}
//int main (void) 
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = tpp(n);
//	printf("%d\n", ret);
//	return 0;
//}
//
//int main()
//{
//	int amout = 0;
//	printf("Enter a dollar amout: ", amout);
//	scanf("%d", &amout);
//	
//	
//	printf("$20: %d\n", amout / 20);
//	amout = amout - (amout / 20) * 20;
//
//	printf("$10: %d\n", amout / 10);
//	amout = amout - (amout / 10) * 10;
//
//	printf("$5: %d\n", amout / 5);
//	amout = amout - (amout / 5) * 5;
//
//	printf("$1: %d\n", amout / 1);
//	amout = amout - (amout / 1) ;
//	return 0;
//}

//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//	return 0;
//}
//int num(int n)
//{
//	return n + n / 2;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	count = num(n);
//	printf("%d\n", count);
//	return 0;
//}
//#include <math.h>
//is_lilynum(int n)
//{
//	int count = 1;//Î»Êý
//	int m = 0;
//	int i = 0;
//	int p = n;//nµÄ¿½±´
//	while (p / 10 > 0)
//	{
//		count++;
//		p /= 10;
//	}
//	for (i = 0, p=n; i < count; i++)
//	{
//		m += pow(p % 10, count);
//		p /= 10;
//	}
//	if (m == n)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	int n = 0;
//	for (n = 0; n < 100000; n++)
//	{
//		if (is_lilynum(n) == 1)
//		{
//			printf("%d\n", n);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 4;
//	int m = 5;
//	printf("%d %d\n", n, m);
//	n ^= m;
//	m ^= n;
//	n ^= m;
//	printf("%d %d\n", n, m);
//	return 0;
//}

#include<stdio.h>

//int main()
//{
//    int n = 0;
//    int i = 0;
//    int count = 0;
//    scanf("%d", &n);
//    for (i = 0; i < 32; i++)
//    {
//        if (((n >> i) & 1) == 1)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}

int main()
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d", ((n >> i) & 1));
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", ((n >> i) & 1));
	}
	return 0;
}