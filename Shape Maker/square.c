#include <stdio.h>
#include "header.h"

int square(void)
{
  int i;
	int j;
	int length;
	char character;
	
	  printf("\nPlease enter the length of the square: ");
    scanf("%i", &length);
    printf("\nPlease enter the character for the square:");
    scanf(" %c", &character);

    for (i = 1; i <= length; i++)
		{
			for (j = 1; j <= length; j++)
			{
				printf("%c  ", character);
			}
			
			printf("\n");
		}
	return (0);
}
