import java.lang.*;
import java.util.*;

class Bitwise
{
    public boolean ChkBit(int iNo,int ipos)
    {
        int iMask =0X00000001;
        int iResult=0;
        iMask = iMask >> ipos-1;

        iResult = iNo & iMask;
        if(iResult == 0)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }

}

class Pro1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Bitwise bobj =new Bitwise();

        System.out.println("Enter number :\n");
        int iValue = sobj.nextInt();

        System.out.println("enter position :\n");
        int pos = sobj.nextInt();

        boolean bRet;
        bRet =bobj.ChkBit(iValue,pos);
        if(bRet == true)
        {
            System.out.println("Bit is on");
        }
        else
        {
            System.out.println("Bit is off");
        }




    }
}