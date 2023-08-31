/**
 * @file 13_Write_a_C_Program_Find_Sum_of_All_Natural_Numbers_Between_1_to_n_Using_Recursion.c
 * @author Abdelrahman Aref
 * @brief  The target is to find sum of all natural numbers between 1 to n using recursion.
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

int sum_of_numbers(int endNumber);


int main(void)
{
    int endNumber  = 0 ;
    printf("Enter the end  : ");
    scanf("%d",&endNumber);

    int sum = sum_of_numbers(endNumber);

    printf("The sum of numbers from 1 to %d  = %d ",endNumber ,sum);

    return 0;
}


/**
 * @brief The function 
 * 
 * @param endNumber 
 */
int sum_of_numbers(int endNumber)
{

    if(endNumber == 0)
    {
        return endNumber;
    }

    return(endNumber + (sum_of_numbers(endNumber - 1)));
}