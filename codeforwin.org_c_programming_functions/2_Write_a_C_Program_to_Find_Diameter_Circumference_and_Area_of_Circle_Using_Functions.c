/**
 * @file 2_Write_a_C_Program_to_Find_Diameter_Circumference_and_Area_of_Circle_Using_Functions.c
 * @author Abdelrahman Aref
 * @brief  The target is to find diameter, circumference and area of circle using functions.
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

#define PI  3.14

float getDiameter(int radius);
float getCircumference(int radius);
float getArea(int radius);

int main(void)
{
    int radius = 0;
    float diameter = 0 , circumference = 0 , area = 0 ;
    printf("Enter a radius : ");
    scanf("%d",&radius);

    diameter = getDiameter(radius);
    circumference = getCircumference(radius);
    area = getArea(radius);

    printf("The diameter of the circle = %.2f\n",diameter);
    printf("The circumference of the circle = %.2f\n",circumference);
    printf("The area of the circle = %.2f\n",area);

    return 0;
}


/**
 * @brief Get the Diameter of the circle
 * 
 * @param radius 
 * @return int 
 */
float getDiameter(int radius)
{
    return (radius * 2);
}

/**
 * @brief Get the Circumference of the circle
 * 
 * @param radius 
 * @return int 
 */
float getCircumference(int radius)
{
    return (2 * PI * radius);
}

/**
 * @brief Get the Area of the circle
 * 
 * @param radius 
 * @return int 
 */
float getArea(int radius)
{
    return (PI * radius * radius);
}