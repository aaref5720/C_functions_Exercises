/**
 * @file 17_Write_a_C_Program_Find_Sum_of_Digits_of_a_Given_Number_Using_Recursion.c
 * @author Abdelrahman Aref
 * @brief  The target is to find sum of digits of a given number using recursion.
 * @version 0.1
 * @date 2023-08-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>


int sum_of_digits(int number);

int main(void)
{
    int number = 0 ;

    printf("Enter a number : ");
    scanf("%d",&number);

    int sum_of_number_digits = sum_of_digits(number);

    printf("The sum of digits of %d is %d\n",number ,sum_of_number_digits);

    return 0;
}


/**
 * @brief The function returns the sum of digits of number
 * 
 * @param number 
 * @return int 
 */
int sum_of_digits(int number)
{
    int digits = 0 , counter = 1 ;

    while(number / counter)
    {
        digits++;
        counter *= 10;
    }

    if(number == 0)
    {
        return 0 ;
    }

    return (((number % 10) + sum_of_digits(number / 10)));
}