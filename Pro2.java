import java.lang.*;
import java.util.*;

class Bitwise
{
    public int OffBit(int iNo,int ipos)
    {
        int iMask =0X00000001;
        int iResult=0;
        iMask = iMask << ipos-1;

        iResult = iNo & iMask;

        return iResult;
    }

}

class Pro2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Bitwise bobj =new Bitwise();

        System.out.println("Enter number :\n");
        int iValue = sobj.nextInt();

        System.out.println("enter position :\n");
        int pos = sobj.nextInt();

        int iRet;
        iRet =bobj.OffBit(iValue,pos);
        System.out.println("Number is :"+iRet);
        


    }
}