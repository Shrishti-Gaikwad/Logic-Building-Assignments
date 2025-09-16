//////////////////////////////////////////////
//
//  File name : count_digits02.java
//  Description : Accept number from user and count there digits
//  Author : Shrishti Sunil Gaikwad
//  Date : 17/05/2025
//
////////////////////////////////////////////////
import java.util.*;

class Digits
{
    public int CountDigits(int iNo)
    {
        int iCnt = 0;
        while(iNo != 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }
        return iCnt;
    }
}

class count_digits02
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number:");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.CountDigits(iValue);

        System.out.println("Number of Digits are :"+iRet);
    }
}
