/**
 * @file 2_Square_of_Any_Number_Using_The_Function.c
 * @author Abdelrahman Aref
 * @brief  The target is to creat a function that gives squar of number.
 * @version 0.1
 * @date 2023-08-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>


 unsigned int squar(int number);

int main(void)
{
    int number = 0 ;

    printf("Enter Number : ");
    scanf("%d",&number);

    unsigned int numberSquar = squar(number);
    printf("The squar of %d = %d \n",number ,numberSquar);

    return 0;
}

/**
 * @brief  The function returns the squar of number.
 * 
 * @param number 
 * @return unsigned int 
 */
 unsigned int squar(int number)
 {
    return (number * number);
 }