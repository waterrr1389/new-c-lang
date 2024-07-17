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
int my_strlen(const char* str)
{
	char* p = str;
	while (*p != 0)
	{
		p++;
	}
	return p - str;
}


int main()
{
	printf("%d\n", my_strlen("nakixii"));
	return 0;
}

