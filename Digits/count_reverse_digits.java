//////////////////////////////////////////////
//
//  File name : count_reverse_digits.java
//  Description : Accept number from user and count there reverse digits
//  Author : Shrishti Sunil Gaikwad
//  Date : 17/05/2025
//
////////////////////////////////////////////////

import java.util.*;

class Digits
{
    public int Reverse(int iNo)
    {
        int iRev = 0, iDigit = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;  
            iRev = iRev * 10 + iDigit;
            iNo = iNo / 10;
        }
        return iRev;
    }
}

class count_reverse_digits
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number:");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.Reverse(iValue);

        System.out.println("Reverse number is :"+iRet);
    }
}
