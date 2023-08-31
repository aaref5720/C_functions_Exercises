/**
 * @file 8_Wrie_a_C_Program_to_Print_All_Armstrong_Numbers_Between_Given_Interval_Using_Functions.c
 * @author Abdelrahman Aref
 * @brief  The target is to find all Armstrong's numbers between given interval using functions.
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

int power(int base , int exponent);
char isArmstrong(int number);
void printArmstrongs(int start , int end);

int main(void)
{
    int start = 0 , end = 0;

    printf("Enter a start number : ");
    scanf("%d",&start);

    printf("Enter an end number : ");
    scanf("%d",&end);

    printArmstrongs(start , end);

    return 0 ;
}


/**
 * @brief The function prints all Armstrong numbers between given interval.
 * 
 * @param start 
 * @param end 
 */
void printArmstrongs(int start , int end)
{
    int index = 0 ;

    printf("The Armstrong numbers between %d and %d are : \n" ,start ,end);

    for(index = start ; index < end ; index++)
    {
        if(!(isArmstrong(index)))
        {
            printf("%d\t",index);
        }
    }

}


/**
 * @brief The function checks if the number is Armstrong or not.
 * 
 * @param number 
 * @return char 
 */
char isArmstrong(int number)
{
    int checker = 0 ;
    int digits = 0;
    int counter = 1;
    int sum = 0 ;
    int counter2 = 0;
    int counter3 = 1;
    int state = 0 ;

    while(number / counter)
    {
        digits++;
        counter *= 10;
    }

    counter = 10;
    counter2 = digits;

    while (counter2--)
    {
        checker = number % counter;
        checker /= counter3;
        checker = power(checker , digits);
        counter *= 10 ;
        counter3 *= 10;
        sum += checker ;
    }

    state = (sum == number) ? 0 : 1;
    return state;
}


/**
 * @brief The function returns the result of base ^ exponent.
 * 
 * @param base 
 * @param exponent 
 */
int power(int base , int exponent)
{
    int index = 0 ;
    int total = 1 ;
    for(index = 0 ; index < exponent ; index ++)
    {
        total *= base ;
    }

    return total ;
}
