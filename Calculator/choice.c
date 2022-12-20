#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int choice(int selection)

{
	if (selection == 1)
	{
		printf("You selected addition");
		addition();
		again();
	}
	else if (selection == 2)
	{
		printf("You selected subtraction");
		subtraction();
		again();
	}
	else if  (selection == 3)
	{
		printf("You selected division");
		division();
		again();
	}
	else if (selection == 4)
	{
		printf("You selected muliplication");
		multiplication();
		again();
	}
	else if  (selection == 5)
	{
		printf("You selected modulo");
		modulo();
		again();
	}
	else if  (selection == 6)
	{
		printf("You selected Raised to power");
		power();
		again();
	}
	else
	{
		printf("Invalid entry, Please try again\n");
		main();
	}

	return (0);
}
