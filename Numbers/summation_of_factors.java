////////////////////////////////////////////////////////////////////////////////
//
//  File name : summation_of_factors.java
//  Description : Accept number from user and display there summation of factors 
//  Author : Shrishti Sunil Gaikwad
//  Date : 17/05/2025
//
///////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Number
{
    public int SumFactors(int iNo)
    {
        int iCnt = 0, iSum = 0;
        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }
}

class summation_of_factors
{
    public static void main(String A[])
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        Number nobj = new Number();

        int iRet = nobj.SumFactors(iValue);

        System.out.println("Summation of factors is : "+iRet);
    }
}