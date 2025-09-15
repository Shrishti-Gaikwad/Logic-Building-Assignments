////////////////////////////////////////////////
//
//  File name : program14.c
//  Description : Check whether it is factorial or not
//  Author : Shrishti Sunil Gaikwad
//  Date : 11/05/2025
//
////////////////////////////////////////////////

#include <stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;    
    for(iCnt = 1;iCnt < iNo; iCnt++)
    {
        if(((iNo % iCnt) == 0 ))
        {
            printf("%d\n",iCnt);
        }

    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}