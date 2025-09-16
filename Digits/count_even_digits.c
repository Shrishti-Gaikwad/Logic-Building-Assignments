//////////////////////////////////////////////
//
//  File name : count_even_digits.c
//  Description : Accept number from user and count there even digits
//  Author : Shrishti Sunil Gaikwad
//  Date : 12/05/2025
//
////////////////////////////////////////////////

#include <stdio.h>

int CountEvenDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit % 2) == 0)
        {
           iCnt++; 
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Number of even digits are : %d\n",iRet);

    return 0;
}