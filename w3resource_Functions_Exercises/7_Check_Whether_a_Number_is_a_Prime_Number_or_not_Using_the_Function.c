/**
 * @file 7_Check_Whether_a_Number_is_a_Prime_Number_or_not_Using_the_Function.c
 * @author Abdelrahman Aref
 * @brief  The target is to creat a function that decided if the number is prime or not.
 * @version 0.1
 * @date 2023-08-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

void isPrime(int number);

int main(void)
{
    int number = 0 ;

    printf("Enter a number : ");
    scanf("%d",&number);

    isPrime(number);

    return 0;
}


/**
 * @brief The function decides if the input number is prime or not
 * 
 * @param number 
 */
void isPrime(int number)
{
    if((((number % 2) == 0) && (number != 2)) || (((number % 3) == 0) && (number != 3)) ||
       (((number % 5) == 0) && (number != 5)) || (((number % 7) == 0) && (number != 7)))
    {
        printf("The number is not prime");
    }
    else
    {
        printf("The number is prime");
    }

}