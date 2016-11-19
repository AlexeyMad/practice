

#include "stdafx.h"

/*
Ќаписать программу, котора€ запрашивает у пользовател€ пол,
рост и вес, а затем анализирует соотношение роста и веса,
выдава€ рекомендации к дальнейшим действи€м (похудеть, потолстеть,
норма)
*/


int main()
{

	char sex;


	printf("Enter your sex(m/f): ");
	scanf_s("%c", &sex);

	while (sex != 'm' && sex != 'f')
	{
		rewind(stdin);
		printf("Do you think its funny? Only M or F allowed! \n");
		printf("Enter your sex(m/f):");
		scanf_s("%c", &sex);
	}
 
	getchar();
	getchar();
	return 0;
}

