//Write a program which accept N and print first 5 multiples of N

#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0, iMultiples = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d ",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}

//Time Complexity = O(N)