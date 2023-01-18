import JeevanMatrix.Matrix;
import java.lang.*;
import java.util.*;

class MyMatrix extends Matrix
{
    public MyMatrix(int a, int b)
    {
        super(a,b);
    }

   public void Transpose()
    {
        int iTemp = 0;
       for(int i =0 ; i < iNo1; i++)
       {
        for(int j =0;j < iNo2 ; j++)
        {
            iTemp = Arr[i][j];
            Arr[i][j] = Arr[j][i];
            Arr[j][i] = iTemp;
        }
       }
    }
}

class Pro1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter no.of Rows :");
        int iRow = sobj.nextInt();

        System.out.println("Enter no. col : ");
        int iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow,iCol);
        mobj.Accept();
        mobj.Display();
        
        mobj.Transpose();
        mobj.Display();

    }
}