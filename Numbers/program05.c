////////////////////////////////////////////////
//
//  File name : program05.c
//  Description : Check whether number is Even or Odd
//  Author : Shrishti Sunil Gaikwad
//  Date : 11/05/2025
//
////////////////////////////////////////////////

#include <stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
   if(((iNo % 5) == 0) && ((iNo % 3) == 0))
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

    printf("Enter number to check whether it is divisible by 3 and 5: ");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is divisible 3 and 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible 3 or 5\n",iValue);
    }

    return 0;
}