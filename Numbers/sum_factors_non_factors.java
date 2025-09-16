////////////////////////////////////////////////////////////////////////////////////////////////// 
//
//  File name : sum_factors_non_factors.java
//  Description : Accept number from user and display there summation of factors & non factors
//  Author : Shrishti Sunil Gaikwad
//  Date : 17/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Number
{
    public void Sum(int iNo)
    {
        int iCnt = 0,iSum1 = 0,iSum2 = 0;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
                if((iNo % iCnt) == 0)
                {
                    iSum1 = iSum1 + iCnt;
                }
                else
                {
                    iSum2 = iSum2 + iCnt;
                }
        }
        System.out.println("Summation of factors is: "+iSum1);
        System.out.println("Summation of non factors is: "+iSum2);
    }
}

class sum_factors_non_factors
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.Sum(iValue);
    }
}