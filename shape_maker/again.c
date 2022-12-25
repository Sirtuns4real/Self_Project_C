#include <stdio.h>
#include "header.h"

void again(void)
{
	int choose;
	int selection;

	printf("\nWould you like to draw another shape: \n1. Yes\n2. No");
	printf("\nPlease enter 1 for Yes and 2 for No: "), scanf("%i", &choose);

	if (choose == 1)
	{
		printf("What shape would you like to draw this time: ");
		operations();
		printf("\nPlease Enter your Selection: ");
		scanf("%i", &selection);
		choice(selection);
	}
	else
	{
		printf("Thank you");
	}

	return (0);
}
