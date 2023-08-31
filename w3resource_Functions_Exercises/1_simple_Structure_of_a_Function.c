/**
 * @file 1_simple_Structure_of_a_Function.c
 * @author Abdelrahman Aref
 * @brief  The target is to creat a function that summing two numbers.
 * @version 0.1
 * @date 2023-08-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int sum(int numberOne , int numberTwo);

int main(void)
{
    int numberOne = 0 , numberTwo = 0 ;
    printf("Enter number one : ");
    scanf("%d",&numberOne);

    printf("Enter number Two : ");
    scanf("%d",&numberTwo);

    int total = sum(numberOne , numberTwo);
    printf("The sum of %d + %d = %d",numberOne ,numberTwo ,total);

    return 0 ;

}

/**
 * @brief  That function returns the summing of numberOne + numberTwo
 * 
 * @param numberOne 
 * @param numberTwo 
 * @return int 
 */
int sum(int numberOne , int numberTwo)
{
    return (numberOne + numberTwo);
}