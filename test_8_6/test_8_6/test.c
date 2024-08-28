#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//
//int main()
//{
//	char str1[] = "abc";
//	char str2[] = "abc";
//	const char* str3 = "abc";
//	const char* str4 = "abc";
//	if (str1 == str2)
//	{
//		printf("yes");
//	}
//
//	if (str3 == str4)
//	{
//		printf("ooo");
//	}
//
//
//	return 0;
//}

//
//int main()
//{
//    int i = 0;
//    char arr[40] = "d kakakk";
//    gets(arr);
//    int sz = strlen(arr);
//    for (i = sz - 1; i >= 0; i--)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}
//
//void rotation(char* str, int len, int n)
//{
//	int i = 0;
//	int j = 0;
//	char tmp = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < len - 1; j++)
//		{
//			tmp = str[j];
//			str[j] = str[j + 1];
//			str[j + 1] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int n = 0;
//	char str[20] = { 0 };
//	printf("输入一个字符串：\n");
//	scanf("%s", str);
//	int len = strlen(str);
//	左旋n个字符
//	printf("输入左旋字符的个数：\n");
//	scanf("%d", &n);
//	n %= len;
//	输出结果
//	rotation(str, len, n);
//	printf("%s\n", str);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    int left = 0;
//    int right = 0;
//    char arr[10000] = { 0 };
//    gets(arr);
//    int sz = strlen(arr);
//    right = sz - 1;
//    while (left <= right)
//    {
//        char tmp = arr[right];
//        arr[right] = arr[left];
//        arr[left] = tmp;
//        left++, right--;
//    }
//    for (i = 0; i <= sz; i++)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}
//void test(int arr1[], int arr2[])
//{ 
//	int i = 0;
//	int j = 0;
//
//	/*for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}*/
//	for (i = 0, j = 1; i < 5; i += 1, j += 2)
//	{
//		arr2[i] = arr1[j];
//	}
//	for (i = 5, j = 0; i < 10; i += 1, j += 2)
//	{
//		arr2[i] = arr1[j];
//	}
//
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	test(arr1, arr2);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(int);
//	while(p < arr+sz)
//	{
//		printf("%d ", *p++);
//	}
//	return 0;
//}
//
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1; j++)
//		{
//			int tmp = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//
//	}
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,4,5,7,2,4,9,3,2 };
//	int sz = sizeof(arr) / sizeof(int);
//	bubble_sort(arr, sz);
//	int* p = arr;
//	while (p < arr + sz)
//	{
//		printf("%d ", *p++);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[5][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{4,5,6,7,8},{8,9,10,11,12} };
//

	//int left = 0;
	//int right = sizeof(arr[5]) / sizeof(int) - 1;
	//int up = 0;
	//int dn = sizeof(arr[5][5]) / sizof(arr[5]) - 1;
	//int num = 0;
	//
	//// similar to binary search O(n)
	//while (scanf("%d", &num) != EOF)
	//{
	//	while (left <= right && up <= dn)
	//	{
	//		int mid_c = left + (right - left) / 2;
	//		int mid_r = up + (up - dn) / 2;
	//		if (arr[mid_c] < num)
	//		{
	//			left = mid_c + 1;
	//		}
	//		else if (arr[mid_c] > num)
	//		{
	//			right = mid_c - 1;
	//		}
	//		else if (arr[mid_c] < num && num < arr[mid_c + 1])
	//		{

	//		}
	//	}
	//}

//}
//
//int main()
//{
//	int i = 0;//current row
//	int j = 0;//current col
//	int n = 7;
//	//scanf("%d", &n);//max rows&&cols
//	int arr[20][20] = {0};
//	while (i < n)
//	{
//		j = 0;
//		while (j <= i)
//		{
//			if (j == 0 || j == i)
//			{
//				arr[i][j] = 1;
//				printf("1 ");
//			}
//			else 
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//				printf("%d ", arr[i][j]);
//			}
//			j++;
//		}
//		i++;
//		printf("\n");
//	}
//	return 0;
//}
//void findonly(int* arr)
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	for (i = 0; i < 10; i++)
//	{
//		n = arr[i];
//		for (j = 0; j < 10; j++)
//		{
//			if (i != j)
//			{
//				if (n ^ arr[j] == 0)
//				{
//					break;
//				}
//			}
//			
//		}
//		if (j == 9)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
//	findonly(arr);
//	return 0;
//}

//int (* (*p)[10])(int*);】
//
//int main()
//{
//	char kil = 'a';
//	while (kil <= 'd')
//	{
//		if ((kil != 'a') + (kil == 'c') + (kil == 'd') + (kil != 'd') == 3)
//		{
//			printf("killer is %c\n", kil);
//			break;
//		}
//		kil++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int killer = 0;
//	//分别假设凶手是a,b,c,d,看谁是凶手时满足3个人说了真话，一个人说了假话
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("凶手是：%c", killer);
//	}
//	return 0;
//}

//int func(int arr[][5], int i, int j, int key)
//{
//	while (i < 5 && j >= 0)
//	{
//		if (arr[i][j] < key)
//		{
//			i++;
//		}
//		else if (arr[i][j] > key)
//		{
//			j--;
//		}
//		else if (arr[i][j] == key)
//		{
//			return 1;
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[5][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{4,5,6,7,8},{8,9,10,11,12} };
//	int i = 0;
//	int j = sizeof(arr[5]) / sizeof(arr[0][0]) - 1;
//	int key = 0;
//	scanf("%d", &key);
//	
//	if (func(arr, i, j, key))
//	{
//		printf("找到了");
//	}
//	else
//	{
//		printf("没找到");
//	}
//	return 0;
//}
//
//void lr2()
//{
//	printf("play lr2");
//}
//void naki()
//{
//	printf("fuck nakixii");
//}
//void osu()
//{
//	printf("play osu");
//}
//int main()
//{
//	int input = 0;
//	void (*pf[4]) () = { 0, naki, osu, lr2 };//pf[4]
//
//	do {
//		printf("********************\n");
//		printf("****1. nakixii  ****\n");
//		printf("****2.   osu    ****\n");
//		printf("****3.   lr2    ****\n");
//		printf("****0.   exit   ****\n");
//		scanf("%d", &input);
//		(*pf[input])();
//
//	} while (input);
//
//	return 0;
//}

int main() 
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,7 };
	int i = 0;
	int tmp = 0;
	int sz = sizeof(arr) / sizeof(int);
	for (i = 0; i < sz; i++)
	{
		tmp ^= arr[i];
	}

	int n1 = 0;
	int n2 = 0;
	int loc = 0;

	for (i = 0; i < 32; i++)
	{
		if (((tmp >> i) & 1) == 1)
		{
			loc = i;
		}
	}

	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> loc) & 1) == 1)
		{
			n1 ^= arr[i];
		}
		else
		{
			n2 ^= arr[i];
		}
	}
	printf("%d %d", n1, n2);

	return 0;
}