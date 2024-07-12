#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while( scanf("%d%d%d", &a, &b, &c) == 3 )
	{
		if ((a+b>c) && (a+c)>b && (b+c)>a)
		{
			if (a == b && b == c)
			{
				printf("eqaulateral triangle\n");
			}
			else if ((a == b || b == c || a == c) && (a != b || a != c))
			{
				printf("Isosceles Triangle\n");
			}
			else
			{
				printf("Ordinary Triangle\n");
			}
		}
		else
		{
			printf("not a triangle\n");
		}
	}
	return 0;
}