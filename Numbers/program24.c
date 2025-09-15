//////////////////////////////////////////////
//
//  File name : program24.c
//  Description : Check whether number is prime or not without using flag
//  Author : Shrishti Sunil Gaikwad
//  Date : 11/05/2025
//
////////////////////////////////////////////////

#include <stdio.h>
#include<stdbool.h>

//without using flag
bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2;(iCnt <= (iNo/2)); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;
        }
    }

    return (iCnt > (iNo/2));
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is a Prime number",iValue);
    }
    else
    {
        printf("%d is Not Prime number",iValue);
    }
    return 0;
}