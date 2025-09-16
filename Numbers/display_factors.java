//////////////////////////////////////////////////////////////////////
//
//  File name : display_factors.java
//  Description : Accept number from user and display there factors
//  Author : Shrishti Sunil Gaikwad
//  Date : 17/05/2025
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Number
{
    public void DisplayFactors(int iNo)
    {
       int iCnt = 0;
       for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
       {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
       }
    }
}

class display_factors
{
    public static void main(String A[])
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.DisplayFactors(iValue);
    }
}