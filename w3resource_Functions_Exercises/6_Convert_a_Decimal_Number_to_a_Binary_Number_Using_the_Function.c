/**
 * @file 6_Convert_a_Decimal_Number_to_a_Binary_Number_Using_the_Function.c
 * @author Abdelrahman Aref
 * @brief  The target is to creat a function that converting decimal number into its binary value.
 * @version 0.1
 * @date 2023-08-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

void Decimal_to_Binary(int number);

int main(void)
{
    int number = 0 ;

    printf("Enter a number : ");
    scanf("%d",&number);

    Decimal_to_Binary(number);

    return 0;
}

/**
 * @brief The function returns input number Binary implementation
 * 
 * @param number 
 */

void Decimal_to_Binary(int number)
{
    int index = 0;
    int digit = 0;

    printf("The binary representation of %d = ",number);

    for(index = 31 ; index >= 0 ; index--)
    {
        digit = number >> index ;

        if(digit & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }


    }
    printf("\n");

}