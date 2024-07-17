#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void print(int n)
{
	if (n / 10 != 0)
	{
		print(n / 10);
	}
	printf("%d ", n%10);
}
void anti_print(int n)
{
	printf("%d ", n % 10); //1234%10 = 4 ...
	if (n / 10 != 0) //1234/10 = 123
	{
		anti_print(n / 10); //123
	}
	
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	printf("\n");
	anti_print(n);
	return 0;
}