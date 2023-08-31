/**
 * @file 9_Check_Armstrong_and_Perfect_Numbers_Using_the_Function.c
 * @author Abdelrahman Aref
 * @brief  The target is to creat two functions that decide if the number is Armstong / Perfect or not.
 * @version 0.1
 * @date 2023-08-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>
#include<math.h>

void is_an_Armstrong_Number(int number);
void is_a_Perfect_Number(int number);
int power(int base , int exponent);

int main(void)
{
    int number = 153 ;
    printf("Enter a number : ");
    scanf("%d",&number);

    is_an_Armstrong_Number(number);
    is_a_Perfect_Number(number);

   return 0 ;
}

/**
 * @brief The function decides if the number is an Armstrong number or not.
 * 
 * @param number 
 */
void is_an_Armstrong_Number(int number)
{
    int checker = 0 ;
    int digits = 0;
    int counter = 1;
    int sum = 0 ;
    int counter2 = 0;
    int counter3 = 1;

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

    (sum == number) ? printf("The %d is an Armstrong number\n",number) :  printf("The %d is not an Armstrong number\n",number);
}

/**
 * @brief The function decides if the number is a Perfect number or not.
 * 
 * @param number 
 */

void is_a_Perfect_Number(int number)
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

    (sum == number) ? printf("The %d is a Perfect number\n",number) :  printf("The %d is not a Perfect number\n",number);

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
