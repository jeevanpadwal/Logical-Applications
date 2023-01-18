import java.lang.*;
import java.util.*;

class Pro2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter no of rows :");
        int row = sobj.nextInt();

        System.out.println("Enter no of columns :");
        int col = sobj.nextInt();

        System.out.println("Entere no for find frequency :");
        int iNo = sobj.nextInt();


        int[][] arr = new int[row][col];

        System.out.println("Enter matrix :");

        for(int i =0; i < arr.length;i++)
        {
            for(int j =0;j < arr[i].length;j++)
            {
                arr[i][j] = sobj.nextInt();
            }
            System.out.println("\n");
        }

        int iSum =0;

        for(int i =0; i < arr.length;i++)
        {
            for(int j =0;j < arr.length;j++)
            {
                if(arr[i][j] == iNo)
                {
                    iSum++;
                }
            }
            System.out.println("\n");
        }
        System.out.println("Frequency of that no is :"+iSum);
    }
}