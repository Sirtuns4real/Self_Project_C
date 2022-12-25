#include <stdio.h>
#include "header.h"


int main(void)
{
	char name[50];
	int selection;

	printf("This is my shape production program\nPlease enter your name: ");
	fgets(name, 50, stdin);
	printf("\nWelcome to the program %s\nWhat shape would you like to draw: ", name);
	operations();
	printf("\nPlease Enter your Selection: ");
	scanf("%i", &selection);
	choice(selection);


	return (0);
}
