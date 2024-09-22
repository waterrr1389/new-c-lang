#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>

//int syscheck(int*);
//
//int main()
//{
//	union a {
//		int c;
//	};
//	union a u = {0};
//
//	if (syscheck(&u.c) == 1)
//	{
//		printf("Ð¡¶Ë");
//	}
//	else
//	{
//		printf("´ó¶Ë");
//	}
//
//	return 0;
//}
//
//int syscheck(int* p)
//{
//	*p = 1;
//	char* p1 = (char*) p;
//	return *p1;
//}

//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//
//    char* p = (char*)malloc(2 * sizeof(char));
//    p[0] = 0x39;
//    p[1] = 0x38;
//
//    printf("%x\n", a.k);
//    printf("%x\n", *(short*)p);
//
//    return 0;
//}

//int main()
//{
//	int (*parr)[5] = NULL;
//	parr = (int(*)[5])malloc(3 * 5 * sizeof(int));
//	if (parr == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			//(*(parr+i)+j)
//			parr[i][j] = j;
//		}
//	}
//	
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			//(*(parr+i)+j)
//			fprintf(stdout, "%d ", parr[i][j]);
//		}
//		fprintf(stdout, "\n");
//	}
//
//	return 0;
//}
//void* GetMemory(void)
//{
//	void* ptr = calloc(5, sizeof(int));
//	return ptr;
//}
//
//int main()
//{
//	int* arr;
//	arr = (int*)malloc(10 * sizeof(int));
//	for (int i = 0; i < 10; i++)
//	{
//		*(arr + i) = i + 1;
//	}
//	free(arr);
//	arr = NULL;
//	//calloc are almost the same
//
//	arr = (int*)GetMemory();
//	if (arr == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int* p = NULL;
//	p = realloc(arr, 10 * sizeof(int));
//	if (p != NULL)
//	{
//		arr = p;
//	}
//	free(arr);
//	arr = NULL;
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("D:\\ownthings\\new-c-lang\\Project1\\Project1\\test.txt", "r");
//	int ret = 0;
//
//	while ((ret =fgetc(pf)) != EOF)
//	{
//		printf("%c\n", ret);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("D:\\ownthings\\new-c-lang\\Project1\\Project1\\test.txt", "w");
//
//	fputc('z', pf);
//
//	fclose(pf);
//
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("D:\\ownthings\\new-c-lang\\Project1\\Project1\\test.txt", "w");
//
//	fputc('z', pf);
//
//	//fputs("jingnanlkjasdf", pf);
//
//	fclose(pf);
//
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("D:\\ownthings\\new-c-lang\\Project1\\Project1\\test.txt", "r");
//
//	char* arr = (char*)malloc(5 * sizeof(char));
//	if (arr == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	fgets(arr, 5, pf);
//	printf("%s", arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
//	FILE* pf = fopen("D:\\ownthings\\new-c-lang\\Project1\\Project1\\test.txt", "w");
//
//	char str[20] = "hello, world";
//	
//	fputs(str, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("D:\\ownthings\\new-c-lang\\Project1\\Project1\\test.txt", "w");
//
//	int d = 100;
//	char str[20] = "hello, world";
//	float f = 3.1415926f;
//	fprintf(pf, "%d %s %f", d, str, f);
//	fscanf(stdin, "%d %s %f", &d, str, &f);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("D:\\ownthings\\new-c-lang\\Project1\\Project1\\test.txt", "w");
//
//	int d = 100;
//	char str[20] = "hello, world";
//	float f = 3.1415926f;
//	fprintf(pf, "%d %s %f", d, str, f);
//	fscanf(stdin, "%d %s %f", &d, str, &f);
//	fprintf(stdout, "%d %s %f", d, str, f);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

#include <stdio.h>

int main()
{
	FILE* pf = fopen("D:\\ownthings\\new-c-lang\\Project1\\Project1\\test.txt", "w"); 
	
	char str[20] = "777 chomod 3.14";
	int d = 0;
	char buffer[30];
	float f = 0.f;

	sscanf(str, "%d %s %f", &d, buffer, &f);
	fprintf(stdout, "%d %s %f", d, buffer, f);
	
	if (feof(pf))
	{
		printf("EOF\n");
	}
	else if(ferror(pf))
	{
		printf("error\n");
	}

	fclose(pf);
	pf = NULL;

	return 0;
}