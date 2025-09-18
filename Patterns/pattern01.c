//////////////////////////////////////////////
//
//  File name : pattern01.c
//  Description : Problems on Patterns
//  Author : Shrishti Sunil Gaikwad
//  Date : 18/05/2025
//
////////////////////////////////////////////////

//Input : 4
//Output : * * * *

/*
    Start
        Accept the frequency
        Iterate from 1 to that frequency
            Display * on screen
        Continue
    Stop        
*/

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
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