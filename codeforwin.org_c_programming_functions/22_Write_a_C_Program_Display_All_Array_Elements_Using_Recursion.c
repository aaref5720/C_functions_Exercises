/**
 * @file 22_Write_a_C_Program_Display_All_Array_Elements_Using_Recursion.c
 * @author Abdelrahman Aref
 * @brief  the target is to display all array elements using recursion.
 * @version 0.1
 * @date 2023-08-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

#define MAX_Array_Size  20

void arrayInit(int array[] ,int arrLength);
void displayArray(int arr[] , int arrLength);

int main(void)
{
    int arr[MAX_Array_Size] = {0};
    int arrLength = 0;

    printf("Enter the array length : ");
    scanf("%d",&arrLength);

    arrayInit(arr ,arrLength);

    printf("The array Elements are : ");
    displayArray(arr ,(--arrLength));


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
 * @brief The function displays arr elements using recursion.
 * 
 * @param arr 
 */
void displayArray(int arr[] , int arrLength)
{
    if(arrLength == -1)
    {
        return;
    }

    displayArray(arr , arrLength - 1);

    printf("%d\t",arr[arrLength]);
}