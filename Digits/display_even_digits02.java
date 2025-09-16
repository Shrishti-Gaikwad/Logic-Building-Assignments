//////////////////////////////////////////////
//
//  File name : display_even_digits02.java
//  Description : Accept number from user and display there even digits
//  Author : Shrishti Sunil Gaikwad
//  Date : 17/05/2025
//
////////////////////////////////////////////////

import java.util.*;

class Digits
{
    public void DisplayEvenDigit(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        { 
            if(((iNo % 10) % 2) == 0)
            {   
                System.out.println(iNo % 10);
            }
            iNo = iNo / 10;
        }
    }
}

class display_even_digits02
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number:");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits();

        dobj.DisplayEvenDigit(iValue);
    }
}
