//////////////////////////////////////////////
//
//  File name : pattern04.c
//  Description : Problems on Patterns
//  Author : Shrishti Sunil Gaikwad
//  Date : 18/05/2025
//
////////////////////////////////////////////////

//Input : 4
//Output : 1 2 3 4

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter frequency:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

//Time complexity = O(N)
// N is a natural number
// Where N >= 0 and N <= Infinity