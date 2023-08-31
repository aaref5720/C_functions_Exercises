/**
 * @file 4_Given_Number_is_Even_or_Odd_Using_the_Function.c
 * @author abdelrahman Aref
 * @brief  The target is to creat a function that decided if the number is odd or even.
 * @version 0.1
 * @date 2023-08-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

void evenOrodd(int number);

int main(void)
{
    int number = 0 ;

    printf("Enter a number : ");
    scanf("%d",&number);

    evenOrodd(number);

    return 0;
}

/**
 * @brief  The function deciding and printing if number is even or odd
 * 
 * @param number 
 */
void evenOrodd(int number)
{
    ((number % 2) == 0) ? printf("The entered number is even") : printf("The entered number is odd");
}