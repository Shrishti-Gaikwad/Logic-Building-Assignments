//////////////////////////////////////////////
//
//  File name : pattern16.c
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

//Iteration
void Display()
{
    int i = 0, j = 0;

    for(i = 1; i<= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
        printf("*\t"); 
        }
        printf("\n");
    }
}

int main()
{
    Display();
    return 0;
}

//Time complexity = O(N)
// N is a natural number
// Where N >= 0 and N <= Infinity