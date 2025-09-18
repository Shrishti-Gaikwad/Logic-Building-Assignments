//////////////////////////////////////////////
//
//  File name : pattern12.c
//  Description : Problems on Patterns
//  Author : Shrishti Sunil Gaikwad
//  Date : 18/05/2025
//
////////////////////////////////////////////////

//Input : 4   #
//Output : # # # #

//Input : 5   &
//Output : & & & & &

//Input : 3   z
//Output : z z z 

#include <stdio.h>

void Display(int iNo, char ch)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)       //N
    {
        printf("%c\t",ch);
    }
    printf("\n");

}

int main()
{
    int iValue = 0;
    char cValue = '\0';

    printf("Enter frequency:\n");
    scanf("%d",&iValue);

    printf("Enter character:\n");
    scanf("%c",&cValue);

    printf("Accepted character is :%c\n",cValue);

    Display(iValue,cValue);

    return 0;
}

//Time complexity = O(N)
// N is a natural number
// Where N >= 0 and N <= Infinity
