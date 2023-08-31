/**
 * @file 11_Write_a_C_Program_Print_All_Natural_Numbers_Between_1_to_n_Using_Recursion.c
 * @author Abdelrahman Aref
 * @brief  The target is to print all natural numbers between 1 to n using recursion.
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

void print_natural_numbers(int end);

int main(void)
{
    int end = 0 ;
    printf("Enter the end : ");
    scanf("%d",&end);

    print_natural_numbers(end);

    return 0 ;
}


/**
 * @brief The function prints all natural numbers between 1 to end using recursion.
 * 
 * @param end 
 */
void print_natural_numbers(int end)
{
    if(end == 2)
    {
        return ;
    }

    print_natural_numbers(--end);

    printf("%d\t",end);
}