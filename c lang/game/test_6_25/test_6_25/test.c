#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 3;
//	//a & 1 得到最低位
//	//  000000000 00000000 00000000 00000011 1的原码 反码 补码 相同
//	//1:000000000 00000000 00000000 00000001
//	//								00000001 -> 1
//	//a | 0
//	//  000000000 00000000 00000000 00000011
//	//1:000000000 00000000 00000000 00000001
//	//								00000011 -> 3
//	int n = 0;
//	int count = 0;
//	for (n = 0; n < 32; n++)
//	{
//		if ((a & 1) == 1)
//		{
//			a = a >> 1;
//			count++;
//		}	
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int count(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return count(n - 1) + count(n - 2);
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//
//	int method = count(n);
//	//
//	printf("%d\n", method);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	//
//	int arr[50] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	//print
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != ' ')
//			printf("%d ", arr[i]);
//	}
//	printf("\n");
//	//delete
//	int delete = 0;
//	scanf("%d", &delete);
//	//print
//	for (i = 0; i < n; i++)
//	{
//		if(arr[i] != delete)
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int get_max(int* p)
//{
//	int i = 1;
//	int max = p[0];
//	while (i < 5)
//	{
//		if (max < p[i])
//		{
//			max = p[i];
//		}
//		i++;
//	}
//	return max;
//}
//
//int get_min(int* p)
//{
//	int i = 1;
//	int min = p[0];
//	while (i < 5)
//	{
//		if (min > p[i])
//		{
//			min = p[i];		
//		}
//		i++;
//	}
//	return min;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[5] = { 0 };
//	int max = 0;
//	int min = 100;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (max < arr[i])
//			max = arr[i];
//		if (min > arr[i])
//			min = arr[i];
//	}
//
//	/*int max = get_max(arr);
//	int min = get_min(arr);*/
//	printf("%d\n", max - min);
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if (ch > 64 && ch < 91)
//		printf("%c\n", ch + 32);
//	else
//		printf("%c\n", ch - 32);
//
//	return 0;
//}
int is_lilynumber(int i)
{
	return (i / 10) * (i % 10)
		+ (i / 100) * (i % 100)
		+ (i / 1000) * (i % 1000)
		+ (i / 10000) * (i % 10000);
}

int main()
{
	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		if (i == is_lilynumber(i))
			printf("%d ", i);
	}
	return 0;
}