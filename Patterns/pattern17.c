//////////////////////////////////////////////
//
//  File name : pattern17.c
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
void Display(int iRow , int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i<= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
        printf("*\t"); 
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows:\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns:\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}

//Time complexity = O(N)
// N is a natural number
// Where N >= 0 and N <= Infinity
