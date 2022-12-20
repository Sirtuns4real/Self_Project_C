#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int division(void)
{
    float div;
    float num1;
    float num2;
    
    printf("\nEnter the first number: "), scanf("%f", &num1);
    printf("\nEnter the second number: "), scanf(" %f", &num2);
    div = num1 / num2;
    printf("The division of %f by %f is: %f", num1, num2, div);
    return (0);
}
