#include <stdio.h>
#include "header.h"

int right_angle_triangle(void)
{
    int i;
    int j;
    int length;
    char character;
    
    printf("\nPlease enter the length of the triangle: ");
    scanf("%i", &length);
    printf("\nPlease enter the character for the triangle:");
    scanf(" %c", &character);
    
    for (i = 1; i <= length; i++)
    {
        for (j = 2; j <= i; j++)
        {
            printf("%c ", character);
        }
        printf("%c \n", character);
    }

    return (0);
}
