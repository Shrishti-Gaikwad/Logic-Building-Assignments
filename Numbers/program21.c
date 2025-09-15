////////////////////////////////////////////////
//
//  File name : program21.c
//  Description : Check whether number is prime or not using flag
//  Author : Shrishti Sunil Gaikwad
//  Date : 11/05/2025
//
////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

//program using flag
bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if(((iNo % iCnt) == 0))
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is Prime number\n",iValue);
    }
    else
    {
        printf("%d is Not prime number\n",iValue);
    }

    return 0;
}