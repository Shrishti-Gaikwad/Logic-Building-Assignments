/* Write a program which displays ASCII table.Table contains symbol,Decimal,Hexadecimal and 
octal repreasentation of every member from 0 to 255.
*/

#include <stdio.h>

void DisplayASCII()
{
    int iCnt;

    printf("_____________________________\n");
    printf("| Dec | Hex  | Oct | Char |\n");
    printf("_____________________________\n");
    
    for(iCnt = 0; iCnt <= 255; iCnt++) 
    {
        printf("|  %d  |  %x  |  %o  |  %c  |\n", iCnt, iCnt, iCnt, iCnt);
    }

    printf("_______________________________\n");
}

int main() 
{
    DisplayASCII();
    
    return 0;
}
