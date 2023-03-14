#include <stdio.h>
#include <stdlib.h>

/*
 * main-program to add two integers
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num1, num2, sum;

	printf("Enter the first number: ");
	scanf("%i", &num1);
	printf("Enter the second number: ");
	scanf("%i", &num2);

	sum = num1 + num2;
	printf("The sum of %i and %i is %i", num1, num2, sum);

	return (0);
}
