#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 50;
//	int m = 40;
//	int* p = &n;
//	*p = 10;
//	p = &m;
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,11 };
//	int* p = &arr[0];
//	printf("%d ", *(p+2)-(*p+0));
//	return 0;
//}
//int my_strlen(const char* str)
//{
//	char* p = str;
//	while (*p != 0)
//	{
//		p++;
//	}
//	return p - str;
//}
//
//
//int main()
//{
//	printf("%d\n", my_strlen("nakixii"));
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int i = 0;//row
//	int j = 0;//col
//	for (i = 1; i < 10; i++)
//	{
//		for (j = i; j < 10; j++)
//		{
//			printf("%dx%d ", i, j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int get_max(int* arr)
//{
//	int max = arr[0];
//	int i = 1;
//	while (i < 10)	
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	return max;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("%d", get_max(arr));
//	return 0;
//}

//

//int main()
//
//{
//
//	int n = 0;
//
//	float sum = 0;
//
//	int flag = 1;
//
//	for (n = 1; n <= 100; n++)
//
//	{
//
//		sum += (1.0 / n) * flag;
//
//		flag = -flag;
//
//	}
//
//	printf("%lf\n", sum);
//
//	return 0;
//
//}

//int main()
//{
//	int n = 0;
//	int count = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if ((n % 10 == 9) || (n / 10 == 9))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
#include<math.h>
int main()
{
	int n = 0;
	int m = 0;
	for (n = 101; n < 200; n++)
	{
		for (m = 2; m <= sqrt(n); m++)
		{
			if ( n % m == 0)
			{
				break;
			}
		}
		if (m > (int)sqrt(n))
		{
			printf("%d ", n);
		}
	}
	return 0;
}