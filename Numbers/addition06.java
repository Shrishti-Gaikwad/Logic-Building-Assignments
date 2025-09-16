//////////////////////////////////////////////
//
//  File name : addition06.java
//  Description : Addition of two numbers
//  Author : Shrishti Sunil Gaikwad
//  Date : 17/05/2025
//
////////////////////////////////////////////////

import java.util.*;

class Arithmetic
{
    public int iNo1;
    public int iNo2;

    public Arithmetic(int A, int B)
    {
        this.iNo1 = A;
        this.iNo2 = B;
    }

    public int Addition()
    {
        int iAns = 0;
        iAns = this.iNo1 + this.iNo2;
        return iAns;
    }
}

class addition06
{
    public static void main (String A[])
    {
        int iValue1 = 0, iValue2 = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter second number:");
        iValue2 = sobj.nextInt();

        Arithmetic aobj = new Arithmetic(iValue1,iValue2);
    
        iRet = aobj.Addition();

        System.out.println("Addition is :"+iRet);
    }
}