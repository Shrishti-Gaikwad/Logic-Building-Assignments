//////////////////////////////////////////////
//
//  File name : pattern31.java
//  Description : Problems on Patterns
//  Author : Shrishti Sunil Gaikwad
//  Date : 18/05/2025
//
////////////////////////////////////////////////

//Input = 4,4
/*
* o o *
* o o *
* o o *
* o o *
*/

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                
                if((j == 0) || (j == iCol))
                {
                    System.out.print(i+"*\t");
                }
                else
                {
                    System.out.print(i+"o\t");
                }
            }   
            System.out.println();
        }
    }
}

class pattern31
{
    public static void main(String A[])
    {
        try (Scanner sobj = new Scanner(System.in)) {
            int iValue1 = 0,iValue2 = 0;

            System.out.println("Enter number of rows:");
            iValue1 = sobj.nextInt();

            System.out.println("Enter number of columns:");
            iValue2 = sobj.nextInt();

            Pattern pobj = new Pattern();

            pobj.Display(iValue1, iValue2);
        }
    }
}