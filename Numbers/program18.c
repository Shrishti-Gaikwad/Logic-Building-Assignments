////////////////////////////////////////////////
//
//  File name : program18.c
//  Description : Check whether it is factorial or not
//  Author : Shrishti Sunil Gaikwad
//  Date : 11/05/2025
//
////////////////////////////////////////////////

#include <stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;                       //Updator
    }
    for(iCnt = 1;iCnt <= (iNo/2); iCnt++)
    {
        if(((iNo % iCnt) == 0 ) && ((iCnt % 2) == 0))
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

   DisplayEvenFactors(iValue);

    return 0;
}