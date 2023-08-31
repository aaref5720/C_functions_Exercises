/**
 * @file 11_Check_Whether_Tow_Given_Strings_Are_an_Anagram.c
 * @author Abdelrahman Aref
 * @brief  The target is to creat a function that decided if the two given strings are Anagram or not.
 * @version 0.1
 * @date 2023-08-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_Size    20

void are_Anagram_Strings(char string_1[MAX_Size] , char string_2[MAX_Size]);

int main(void)
{
    char string_1[MAX_Size] ;
    char string_2[MAX_Size] ;

    printf("Enter the first string : ");
    gets(string_1);

    printf("Enter the second string : ");
    gets(string_2);

    are_Anagram_Strings(string_1, string_2);
    
    return 0;
}

/**
 * @brief The function decides if the two given strings are Anagram or not.
 * 
 * @param string_1 
 * @param string_2 
 */

void are_Anagram_Strings(char string_1[MAX_Size] , char string_2[MAX_Size])
{
    int string1Length = 0 , string2Length = 0;
    int index_1 = 0 , index_2 = 0;
    int counter = 0 ;
    string1Length = strlen(string_1);
    string2Length = strlen(string_2);

    if(string1Length != string2Length)
    {
        printf("%s and %s are not anagram",string_1 ,string_2);
        exit(0);
    }

    for(index_1 = 0 ; index_1 < string1Length ; index_1++)
    {
        for (index_2 = 0 ; index_2 < string1Length; index_2++)
        {
            if(string_1[index_1] == string_2[index_2])
            {
                counter++;
            }
        }
            
    }

    (counter == string1Length) ? printf("%s and %s are anagram",string_1 ,string_2) : printf("%s and %s are not anagram",string_1 ,string_2);
    
}