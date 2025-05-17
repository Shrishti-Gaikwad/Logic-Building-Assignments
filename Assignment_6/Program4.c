//Write a program which accept number from user and display its table.

#include <stdio.h>

void Table(int iNo)
{
    int iCnt = 0,iTable = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iTable = iNo * iCnt;
        printf("%d\n",iTable);
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Table(iValue);
    
    return 0;
}

//Time Complexity = O(N)