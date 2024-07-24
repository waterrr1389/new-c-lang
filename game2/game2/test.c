#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


//É¨À×ÓÎÏ·
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		printf("************************\n");
		printf("*****    1.play    *****\n");
		printf("*****    0.exit    *****\n");
		printf("************************\n");
		//scanf("%d", &input);
		switch (1)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit the game\n");
			break;
		default:
			printf("input illgal,choose again\n");
			break;
		}
			} while (input);
	return 0;
}