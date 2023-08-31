/**
 * @file 18_Write_a_C_Program_Find_Factorial_of_Any_Number_Using_Recursion.c
 * @author Abdelrahman Aref
 * @brief  The target is to find factorial of any number using recursion.
 * @version 0.1
 * @date 2023-08-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

int factorial(int number);

int main(void)
{
    int number = 0;

    printf("Enter a number : ");
    scanf("%d",&number);

    int numberFactorial = factorial(number);

    printf("The factorial of %d is %d \n",number ,numberFactorial);
    
    return 0;
}

/**
 * @brief The function returns the factorial of number using recursion.
 * 
 * @param number 
 * @return int 
 */
int factorial(int number)
{
    if(number == 0)
    {
        return 1;
    }

    return (number * factorial(number - 1));

}