/**
 * @file 16_Write_a_C_Program_Check_Whether_a_Number_Is_Palindrome_or_Not_Using_Recursion.c
 * @author Abdelrahman Aref
 * @brief  The target is to check whether a number is palindrome or not using recursion.
 * @version 0.1
 * @date 2023-08-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

char isPalindrome(int number);
int power(int base , int exponent);
int reverseNumber(int number);

int main(void)
{
    int number = 0;

    printf("Enter a number : ");
    scanf("%d",&number);

    char result = isPalindrome(number);

    (result == 0) ? printf("The number %d is palindrome\n",number) : printf("The number %d is not palindrome\n",number);

    return 0;
}

/**
 * @brief The function returns 0 if the number is palindrome and 1 if the number is not palindrome.
 * 
 * @param number 
 * @return char 
 */
char isPalindrome(int number)
{
    int reversedNumber = reverseNumber(number);
    return ((number == reversedNumber) ? 0 : 1);
}

/**
 * @brief The function returns the reverse of number.
 * 
 * @param number 
 * @return int 
 */
int reverseNumber(int number)
{
    int digits = 0 , counter = 1 ;

    while(number / counter)
    {
        digits++;
        counter *= 10;
    }

    if(number == 0)
    {
        return 0 ;
    }

    return (((number % 10) * power(10 , (digits - 1)) + reverseNumber(number / 10)));

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