/**
 * @file 15_Write_a_C_Program_Find_Reverse_of_Any_Number_Using_Recursion.c
 * @author Abdelrahman Aref
 * @brief  The target is to find reverse of any number using recursion.
 * @version 0.1
 * @date 2023-08-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

int reverseNumber(int number);
int power(int base , int exponent);

int main(void)
{
    int number  =  0 ;

    printf("Enter a number to reverse : ");
    scanf("%d",&number);

    int reversedNumber = reverseNumber(number);

    printf("The reversed of %d is %d \n",number ,reversedNumber);


    return 0;
}



/**
 * @brief The function returns the reverse of number.
 * 
 * @param number 
 * @return int 
 */
int reverseNumber(int number)
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

    return (((number % 10) * power(10 , (digits - 1)) + reverseNumber(number / 10)));
}


/**
 * @brief The function returns the result of base ^ exponent.
 * 
 * @param base 
 * @param exponent 
 */
int power(int base , int exponent)
{
    int index = 0 ;
    int total = 1 ;
    for(index = 0 ; index < exponent ; index ++)
    {
        total *= base ;
    }

    return total ;
}