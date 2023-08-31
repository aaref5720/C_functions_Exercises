/**
 * @file 19_Write_a_C_Program_Generate_nth_Fibonacci_Term_Using_Recursion.c
 * @author Abdelrahman Aref
 * @brief  The target is to generate nth Fibonacci term using recursion.
 * @version 0.1
 * @date 2023-08-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

int nth_fibonacci_term(int number);

int main(void)
{
    int number = 0;

    printf("Enter the nth number you want to generate Fibonacci term : ");
    scanf("%d",&number);

    int fibonacciValue =  nth_fibonacci_term(number);

    printf("The %dth Fibonacci term is %d",number ,fibonacciValue);

    return 0;
}


/**
 * @brief The function returns the nth Fibonacci term using recursion.
 * 
 * @param number 
 * @return int 
 */
int nth_fibonacci_term(int number)
{

 
    if(number == 0)
    {
        return 0;
    }

    if(number == 1)
    {
        return 1;
    }

    return nth_fibonacci_term(number - 1) + nth_fibonacci_term(number - 2);
}
