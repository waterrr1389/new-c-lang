#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int get(int arr[], int n)
//{
//    int i = 0;
//    int max = 0;
//    int min = 0;
//    max = arr[0];
//    min = arr[0];
//    for (i = 0; i < n - 1; i++)//n-1 =9 i_max=8
//    {
//        if (arr[i] < arr[i + 1])
//        {
//            max = arr[i + 1];
//        }
//        if (arr[i] > arr[i + 1])
//        {
//            min = arr[i + 1];
//        }
//    }
//    return max - min;
//}
//
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    scanf("%d", &n);
//    int arr[10] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int sub = get(arr, n);
//    printf("%d\n", sub);
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    int arr1[n];
//    int arr2[m];
//    int arr3[m+n];//将arr1和arr2的数合并到arr3
//    int i = 0;
//    int j = 0;
//    int p = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (j = 0; j < m; j++)
//    {
//        scanf("%d", &arr2[j]);
//    }
//    int count = 0;
//    //合并数组
//    for (i = 0, j = 0; count < m + n; count++, p++)
//    {
//        if ((arr1[i] < arr2[j]) && i < n)
//        {
//            arr3[p] = arr1[i];
//            i++;
//        }
//        else if ((arr1[i] > arr2[j]) && j < m)
//        {
//            arr3[p] = arr2[j];
//            j++;
//        }
//        else if (arr1[i] == arr2[j])
//        {
//            arr3[p] = arr1[i];
//            i++, j++;
//        }
//        else if ((i == n || j == m))
//        {
//            if (i < n)
//            {
//                arr3[p] = arr1[i];
//            }
//            else if(j < m)
//            {
//                arr3[p] = arr2[j];
//            }
//        }
//    }
//    //输出合并后的数组
//    for (p = 0; p < m + n; p++)
//    {
//        printf("%d ", arr3[p]);
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[3] = { 0 };
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] > arr[i + 1] || arr[i] == arr[i + 1])
//        {
//            count++;
//        }
//    }
//    if (count == n - 1 || count == 0)
//    {
//        printf("sorted");
//    }
//    else
//    {
//        printf("unsorted");
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 5;
//    int i = 0;
//    int arr[5] = { 1,2,3,4,5 };
//    //scanf("%d", &n);
//    /*for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }*/
//    int del = 4;
//    //scanf("%d", &del);
//    int left = 0;
//    int right = n - 1;
//    
//    while (left <= right)
//    {
//        int mid = right + (left - right) / 2;
//        if (del < arr[mid])
//        {
//            right = mid - 1;
//        }
//        else if (del > arr[mid])
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            arr[mid] = EOF;
//            break;
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != EOF)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}
//int binaryserach_left(int* arr, int n, int num)
//{
//	int left = 0;
//	int right = n;
//	int mid = 0;
//	while (left < right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < num)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > num)
//		{
//			right = mid;
//		}
//		else if (arr[mid] == num)
//		{
//			right = mid;
//		}
//	}
//	if (left == n)
//		return -1;
//	return arr[left] == num ? left : -1;
//}

//int binaryserach_left(int* arr, int n, int num)
//{
//	int left = 0;
//	int right = n-1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < num)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > num)
//		{
//			right = mid-1;
//		}
//		else if (arr[mid] == num)
//		{
//			right = mid-1;
//		}
//	}
//	if (left == n || arr[left] != num)
//		return -1;
//	return left;
//}
//
//int binaryserach_right(int* arr, int n, int num)
//{
//	int left = 0;
//	int right = n - 1;
//	int mid = 0;
//	while (left <= right)// search [left,right]
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < num)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > num)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] == num)
//		{
//			left = mid + 1;
//		}
//	}
//	if (left == n || arr[right] != num)
//		return -1;
//	return left;
//}
//int main()
//{
//	int n = 13;
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//	int arr[13] = { 1,2,2,4,4,5,6,6,6,7,8,9,9 };
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	int ret_left = binaryserach_left(arr, n, num);
//	int ret_right = binaryserach_left(arr, n, num);
//	if (ret_left != EOF)
//	{
//		printf("左下标:%d\n", ret_left );
//	}
//	else
//	{
//		printf("查找失败");
//	}
//	return 0;
//}

#include <stdio.h>

int main() {
    int n = 0;
    int i = 0;
    int j = 0;
    while (scanf("%d", &n) != EOF)
    {
        char arr[20][20] = {0};
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                arr[i][j] = ' ';
            }
        }
        
        for (i = 0, j=0; i < n; i++, j++)
        {
                if (arr[i][j] == ' ')
                    arr[i][j] = '*';
        }
        for (i = 0, j = n-1; i < n; i++, j--)
        {
                if (arr[i][j] == ' ')
                    arr[i][j] = '*';
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%c", arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}