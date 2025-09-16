////////////////////////////////////////////////////
//
//  File name : check_even_odd.java
//  Description : Check whether number is even or odd
//  Author : Shrishti Sunil Gaikwad
//  Date : 17/05/2025
//
/////////////////////////////////////////////////////

import java.util.*;

class Number
{
    public boolean CheckEvenOdd(int iNo)
    {
        if((iNo % 2) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class check_even_odd
{
    public static void main(String A[])
    {
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        Number nobj = new Number();

        bRet = nobj.CheckEvenOdd(iValue);

        if(bRet == true)
        {
            System.out.println(iValue+" is even");
        }
        else 
        {
            System.out.println(iValue+" is odd");
        }

    }
}