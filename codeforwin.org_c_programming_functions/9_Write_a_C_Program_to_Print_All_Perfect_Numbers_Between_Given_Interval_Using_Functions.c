/**
 * @file 10_Print_All_Perfect_Numbers_in_a_Given_Range_Using_a_Function.c
 * @author Abdelrahman Aref
 * @brief  The target is to creat two functions that print the Perfect numbers in a given range.
 * @version 0.1
 * @date 2023-08-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

int is_a_Perfect_Number(int number);
void Perfect_Numbers_in_Range(int startNumber , int endNumber);

int main(void)
{
    int startNumber = 0 , endNumber = 0 ;

    printf("Enter the start number : ");
    scanf("%d",&startNumber);

    printf("Enter the end number : ");
    scanf("%d",&endNumber);

    Perfect_Numbers_in_Range(startNumber , endNumber);

    return 0;


}


/**
 * @brief The function decides if the number is a Perfect number or not if it is a Perfect number, else it returns -1 .
 * 
 * @param number 
 * @return int 
 */
int is_a_Perfect_Number(int number)
{
    int index = 1;
    int sum = 0;
    for(index = 1 ; index < number ; index++)
    {
        if((number % index) == 0)
        {
            sum += index ;
        }
    }

    if(sum != number)
    {
        sum = -1 ;
    }

    return sum;
}

/**
 * @brief The function prints the Perfect numbers in a given range.
 * 
 * @param startNumber 
 * @param endNumber 
 */
void Perfect_Numbers_in_Range(int startNumber , int endNumber)
{
    int index = 0;
   int perfectNumber = 0 ;

    printf("The perfect numbers between %d to %d are  \n",startNumber ,endNumber);

    for(index = startNumber ; index < endNumber ; index++)
    {
        perfectNumber = is_a_Perfect_Number(index) ;

        if (perfectNumber != -1)
        {
            printf("%d\t",perfectNumber);
        }
    }
}