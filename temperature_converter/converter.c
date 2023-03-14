// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int personal_info()
{
    char name[50];
    printf("TEMPERATURE CONVERTER\n");
    printf("Please Enter Your Name: "),fgets(name, 50, stdin);
    printf("Welcome %s\n", name);
}

int cel2kel()
{
    int value;
    float celsius, kelvin;
    int count;
    
    printf("How many temperature do you want to convert?\n"), scanf("%i", &value);
    if (value == 1)
        {
            printf("\nEnter temperature in Celsius: "),scanf("%f", &celsius);
            if (celsius < -273.15)
            {
                printf("Temperature below -273.15 degree Celsius is not possible, Try Again!!!\n");
                cel2kel();
            }
            else
            {
                printf("The temperature %f degree Celsius in Kelvin is: %fK\n", celsius, celsius + 273.15);
            }
        }
    else
        {
            for (count = 0; count < value; count++)
            {
                printf("\nEnter temperature in Celsius: "),scanf("%f", &celsius);
                if (celsius < -273.15)
                {
                    printf("Temperature below -273.15 degree Celsius is not possible, Try Again!!!\n");
                    cel2kel();
                }
                else
                {
                    printf("The temperature %f degree Celsius in Kelvin is: %fK\n",celsius, celsius + 273.15);
                }
            }
        }
}

        
int kel2cel()
{
    int value;
    float celsius, kelvin;
    int count;
    
    printf("How many temperature do you want to convert?\n"), scanf("%i", &value);
    if (value == 1)
        {
            printf("\nEnter temperature in Kelvin: "),scanf("%f", &kelvin);
            if (kelvin < 0)
            {
                printf("Temperature below 0K is not possible, Try Again!!!\n");
                kel2cel();
            }
            else
            {
                printf("The temperature %fKelvin in Celsius is: %fdegree Celsius\n", kelvin, kelvin - 273.15);
            }
        }
    else
        {
            for (count = 0; count < value; count++)
            {
                printf("\nEnter temperature in Kelvin: "),scanf("%f", &kelvin);
                if (kelvin < 0)
                {
                    printf("Temperature below 0K is not possible, Try Again!!!\n");
                    kel2cel();
                }
                else
                {
                   printf("The temperature %fKelvin in Celsius is: %f degree Celsius\n", kelvin, kelvin - 273.15);
                }
            }
        }
}

int cel2fah() 
{
    float celsius, fahrenheit;
    int value, count;
    
    printf("How many temperature do you want to convert?\n"), scanf("%i", &value);
    if (value == 1)
    {
        printf("Enter temperature in Celsius: "), scanf("%f", &celsius);
        if (celsius < -273.15)
        {
            printf("Temperature below -273.15 degree Celsius is not possible, Try Again!!!\n");
            cel2fah();
        }
        else
        {
            fahrenheit = (celsius * 1.8) + 32;
            printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
        }
    }
    else
    {
        for (count = 0; count < value; count++)
        {
            printf("\nEnter the temperature in Celsius: "),scanf("%f", &celsius);
            if (celsius < -273.15)
            {
                printf("Temperature below -273.15 degree Celsius is not possible, Try Again!!!\n");
                cel2fah();
            }
            else
            {
                fahrenheit = (celsius * 1.8) + 32;
                printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
            }
        }
    }
}


int fah2cel() 
{
    float celsius, fahrenheit;
    int value, count;
    
    printf("How many temperature do you want to convert?\n"), scanf("%i", &value);
    if (value == 1)
    {
        printf("Enter temperature in Fahrenheit: "), scanf("%f", &fahrenheit);
        if (fahrenheit < -459.67)
        {
            printf("Temperature below -459.67 degree Fahrenheit is not possible, Try Again!!!\n");
            fah2cel();
        }
        else
        {
            celsius = (fahrenheit - 32) / 1.8;
            printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
        }
    }
    else
    {
        for (count = 0; count < value; count++)
        {
            printf("\nEnter temperature in Fahreneheit: "),scanf("%f", &fahrenheit);
            if (fahrenheit < -459.67)
            {
                printf("Temperature below -459.67 degree Fahrenheit is not possible, Try Again!!!\n");
                fah2cel();
            }
            else
            {
                celsius = (fahrenheit - 32) / 1.8;
                printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
            }
        }
    }
}

