/**
 * @file 21_Write_a_C_Program_Find_LCM_of_Two_Numbers_Using_Recursion.c
 * @author Abdelrahman Aref
 * @brief  The target is to find LCM of two numbers using recursion.
 * @version 0.1
 * @date 2023-08-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>


int least_common_multiple(int number1 ,int number2);

int main(void)
{
    int number1 = 0 , number2 = 0 ;
    int LCM = 0;

    printf("Enter the first number : ");
    scanf("%d",&number1);

    printf("Enter the second number : ");
    scanf("%d",&number2);

    if(number2 > number1)
    {
        LCM = least_common_multiple(number1 ,number2);
    }
    else
    {
        LCM = least_common_multiple(number2 ,number1);
    }

    printf("The LCM of %d and %d is %d",number1 ,number2 ,LCM);

    return 0;
}


/**
 * @brief The function returns the least common multiple of number1 and number2.
 * 
 * @param number1 
 * @param number2 
 * @return int 
 */
int least_common_multiple(int number1 ,int number2)
{
    static int devisor = 0 ;

    devisor += number2 ;

    if((devisor % number1 == 0) && (devisor % number2 == 0))
    {
        return devisor;
    }
    else
    {
        return least_common_multiple(number1 ,number2);
    }

}