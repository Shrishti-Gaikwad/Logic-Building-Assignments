////////////////////////////////////////////////
//
//  File name : program06.c
//  Description : Accept number from user and display there summation
//  Author : Shrishti Sunil Gaikwad
//  Date : 11/05/2025
//
////////////////////////////////////////////////

#include <stdio.h>

int Summation(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
       printf("%d ",iCnt);
    }
    return 0;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("Summation is:%d\n",iValue);

   return 0;
}