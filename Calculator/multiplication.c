#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int multiplication(void)

{
	float multiply, num1, num2;

	printf("\nEnter the first number: "), scanf("%f", &num1);
	printf("\nEnter the second number: "), scanf(" %f", &num2);

	multiply = num1 * num2;

	printf("The multiplication of %f by %f is: %f", num1, num2, multiply);

	return (0);
}
