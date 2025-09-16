////////////////////////////////////////////////
//
//  File name : summation_of_factors.c
//  Description : Accept number from user and display there summation of factors 
//  Author : Shrishti Sunil Gaikwad
//  Date : 11/05/2025
//
////////////////////////////////////////////////

#include <stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0, iSum =0;

    if(iNo < 0)
    {
        iNo = -iNo;                       //Updator
    }
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);

    printf("Summation of factors is: %d\n",iRet);

    return 0;
}