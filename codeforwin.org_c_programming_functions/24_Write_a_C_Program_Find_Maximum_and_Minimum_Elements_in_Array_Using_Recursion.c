/**
 * @file 24_Write_a_C_Program_Find_Maximum_and_Minimum_Elements_in_Array_Using_Recursion.c
 * @author Abdelrahman Aref
 * @brief  The target is to find maximum and minimum elements in array using recursion.
 * @version 0.1
 * @date 2023-08-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

#define MAX_Size    20

void arrayInit(int array[] ,int arrayLength);
int *Maximum_and_minimum_in_Array(int array[] , int arrayLength);

int main(void)
{
    int array[MAX_Size] = {0};
    int arrayLength = 0;
    int *ptr = NULL;

    printf("Enter number of values you want to input : ");
    scanf("%d",&arrayLength);

    arrayInit(array , arrayLength);

    ptr = Maximum_and_minimum_in_Array(array , (--arrayLength));

    printf("The maximum number in the given array is : %d  \n",*ptr++);
    printf("The minimum number in the given array is : %d  \n",*ptr);

    return 0 ;
}

/**
 * @brief The function Intializes array elements
 * 
 * @param array 
 */
void arrayInit(int array[] ,int arrayLength)
{
    int index = 0 ;

    for (index = 0 ; index < arrayLength; index++)
    {
        printf("Enter Element number %d : ",(index + 1));
        scanf("%d",&array[index]);
    }
    
}

/**
 * @brief The function returns an array that contains maximum and minimum elements in array using recursion.
 * 
 * @param array 
 * @param arrayLength 
 * @return int* 
 */

int *Maximum_and_minimum_in_Array(int array[] , int arrayLength)
{
   static int maximum = 0x80000000; 
   static int minimum = 0x7FFFFFFF;

    static int array_2[2] = {0};

    if(arrayLength == -1)
    {
        return array_2;
    }

    if(array[arrayLength] >= maximum)
    {
        maximum = array[arrayLength];
    }

    if (array[arrayLength] <= minimum)
    {
        minimum = array[arrayLength];
    }

    array_2[0] = maximum;
    array_2[1] = minimum;

   return Maximum_and_minimum_in_Array(array ,(arrayLength - 1));     
}