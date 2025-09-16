////////////////////////////////////////////////
//
//  File name : display_factorial01.c
//  Description : Accept number from user and display there factorial
//  Author : Shrishti Sunil Gaikwad
//  Date : 11/05/2025
//
////////////////////////////////////////////////

#include <stdio.h>

int Factorial(int iNo)
{
   int iCnt = 0, iFact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is:%d\n",iRet);

   return 0;
}