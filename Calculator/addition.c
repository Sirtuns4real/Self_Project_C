#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int addition(void)
{
    int sum, num1, num2;
    
    printf("\nEnter the first number: "), scanf("%i", &num1);
    printf("\nEnter the second number: "), scanf(" %i", &num2);
    sum = num1 + num2;
    printf("The sum of %i and %i is: %i", num1, num2, sum);
    return (0);
}
