//////////////////////////////////////////////
//
//  File name : display_digits.c
//  Description : Accept number from user and display there digits
//  Author : Shrishti Sunil Gaikwad
//  Date : 12/05/2025
//
////////////////////////////////////////////////

#include <stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        printf("%d\n",iDigit);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}