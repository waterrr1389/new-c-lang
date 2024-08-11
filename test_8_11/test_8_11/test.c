#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

void Func1(int arr[], int sz)
{
	int tmp = 0;
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while (arr[left] % 2 == 1 && left < right)
		{
			left++;
		}
		while (arr[right] % 2 == 0 && left < right)
		{
			right--;
		}
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
	}
}

void PrintArr_int(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

size_t my_strlen2(char* str)
{
	char* p = str;
	while (*p++);
	return p - str - 1;
}
size_t my_strlen(const char* str)
{
	const char* eos = str;
	while (*eos++);
	return(eos - str - 1);
}
int main()
{
	int arr[10] = { 1,3,2,4,8,6,5,1,7,11 };
	char str[20] = "i am a student";
	int sz = sizeof(arr) / sizeof(arr[0]);
	int len = my_strlen2(str);
	printf("%d\n", len);
	//Func1(arr, sz);
	//PrintArr_int(arr, sz);
	return 0;
}