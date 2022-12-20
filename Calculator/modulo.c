#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int modulo(void)
{
    int modulo, num1, num2;
    
    printf("\nEnter the first number: "), scanf("%i", &num1);
    printf("\nEnter the second number: "), scanf(" %i", &num2);
    modulo = num1 % num2;
    printf("The modulo of %i by %i is: %i", num1, num2, modulo);
    return (0);
}
