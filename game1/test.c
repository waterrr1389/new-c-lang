#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
int main()
{
	srand((unsigned int)time(NULL));

    int input = 0;
	do
	{
		printf("***********************\n");
		printf("**** 1.Play 0.Exit ****\n");
		printf("***********************\n");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("play the game\n");
			Game();
			break;
		case 0:
			printf("game exit\n");
			break;
		default:
			printf("input is illegal\n");
			break;
		}
	} while (input);
	return 0;
}