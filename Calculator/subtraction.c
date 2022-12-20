#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int subtraction(void)

{
	int sub, num1, num2;

	printf("\nEnter the first number: "), scanf("%i", &num1);
	printf("\nEnter the second number: "), scanf(" %i", &num2);

	sub = num1 - num2;

	printf("The difference of %i and %i is: %i", num1, num2, sub);

	return (0);
}
