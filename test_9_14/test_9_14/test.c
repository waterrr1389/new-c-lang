#define _CRT_SECURE_NO_WARNINGS


#include <string.h>

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int tmp = 0;
//    int sum = 0;
//
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%d", &tmp);
//        sum += tmp;
//    }
//
//    if ((sum / 3) < 60)
//        printf("YES");
//    else
//        printf("NO");
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char arr[13] = { 0 };
//    int i = 0;
//    int j = 0;
//    int tmp = 0;
//    scanf("%s", arr);
//    for (i = 0, j = 1; i < 12; i++)
//    {
//        if (arr[i] != '-')
//        {
//            tmp += (arr[i] - '0') * j;
//            j++;
//        }
//    }
//    int set = tmp % 11;
//    char last = (set == 10) ? 'X' : (set + '0');
//
//    if (last == arr[12])
//    {
//        printf("Right");
//    }
//    else
//    {
//        arr[12] = last;
//        printf("%s", arr);
//    }
//    return 0;
//}
#include<stdlib.h>

#include <stdio.h>
//int main()
//{
//	char a = -1;
//	unsigned char b = -1;
//	char c = -1;
//	printf("a=%d,b=%d,c=%u", a, b, c);
//	return 0;
//}