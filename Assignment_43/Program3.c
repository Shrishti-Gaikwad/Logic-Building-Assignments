/*
Write a recursive program which accept string from user and count number of small characters
Input : HElloWOrlD
Output : 5
*/

#include <stdio.h>

int Small(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
       if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
        Small(str);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20] = {'\0'};

    printf("Enter string : ");
    scanf("%s",arr);

    iRet = Small(arr);

    printf("%d",iRet);

    return 0;
}