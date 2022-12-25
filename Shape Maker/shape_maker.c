#include <stdio.h>
#include "header.h"

int main() 
{
    int num1, num2;
    char name[50];
    int selection;
    
    printf("This is my shape production program\nPlease enter your name: ");
    gets(name);
    printf("\nWelcome to the program %s\nWhat shape would you like to draw: ", name);
    operations();
    printf("\nPlease Enter your Selection: ");
    scanf("%i", &selection);
    choice(selection);
   
    return (0);
}
