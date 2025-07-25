/*
Write a recursive program which accept string from user and return smallest digit
Input : 87983
Output : 3
*/

#include <stdio.h>

int Min(int iNo)
{
    static int iMin = 9;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        Min(iNo);
    }
    return iMin;
}

int main()
{
    int iRet = 0, iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Min(iValue);

    printf("%d",iRet);

    return 0;
}