int fah2kel() 
{
    float kelvin, fahrenheit;
    int value, count;
    
    printf("How many temperature do you want to convert?\n"), scanf("%i", &value);
    if (value == 1)
    {
        printf("Enter temperature in Fahrenheit: "), scanf("%f", &fahrenheit);
        if (fahrenheit < -459.67)
        {
            printf("Temperature below -459.67 degree Fahrenheit is not possible, Try Again!!!\n");
            fah2kel();
        }
        else
        {
            kelvin = (fahrenheit - 32) * 5/9 + 273.15;
            printf("%.2f Fahrenheit is equal to %.2f Kelvin.\n", fahrenheit, kelvin);
        }
    }
    else
    {
        for (count = 0; count < value; count++)
        {
            printf("\nEnter the temperature in Fahreneheit: "),scanf("%f", &fahrenheit);
            if (fahrenheit < -459.67)
            {
                printf("Temperature below -459.67 degree Fahrenheit is not possible, Try Again!!!\n");
                fah2kel();
            }
            else
            {
                kelvin = (fahrenheit - 32) * 5/9 + 273.15;
                printf("%.2f Fahrenheit is equal to %.2f Kelvin.\n", fahrenheit, kelvin);
            }
        }
    }
}

int kel2fah() 
{
    float kelvin, fahrenheit;
    int value, count;
    
    printf("How many temperature do you want to convert?\n"), scanf("%i", &value);
    if (value == 1)
    {
        printf("Enter temperature in Kelvin: "), scanf("%f", &kelvin);
        if (kelvin < 0)
        {
            printf("Temperature below 0 Kelvin is not possible, Try Again!!!\n");
            kel2fah();
        }
        else
        {
            fahrenheit = (kelvin - 273.15) * 9/5 + 32;
            printf("%.2f Kelvin is equal to %.2f Fahrenheit.\n", kelvin, fahrenheit);
        }
    }
    else
    {
        for (count = 0; count < value; count++)
        {
            printf("\nEnter the temperature in Kelvin: "),scanf("%f", &kelvin);
            if (kelvin < 0)
            {
                printf("Temperature below 0 Kelvin is not possible, Try Again!!!\n");
                kel2fah();
            }
            else
            {
                fahrenheit = (kelvin - 273.15) * 9/5 + 32;
                printf("%.2f Kelvin is equal to %.2f Fahrenheit.\n", kelvin, fahrenheit);
            }
        }
    }
}

int choice()
{
    printf("Please Select the converter you would like to use:\n 1. Celsius to Kelvin\n 2. Kelvin to Celsius\n 3. Fahrenheit to Celsius\n 4. Celsius to Fahrenheit\n 5. Fahrenheit to Kelvin\n 6. Kelvin to Fahrenheit\n");
    int selection;
    
    printf("Selection: "),scanf("%i", &selection);
    
    if (selection == 1)
    {
        printf("You selected Celcius to kelvin\n");
        cel2kel();
    }
    
    else if (selection == 2)
    {
        printf("You selected kelvin to Celcius\n");
        kel2cel();
    }
    
    else if (selection == 3)
    {
         printf("You selected Fahrenheit to Celsius\n");
         fah2cel();
    }
    
    else if (selection == 4)
    {
        printf("You selected Celsius to Fahrenheit\n");
        cel2fah();
    }
    
    else if (selection == 5)
    {
         printf("You selected Fahrenheit to Kelvin\n");
         fah2kel();
    }
    
    else if (selection == 6)
    {
         printf("You selected Kelvin to Fahrenheit\n");
         kel2fah();
    }
    else
    {
        printf("Please try again: ");
    }
}

int again()
{
    int trial;
    
    printf("\nDo you want to use the converter again?\n");
    printf("Enter 1 for Yes and 2 for No: "), scanf("%d", &trial);
    if (trial == 1)
    {
        choice();
        again();
    }
    else
    {
        printf("Thank you, See you next time!");
    }
}


int main() 
{
    personal_info();
    choice();
    again();
    return 0;
}
