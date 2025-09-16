//////////////////////////////////////////////
//
//  File name : sum_digits.c
//  Description : Summation of digits
//  Author : Shrishti Sunil Gaikwad
//  Date : 12/05/2025
//
////////////////////////////////////////////////

#include <stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Summation of digits are : %d\n",iRet);

    return 0;
}