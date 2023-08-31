/**
 * @file 5_Find_the_Sum_of_the_Factorials_Using_the_Function.c
 * @author Abdelrahman Aref
 * @brief  The target is to creat a function that gives the value of factorial for input number.
 * @version 0.1
 * @date 2023-08-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

int factorial(int number); 

int main(void)
{
    int number = 0 , index = 1 ;

    printf("Enter a number : ");
    scanf("%d",&number);

    int factorialSum = 0 ;

    for(index = 1 ; index <= number ; index++)
    {
        factorialSum += (factorial(index) / index);
    }

    printf("The sum of factorials / index = %d",factorialSum);

    return 0;

}

/**
 * @brief The function returns factorial of input number
 * 
 * @param number 
 * @return int 
 */
int factorial(int number)
{
    int total = 1;

    while (number)
    {
        if(number == 0)
        {
            total = 0 ;
            break;
        }

        total *= number;
        number-- ;
    }
    
    return total ;
}