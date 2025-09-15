////////////////////////////////////////////////
//
//  File name : program23.c
//  Description : Check whether it is factorial or not
//  Author : Shrishti Sunil Gaikwad
//  Date : 11/05/2025
//
////////////////////////////////////////////////

#include <stdio.h>
#include<stdbool.h>

//program using flag
bool CheckPrime(int iNo)
{
   int iCnt = 0;
   bool bFlag = true;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2;(iCnt <= (iNo/2)); iCnt++)
    {
        if((iNo % iCnt) == 0)
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