/**
 * @file 4_Write_a_C_Program_to_Check_Whether_a_Numbe_ is_Even_or_Odd_Using_Functions.c
 * @author Abdelrahman Aref
 * @brief  The target is to check whether a number is even or odd using functions.
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

char isEven(int number);

int main(void)
{
    int number = 0 ;
    char evenState = 0 ;

    printf("Enter a number : ");
    scanf("%d",&number);

    evenState = isEven(number);

    (evenState == 0) ? printf("%d is an even number \n",number) : printf("%d is an odd number \n",number) ;

    return 0 ;
}


/**
 * @brief The function detect if the number is even or not
 * 
 * @param number 
 * @return char 
 */
char isEven(int number)
{
    return ((number & 1));
}