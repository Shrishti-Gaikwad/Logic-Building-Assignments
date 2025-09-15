////////////////////////////////////////////////
//
//  File name : program04.c
//  Description : Used to print numbers from user input using Iteration
//  Author : Shrishti Sunil Gaikwad
//  Date : 05/05/2025
//
////////////////////////////////////////////////

#include <stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iValue;iCnt++)
    {
        printf("Hello\n");
    }

}

int main()
{
    int iNo = 0;
    printf("Enter the Frequency:\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}