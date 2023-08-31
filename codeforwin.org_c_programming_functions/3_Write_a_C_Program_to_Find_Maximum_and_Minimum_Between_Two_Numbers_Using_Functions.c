/**
 * @file 3_Write_a_C_Program_to_Find_Maximum_and_Minimum_Between_Two_Numbers_Using_Functions.c
 * @author Abdelrahman Aref
 * @brief  The target is to find maximum and minimum between two numbers using functions.
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>


int isMax(int number1 , int number2);
int isMin(int number1 , int number2);

int main(void)
{
    int number1 = 0 , number2 = 0 ;
    int maxNumber = 0 , minNumber = 0;

    printf("Enter the first number : ");
    scanf("%d",&number1);

    printf("Enter the second number : ");
    scanf("%d",&number2);

    maxNumber = isMax(number1 , number2);
    minNumber = isMin(number1 , number2);

    printf("The maximum number is : %d \n",maxNumber);
    printf("The minimum number is : %d \n",minNumber);

    return 0;

}


/**
 * @brief The function returns the maximum number between number1 and number2.
 * 
 * @param number1 
 * @param number2 
 * @return int 
 */
int isMax(int number1 , int number2)
{
    return ((number1 > number2 ) ? number1 : number2);
}

/**
 * @brief The function returns the minimum number between number1 and number2.
 * 
 * @param number1 
 * @param number2 
 * @return int 
 */
int isMin(int number1 , int number2)
{
    return ((number1 > number2 ) ? number2 : number1);   
}