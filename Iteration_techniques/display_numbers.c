////////////////////////////////////////////////
//
//  File name : display_numbers.c
//  Description : Used to print numbers from 1 to 4 using Iteration
//  Author : Shrishti Sunil Gaikwad
//  Date : 05/05/2025
//
////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= 4;iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    Display();

    return 0;
}
