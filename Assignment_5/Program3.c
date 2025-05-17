//Write a program which accept number from user and print its numbers line

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    int iNegative = -iNo;
    int iPositive = iNo;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf(" %d ",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter nummber:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

//Time Complexity = O(N)