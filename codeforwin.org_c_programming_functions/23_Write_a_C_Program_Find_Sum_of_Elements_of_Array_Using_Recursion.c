/**
 * @file 23_Write_a_C_Program_Find_Sum_of_Elements_of_Array_Using_Recursion.c
 * @author Abdelrahman Aref
 * @brief  the target is to find sum of elements of array using recursion.
 * @version 0.1
 * @date 2023-08-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

#define MAX_Array_Size  20

void arrayInit(int array[] ,int arrLength);
int sum_of_array_elements(int arr[] , int arrLength);

int main(void)
{
    int arr[MAX_Array_Size] = {0};
    int arrLength = 0;
    int arraySum = 0; 

    printf("Enter the array length : ");
    scanf("%d",&arrLength);

    arrayInit(arr ,arrLength);

    arraySum = sum_of_array_elements(arr ,(--arrLength));

    printf("The sum of array elements is %d\n",arraySum);


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
 * @brief The function returns the sum of arr elements using recursion.
 * 
 * @param arr 
 */
int sum_of_array_elements(int arr[] , int arrLength)
{
    static int sum = 0;

    if(arrLength == -1)
    {
        return 0 ;
    }

    //sum_of_array_elements(arr ,arrLength - 1);
    return sum + arr[arrLength] + sum_of_array_elements(arr ,arrLength - 1);
  
}