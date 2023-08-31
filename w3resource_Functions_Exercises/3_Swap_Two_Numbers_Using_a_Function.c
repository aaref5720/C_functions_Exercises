/**
 * @file 3_Swap_Two_Numbers_Using_a_Function.c
 * @author abdelrahman Aref
 * @brief The target is to creat a function that swap two variables values.
 * @version 0.1
 * @date 2023-08-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

void SwapFunction_1(int numberOne , int numberTwo);
void SwapFunction_2(int *ptrnumberOne , int *ptrnumberTwo);

int main(void)
{
    int numberOne = 0, numberTwo = 0;

    printf("Enter the first number : ");
    scanf("%d",&numberOne);

    printf("Enter the second number : ");
    scanf("%d",&numberTwo);

    SwapFunction_1(numberOne , numberTwo);

    int *ptrnumberOne = &numberOne ;
    int *ptrnumberTwo = &numberTwo;

    printf("Enter the first number : ");
    scanf("%d",&numberOne);

    printf("Enter the second number : ");
    scanf("%d",&numberTwo);

    printf("Before swapping number one = %d\tnumber two = %d\n",numberOne ,numberTwo);

    SwapFunction_2(ptrnumberOne , ptrnumberTwo);

    printf("After swapping number one = %d\tnumber two = %d",numberOne ,numberTwo);

    return 0 ;
}

/**
 * @brief the function Swap numberOne/numberTwo values directly and the pass is done by value
 * 
 * @param numberOne 
 * @param numberTwo 
 */

void SwapFunction_1(int numberOne , int numberTwo)
{
    printf("Before swapping number one = %d\tnumber two = %d\n",numberOne ,numberTwo);

    numberOne += numberTwo ;
    numberTwo = numberOne - numberTwo ;
    numberOne -= numberTwo ;

    printf("After swapping number one = %d\tnumber two = %d\n",numberOne ,numberTwo);
}

/**
 * @brief the function Swap numberOne/numberTwo values by pointers and the pass is done by reference
 *        which make the swaping result permanently.
 * 
 * @param ptrnumberOne 
 * @param ptrnumberTwo 
 */
void SwapFunction_2(int *ptrnumberOne , int *ptrnumberTwo)
{
    int temp = 0 ;
    temp = *ptrnumberOne;
    *ptrnumberOne = *ptrnumberTwo;
    *ptrnumberTwo = temp;
}