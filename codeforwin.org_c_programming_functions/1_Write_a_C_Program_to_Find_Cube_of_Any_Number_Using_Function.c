/**
 * @file Find_Cube_of_Any_Number_Using_Function.c
 * @author Abdelrahman Aref
 * @brief  The target is to creat a function that gives Cube of number.
 * @version 0.1
 * @date 2023-08-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>


int numberCube(int number);


int main(void)
{
    int number = 0, number_cube = 0;

    printf("Enter a number : ");
    scanf("%d",&number);

    number_cube = numberCube(number);
    printf("The cube of %d is : %d",number ,number_cube);

    return 0 ;

}

/**
 * @brief The function returns the cube of number.
 * 
 * @param number 
 * @return int 
 */
int numberCube(int number)
{
    return (number * number * number);
}