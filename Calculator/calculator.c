#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(void)

{
	int num1, num2;
	char name[50];
	int selection;

	printf ("This is my first calculator program\nPlease enter your name: ");
	fgets(name, 50, stdin);
	printf ("\nWelcome to the calculator %s\nWhat operation would you like to perform: ", name);
	operations();
	printf ("\nPlease Enter your Selection: ");
	scanf ("%i", &selection);
	choice(selection);

	return (0);
}
