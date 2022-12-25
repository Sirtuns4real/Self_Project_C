#include <stdio.h>
#include "header.h"

int rectangle(void)
{
    int i;
	int j;
	int length, breadth;
	char character;
	
	printf("\nPlease enter the length of the rectangle: ");
    scanf("%i", &length);
    printf("Please enter the breadth of the rectangle: ");
    scanf("%i", &breadth);
    printf("\nPlease enter the character for the rectangle:");
    scanf(" %c", &character);

    for (i = 1; i <= breadth; i++)
		{
			for (j = 1; j <= length; j++)
			{
				printf("%c  ", character);
			}
			
			printf("\n");
		}
	return (0);
}
