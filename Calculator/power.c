#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h"


int power(void)
{
    
    double power, num1, num2;
    
    printf("\nEnter the first number: "), scanf("%lf", &num1);
    printf("\nEnter the second number: "), scanf("%lf", &num2);
    power = pow(num1,num2);
    printf("The modulo of %lf by %lf is: %lf", num1, num2, power);
    return (0);
}
