//in : 87983  //recursive
//out:9       //largest number

#include<stdio.h>
int Max(int no)
{
    static int iDigit =0;
    static int max =0;
     if( no <= 0)
     {
        return 0;
     }
     else
     {
        iDigit = no %10;

        if(iDigit > max)
        {
            max = iDigit;
        }
        no = no/10;
        Max(no);
     }
     return max;

}

int main()
{
    
    int iValue=0;
    int iRet =0;

    printf("Enter number :");
    scanf("%d",&iValue);

   iRet = Max(iValue);

   printf("%d",iRet);

    return 0;
}