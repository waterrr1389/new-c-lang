#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ab
{
	char name[20];
	size_t age;
}member[] = { {"aestas", 21}, {"nakixii", 26}, {"darker", 18} };

//struct ab member[] = {{"aestas", 21}, {"nakixii", 26}};

void my_qsort(void* base, size_t num, size_t size, int (*cmp)(const void*, const void*));

void Swap(void* buf1, void* buf2, size_t size)
{
	char tmp = 0;
	int i = 0;
	for (i = 0; i < size; i++)
	{
		tmp = *(char*)buf1;
		*(char*)buf1 = *(char*)buf2;
		*(char*)buf2 = tmp;
		buf1 = (char*)buf1 + 1;
		buf2 = (char*)buf2 + 1;
 	}
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int cmp_ab_name(const void* e1, const void* e2)
{
	return strcmp((*(struct ab*)e1).name, (*(struct ab*)e2).name);
}

int cmp_ab_age(const void* e1, const void* e2)
{
	return (*(struct ab*)e1).age - (*(struct ab*)e2).age;
}

int cmp_char(const void* e1, const void* e2)
{
	return strcmp(*(char*)e1, *(char*)e2);
}

void printf_arr(int* arr, size_t sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
}

int main()
{
	int arr[10] = { 2,31,2,1,6,7,4,9,5,0 };
	int sz_int = sizeof(arr) / sizeof(int);
	int sz_ab = sizeof(member) / sizeof(member[0]);

	my_qsort(arr, sz_int, sizeof(int), cmp_int);
	//my_qsort(member, sz_ab, sizeof(struct ab), cmp_ab_name);
	my_qsort(member, sz_ab, sizeof(struct ab), cmp_ab_age);
	printf_arr(arr, sz_int);

	return 0;
}

//void qsort (void* base, 
//			size_t num, 
//			size_t size,
//			int (*compar)(const void*, const void*));

void my_qsort(void* base, size_t num, size_t size, int (*cmp)(const void*, const void*))
{
	int i = 0;
	int flag = 0;
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		for (j = 0; j < num - 1; j++)
		{
			if (cmp((char*)base+ j * size, (char*)base + (j + 1)*size) > 0)
			{
				Swap((char*)base + j * size, (char*)base + (j + 1)*size, size);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}