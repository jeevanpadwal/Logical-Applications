import java.lang.*;
import java.util.*;

class Pro4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter no of rows :");
        int row = sobj.nextInt();

        System.out.println("Enter no of columns :");
        int col = sobj.nextInt();


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
           
         int iCnt =0;
         int iSum =0;
         int i =0;
         int j =0;
         for(iCnt =0;iCnt < col ; iCnt ++)
       {
           for(i =0; i < arr.length;i++)
           {
                for(j =iCnt;j < arr[i].length;j++)
              {
                 iSum = iSum + arr[i][j];
                 break;
              }
        

            }
        
          System.out.println("addition of column element is :"+iSum);  
          iSum =0;
        }
     
    }
}