////////////////////////////////////////////////
//
//  File name : program07.c
//  Description : Check whether number is Even or Odd
//  Author : Shrishti Sunil Gaikwad
//  Date : 11/05/2025
//
////////////////////////////////////////////////

//Input : 5
// 1+2+3+4+5
#include <stdio.h>

int Summation(int iNo)
{
   int iCnt = 0, iSum = 0;

   for(iCnt = 1;iCnt <= iNo; iCnt++)
   {
       iSum = iSum + iCnt;
   }
   return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("Summation is:%d\n",iRet);

   return 0;
}