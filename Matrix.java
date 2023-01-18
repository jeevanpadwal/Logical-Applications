package JeevanMatrix;
import java.lang.*;
import java.util.*;

public class Matrix
{
    public int iNo1;
    public int iNo2;
    public int Arr[][];

    public Matrix(int a,int b)
    {
        this.iNo1 = a;
        this.iNo2 = b;

        Arr = new int[iNo1][iNo2];
    }

   public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter data :");
        for(int i =0 ; i< Arr.length ; i++)
        {
            for(int j =0 ; j< Arr[i].length ; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

   public void Display()
    {
        System.out.println("Elements of array :");

         for(int i =0 ; i< Arr.length ; i++)
        {
            for(int j =0 ; j< Arr[i].length ; j++)
            {
               System.out.print(Arr[i][j]+" ");
            }
            System.out.println();
            
        }
    }
}

