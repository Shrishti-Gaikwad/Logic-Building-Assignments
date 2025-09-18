//////////////////////////////////////////////
//
//  File name : pattern20.c
//  Description : Problems on Patterns
//  Author : Shrishti Sunil Gaikwad
//  Date : 18/05/2025
//
////////////////////////////////////////////////

//Input : row = 4,col = 4
//Output :
/* 
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/

#include <stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i<= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
        printf("%d\t",j); 
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

// Time complexity = O(N)
// N is a natural number
// Where N >= 0 and N <= Infinity
