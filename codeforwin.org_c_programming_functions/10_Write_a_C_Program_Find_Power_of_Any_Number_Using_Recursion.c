/**
 * @file 10_Write_a_C_Program_Find_Power_of_Any_Number_Using_Recursion.c
 * @author Abdelrahman Aref
 * @brief  The target is to find power of any number using recursion.
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include<stdio.h>

int power(int base , int pow);


int main(void)
{
    int base = 0 ;
    int pow = 0 ;

    printf("Enter the base : ");
    scanf("%d",&base);

    printf("Enter the power : ");
    scanf("%d",&pow);

    int result = power(base , pow);

    printf("%d ^ %d = %d",base ,pow ,result);

    return 0;
}


/**
 * @brief The function returns base ^ pow by recursion.
 * 
 * @param base 
 * @param pow 
 * @return int 
 */
int power(int base , int pow)
{

    if(pow == 0 )
    {
        return 1 ;
    }

    return (base * power(base , --pow));

}