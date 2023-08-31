/**
 * @file 6_Write_a_C_Program_to_Find_all_Prime_Numbers_Between_Given_Interval_Using_Functions.c
 * @author Abdelrahman Aref
 * @brief  The target is to find all prime numbers between given interval using functions.
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>


char isPrime(int number);
void printPrims(int start , int end);

int main(void)
{
    int start = 0 , end = 0;

    printf("Enter a start number : ");
    scanf("%d",&start);

    printf("Enter an end number : ");
    scanf("%d",&end);

    printPrims(start , end);

    return 0 ;
}


/**
 * @brief The function checks if the number is prime or not.
 * 
 * @param number 
 * @return char 
 */
char isPrime(int number)
{
    int state = 0 ;
    if (((number % 2) == 0 && number != 2) || ((number % 3) == 0 && number != 3) ||
        ((number % 5) == 0 && number != 5) || ((number % 7) == 0 && number != 7)  || number == 1)
    {
        state = 1 ;
    }

    return state;
}


/**
 * @brief The function prints all prime numbers between given interval.
 * 
 * @param start 
 * @param end 
 */
void printPrims(int start , int end)
{
    int index = 0 ;

    printf("The prime numbers between %d and %d are : \n" ,start ,end);

    for(index = start ; index < end ; index++)
    {
        if(!(isPrime(index)))
        {
            printf("%d\t",index);
        }
    }

}