///////////////////////////////////////////////////////////////////////////////////////
//
//  File name : summation_of_non_factors.java
//  Description : Accept number from user and display there summation of non factors
//  Author : Shrishti Sunil Gaikwad
//  Date : 17/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Number
{
    public int SumNonFactors(int iNo)
    {
        int iCnt = 0,iSum = 0;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iNo % iCnt) != 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }
}

class summation_of_non_factors
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        Number nobj = new Number();

        int iRet = nobj.SumNonFactors(iValue);

        System.out.println("Summation of non factors is: "+iRet);
    }
}