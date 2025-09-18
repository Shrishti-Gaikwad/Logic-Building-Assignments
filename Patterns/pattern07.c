//////////////////////////////////////////////
//
//  File name : pattern07.c
//  Description : Problems on Patterns
//  Author : Shrishti Sunil Gaikwad
//  Date : 18/05/2025
//
////////////////////////////////////////////////

//Input : 4
//Output : 
/* 
4
3
2
1
0
*/

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo ; iCnt >= 0; iCnt--)
    {
        printf("%d\n",iCnt);
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter frequency:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

//Time complexity = O(N)
// N is a natural number
// Where N >= 0 and N <= Infinity
