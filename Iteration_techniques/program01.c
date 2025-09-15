////////////////////////////////////////////////
//
//  File name : program01.c
//  Description : Used to print Hello 4times using Iteration
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
        printf("Hello\n");
    }
}

int main()
{
    Display();

    return 0;
}
