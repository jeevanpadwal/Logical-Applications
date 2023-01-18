//accept number from user and off toggel 7th bit of that number if it 
//is on return modified number

import java.lang.*;
import java.util.*;

class Bitwise
{
    public int ToggelBit(int iNo)
    {
        int iMask = 0X00000040;
        int iResult =0;

        iResult = iNo | iMask;

        return iResult;
    }

}

class Pro3
{

    public static void main(String arg[])
    {
        Scanner sobj= new Scanner(System.in);
        Bitwise bobj = new Bitwise();

        System.out.println("enter number");
        int iValue = sobj.nextInt();

        int iRet = bobj.ToggelBit(iValue);

        System.out.println("Changed number is :"+iRet);
    }
}