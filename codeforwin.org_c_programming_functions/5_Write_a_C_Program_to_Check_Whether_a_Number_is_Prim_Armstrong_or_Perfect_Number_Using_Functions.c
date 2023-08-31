/**
 * @file 5_Write_a_C_Program_to_Check_Whether_a_Number_is_Prim_Armstrong_or_Perfect_Number_Using_Functions.c
 * @author Abdelrahman Aref
 * @brief  The target is to check whether a number is prime, Armstrong or perfect number using functions.
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

int power(int base , int exponent);
char isPrime(int number);
char isPerfect(int number);
char isArmstrong(int number);

int main(void)
{
    int number = 0 ;
    char primeState = 0 , perfectState = 0 , ArmstrongState = 0 ;

    printf("Enter a number : ");
    scanf("%d",&number);

    primeState = isPrime(number);
    perfectState = isPerfect(number);
    ArmstrongState = isArmstrong(number);

    (0 == primeState) ? printf("%d is a prime number : \n",number) :  printf("%d is not a prime number : \n",number);
    (0 == perfectState) ? printf("%d is a perfect number : \n",number) :  printf("%d is not a perfect number : \n",number);
    (0 == ArmstrongState) ? printf("%d is an Armstrong number : \n",number) :  printf("%d is not an Armstrong number : \n",number);

    return 0;
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
    if (((number % 2) == 0) || ((number % 3) == 0) || ((number % 5) == 0) || ((number % 7) == 0))
    {
        state = 1 ;
    }

    return state;
}

/**
 * @brief The function checks if the number is perfect or not.
 * 
 * @param number 
 * @return char 
 */
char isPerfect(int number)
{
    int index = 1;
    int sum = 0;
    int state = 0 ;
    for(index = 1 ; index < number ; index++)
    {
        if((number % index) == 0)
        {
            sum += index ;
        }
    }

    state = (sum == number) ? 0 : 1;

    return state;
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
