////////////////////////////////////////////////
//
//  File name : check_perfect_no01.c
//  Description : Check whether number is perfect or not 
//  Author : Shrishti Sunil Gaikwad
//  Date : 11/05/2025
//
////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0,iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;                       //Updator
    }
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
    {
        return true;                     
    }
    else
    {
        return false;
    }
   
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is Perfect number\n",iValue);
    }
    else
    {
        printf("%d is Non Perfect number\n",iValue);
    }

    return 0;
}