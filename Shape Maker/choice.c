#include <stdio.h>
#include "header.h"

int choice(int selection)
{
    if (selection == 1) 
    {
        printf("You selected Right-angle Triangle");
        right_angle_triangle();
        again();
    }
    else if (selection == 2)
    {
        printf("You selected Square");
        square();
        again();
    }
    
    else if  (selection == 3) 
    {
        printf("You selected Rectangle");
        rectangle();
        again();
    }
    else if (selection == 4)
    {
        printf("You selected Triangle");
        triangle();
        again();
    }
    else
    {
        printf("Invalid entry, Please try again\n");
        main();
    }
    return (0);
}
