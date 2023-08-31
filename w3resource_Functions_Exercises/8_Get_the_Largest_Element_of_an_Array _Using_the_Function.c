/**
 * @file 8_Get_the_Largest_Element_of_an_Array _Using_the_Function.c
 * @author Abdelrahman Aref
 * @brief  The target is to creat a function that returns the largest element of an array.
 * @version 0.1
 * @date 2023-08-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

#define arraySize   5

void arrayInit(int array[] ,int arrLength);
int largest_element_in_array(int array[]);


int main(void)
{
    int array[arraySize];
    int arrLength = 0;

    printf("Enter the array length : ");
    scanf("%d",&arrLength);

    arrayInit(array);

    int largestNumber = largest_element_in_array(array);

    printf("The largest Number in the array is : %d " ,largestNumber);

    return 0 ;
}


/**
 * @brief The function Intializes array elements
 * 
 * @param array 
 */
void arrayInit(int array[] ,int arrLength)
{
    int index = 0 ;

    for (index = 0 ; index < arrLength; index++)
    {
        printf("Enter Element number %d : ",(index + 1));
        scanf("%d",&array[index]);
    }
    
}

/**
 * @brief The function decides the largest element in an array
 * 
 * @param array 
 */

int largest_element_in_array(int array[])
{
    int index = 0 ;
    int largestNumber = 0 ;

    for(index = 0 ; index < arraySize ; index++)
    {
        if(array[index] >= largestNumber)
        {
            largestNumber = array[index];
        }
    }

    return largestNumber;

}