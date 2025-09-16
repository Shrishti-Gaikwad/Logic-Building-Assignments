////////////////////////////////////////////////////////////////////////
//
//  File name : calculate_summation.c
//  Description : Used to print summation from user input using Iteration
//  Author : Shrishti Sunil Gaikwad
//  Date : 05/05/2025
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Calculate(int iValue)
{
    int iCnt = 0,iSum=0;
    for(iCnt = 1  ;iCnt <= iValue ;iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iNo = 0,iRet=0;
    printf("Enter the Frequency:");
    scanf("%d",&iNo);

    iRet = Calculate(iNo);
    printf("Summation is : %d\n",iRet);

    return 0;
}