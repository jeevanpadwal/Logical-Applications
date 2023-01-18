import java.lang.*;
import java.util.*;

class Pro5
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
           
         int iCnt=0;
         int iSum =0;
         int i =0;
         int j =0;
        
       
           for(i =0; i < arr.length;i++)
           {
                for(j =0,iCnt=1;j < arr[i].length;j++,iCnt++)
              {
                if(iCnt <= col)
                {
                 arr[i][j] = arr[i+iCnt][j];  
                 System.out.println(arr[i][j]);
                }
              }
        
              System.out.println("\n");
            }
        
          System.out.println("addition of column element is :"+iSum);  
        
     
    }
}