/**
 * @file 12_Find_the_Maximum_and_Minimum_of_Some_Values_Using_a_Function_that_Returns_an_Array.c
 * @author Abdelrahman Aref
 * @brief  The target is to creat a function that returns the maximum and minimum numbers in an array.
 * @version 0.1
 * @date 2023-08-06
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

    ptr = Maximum_and_minimum_in_Array(array , arrayLength);

    printf("The maximum number in the given array is %d : \n",*ptr++);
    printf("The minimum number in the given array is %d : \n",*ptr);

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
 * @brief The function returns an array that contains maximum and minimum elements in array.
 * 
 * @param array 
 * @param arrayLength 
 * @return int* 
 */
int *Maximum_and_minimum_in_Array(int array[] , int arrayLength)
{
    int maximum = array[0]; 
    int minimum = array[0];
    int Index = 0;

    static int array_2[2] = {0};

    for(Index = 0 ; Index < arrayLength ; Index++)
    {
        if(array[Index] >= maximum)
        {
            maximum = array[Index];
        }

        if (array[Index] <= minimum)
        {
            minimum = array[Index];
        }
        
    }

    array_2[0] = maximum;
    array_2[1] = minimum;

    return array_2;
}