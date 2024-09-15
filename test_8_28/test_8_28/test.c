#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define NDEBUG
#include <assert.h>
//10000000 00000000 00000000 10000000 yuan
//11111111 11111111 11111111 01111111 fan
//11111111 11111111 11111111 10000000 bu
//char a = -128;
//
int my_strlen(const char* ptr)
{
	char* ret = ptr;
	while (*ptr)
	{
		ptr++;
	}
	return ptr - ret;
}

void my_strcpy(char* dest, char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

void my_strcat(char* dest, char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest)
	{
		dest++;
	}

	while (*dest++ = *src++)
	{
		;
	}

	return ret;
}

char* my_strncpy(char* dest, const char* src, size_t num)
{
	char* ret = dest;
	while (num--)
	{
		*dest++ = *src++;
	}
}

char* my_strncat(char* dest, const char* src, size_t num)
{
	char* ret = dest;

	while (*dest)
	{
		dest++;
	}
	while (num--)
	{
		*dest++ = *src++;
	}
}

void* my_memcpy(void* dest, const void* src, size_t num)
{
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
}

void* my_memmove(void* dest, const void* src, size_t num)
{
	while (num--)
	{
		if (dest > src)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
		else
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
}

int my_strcmp(const char* str1, const char* str2)
{
	if (*str1 == *str2)
	{
		str1++;
		str2++;
	}
	else
	{
		return *str1 - *str2;
	}
}

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	char* p1 = str1;
	char* p2 = str2;

	while (*p1 && *p2)
	{
		if(*p1 == *p2)//匹配成功 指针向后走一部
		{
			p1++;
			p2++;
		}
		else //匹配失败 从失败的字符开始重新匹配
		{
			str1 = ++p1;
			p2 = str2;
		}
	}

	if (*p2 == '\0')
	{
		return str1;
	}
	else
	{
		return NULL;
	}
}

int main()
{
	char arr1[20] = "nanshinixinakixii";
	char arr2[] = "nakixii";
	//printf("%d\n", my_strlen(arr1));
	//my_strcat(arr1, NULL);
	//my_strncpy(arr1, arr2, 4);
	//my_strncat(arr1, arr2, 4);
	//my_memmove(arr1, arr2, 8);
	//printf("%d\n", my_strcmp(arr1, arr2));
	char* p = my_strstr(arr1, arr2);
	printf("%s\n", p);
	return 0;
}