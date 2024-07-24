#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	printf("%d\n", sum / 10);
//	return 0;
//}

//void print(int arr1[], int arr2[])
//{
//	int j = 0;
//	for (j = 0; j < 5; j++)
//	{
//		printf("%d ", arr1[j]);
//	}
//	printf("\n");
//	for (j = 0; j < 5; j++)
//	{
//		printf("%d ", arr2[j]);
//	}
//	printf("\n");
//}
//void Swap(int arr1[], int arr2[])
//{
//	int tmp[5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		tmp[i] = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp[i];
//	}
//
//}
//int main()
//{
//	int arr1[5] = { 1,3,5,7,9 };
//	int arr2[5] = { 2,4,6,8,10 };
//	print(arr1, arr2);
//	Swap(arr1, arr2);
//	print(arr1, arr2);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	while (b != 0)
//	{
//		int tmp = a % b;//ำเสý
//		a = b;
//		b = tmp;
//	}
//	printf("%d", a);
//	return 0;
//}
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	int j = sz - 1;
//	int tmp = 0;
//	while (i <= j)
//	{
//		tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//		i++, j--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//int main()
//{
//	float sum = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 100; i = i + 2)
//	{
//		sum = sum + 1.0 / i;
//	}
//	for (j = 2; j <= 100; j = j + 2)
//	{
//		sum = sum - 1.0 / j;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}