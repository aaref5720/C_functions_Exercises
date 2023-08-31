/**
 * @file 12_Write_a_C_Program_Print_All_Even_or_Odd_Numbers_in_Given_Range_Using_Recursion.c
 * @author Abdelrahman Aref 
 * @brief  The target is to print all even or odd numbers depending on the start number in given range using recursion.
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

void printing_Even_Odd_numbers(int start , int end);

int main(void)
{
    int start = 0 , end = 0 ;
    printf("Enter the start number : ");
    scanf("%d",&start);

    printf("Enter the end number : ");
    scanf("%d",&end);

    printf("Even / Odd numbers between %d to %d : \n" ,start ,end);
    printing_Even_Odd_numbers(start , end);

    return 0;
}

/**
 * @brief The function prints Even or Odd numbers between start & end 
 *          it choose even / odd depending on start number
 * 
 * @param start 
 * @param end 
 */
void printing_Even_Odd_numbers(int start , int end)
{
    if (start > end)
    {
        return;
    }

    printf("%d\t",start);
    printing_Even_Odd_numbers(start + 2 , end);
}