/**
 * @file 20_Write_a_C_Program_Find_GCD_of_Two_Numbers_Using_Recursion.c
 * @author Abdelrahman Aref
 * @brief  The target is to find GCD (HCF) of two numbers using recursion.
 * @version 0.1
 * @date 2023-08-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

int highest_common_factor(int number1 ,int number2);


int main(void)
{
    int number1 = 0 , number2 = 0;

    printf("Enter the first number : ");
    scanf("%d",&number1);

    printf("Enter the second number : ");
    scanf("%d",&number2);

    int GCD = highest_common_factor(number1 ,number2);

    printf("The GCD (HCF) of %d and %d is %d",number1 ,number2 ,GCD);
    return 0;
}



/**
 * @brief The function returns the highest common factor of number1 and number2.
 * 
 * @param number1 
 * @param number2 
 * @return int 
 */
int highest_common_factor(int number1 ,int number2)
{
    if(number2 == 0)
    {
        return number1;
    }
    else
    {
        return highest_common_factor(number2 ,number1 % number2);
    }
    
}