//////////////////////////////////////////////
//
//  File name : pattern14.c
//  Description : Problems on Patterns
//  Author : Shrishti Sunil Gaikwad
//  Date : 18/05/2025
//
////////////////////////////////////////////////

//Input : row = 3,col = 3
//Output :
/* 
* * *
* * *
* * *
*/

#include <stdio.h>

//sequence
void Display()
{
    printf("*\t");
    printf("*\t");
    printf("*\t");

    printf("\n");

    printf("*\t");
    printf("*\t");
    printf("*\t");

    printf("\n");      

    printf("*\t");
    printf("*\t");
    printf("*\t");

    printf("\n");
}

int main()
{
    Display();

    return 0;
}

//Time complexity = O(N)
// N is a natural number

// Where N >= 0 and N <= Infinity