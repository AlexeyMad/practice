

#include "stdafx.h"

/*
Ќаписать программу, котора€ запрашивает у пользовател€ пол,
рост и вес, а затем анализирует соотношение роста и веса,
выдава€ рекомендации к дальнейшим действи€м (похудеть, потолстеть,
норма)
*/


int main()
{
	float we, he, ratio;
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


	printf("Weight(kg): ");

	while ((we <= 0) || (we >= 300))
	{
		rewind(stdin);
		printf("Do you think its funny? If you weigh more than 300 kg or less than 0, you should seek medical attention. \nOr u can try again:\n");
		printf("Weight(kg): ");
		scanf_s("%f", &we);
	}
	printf("Heigth(meters): ");
	scanf_s("%f", &he);

	while ((he) <= 0 || (he >= 3))
	{
		rewind(stdin);
		printf("Your heigth is invalid, enter your heigth(m) again: ");
		scanf_s("%f", &he);
	}
	ratio = we / (he * he);

	printf("\n", ratio);

	getchar();
	getchar();
	return 0;
}

