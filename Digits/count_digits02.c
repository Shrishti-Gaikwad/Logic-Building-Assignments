///////////////////////////////////////////////////////////////
//
//  File name : count_digits02.c
//  Description : Accept number from user and count there digits
//  Author : Shrishti Sunil Gaikwad
//  Date : 12/05/2025
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountDigits(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of Digits are : %d\n",iRet);

    return 0;
}