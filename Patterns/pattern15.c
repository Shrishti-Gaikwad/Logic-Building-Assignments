//////////////////////////////////////////////
//
//  File name : pattern15.c
//  Description : Problems on Patterns
//  Author : Shrishti Sunil Gaikwad
//  Date : 18/05/2025
//
////////////////////////////////////////////////

//Input : row = 3,col = 3
//Output :
/* 
* * *
* * *
* * *
*/

#include <stdio.h>

//sequence Iteration
void Display()
{
   int j = 0;

   for(j = 1; j <= 3; j++)
   {
      printf("*\t"); 
   }
   printf("\n");

   for(j = 1; j <= 3; j++)
   {
      printf("*\t"); 
   }
   printf("\n");

   for(j = 1; j <= 3; j++)
   {
      printf("*\t"); 
   }
   printf("\n");

  
}

int main()
{
   Display();
   return 0;
}

//Time complexity = O(N)
// N is a natural number
// Where N >= 0 and N <= Infinity