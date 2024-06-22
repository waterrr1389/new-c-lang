#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void bubble(int* arr,int sz)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	bubble(arr,sz);
//	int i = 0;
//	for(i=0;i<sz;i++)
//	printf("%d ",arr[i]);
//	return 0;
//}
//void init(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		arr[i] = 0 ;
//}
//void reverse(int* arr)
//{
//	int left = 0;
//	int right = 9;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//init(arr);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d ",arr[i]);
//	reverse(arr);
//	printf("\n");
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
void Swap(int arr1[], int arr2[])
{
	int i = 0;
	int tmp = 0;

	for (i = 0; i < 5; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}

int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 5,4,3,2,1 };
	Swap(arr1, arr2);
	int n = 0;
	for (n = 0; n < 5; n++)
		printf("%d ", arr1[n]);
	printf("\n");
	for (n = 0; n < 5; n++)
		printf("%d ", arr2[n]);
	return 0;
}