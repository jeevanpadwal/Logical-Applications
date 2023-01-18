
import java.lang.*;
import java.util.*;
import java.io.*;

class File_Operation
{
    void Write_File(String str)
    {
        try
        {
            Scanner sc1 = new Scanner(System.in);
            System.out.println("Enter data :");
            String data =sc1.nextLine();


            FileWriter fWriter = new FileWriter("C:/Users/G1/Desktop/LBA/assignment42/"+str,true);

            BufferedWriter bw = new BufferedWriter(fWriter);

            bw.write(data);
        

            bw.close();
            fWriter.close();
        }
        catch(IOException obj){}

    }

}

class Por3
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);
      File_Operation fobj = new File_Operation();

      System.out.println("Enter file name :");
      String file_name = sobj.nextLine();

        fobj.Write_File(file_name);
   }
}