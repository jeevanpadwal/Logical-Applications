//accept number from user and on its first 4 bit of that number if it 
//is on return modified number

import java.lang.*;
import java.util.*;

class Bitwise
{
    public int OnBit(int iNo)
    {
        int iMask = 0X0000000F;
        int iResult =0;

        iResult = iNo | iMask;

        return iResult;
    }

}

class Pro5
{

    public static void main(String arg[])
    {
        Scanner sobj= new Scanner(System.in);
        Bitwise bobj = new Bitwise();

        System.out.println("enter number");
        int iValue = sobj.nextInt();

        int iRet = bobj.OnBit(iValue);

        System.out.println("Changed number is :"+iRet);
    }
}