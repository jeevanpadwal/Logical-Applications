//in : 87983  //recursive
//out: 3       //smallest number

#include<stdio.h>
int Min(int no)
{
    static int iDigit =0;
    static int min=;
    
     if( no <= 0)
     {
        return 0;
     }
     else
     {
        iDigit = no %10;
        
        if(iDigit < min)
        {
            min = iDigit;
        }
        no = no/10;
        Min(no);
     }
     return min;

}

int main()
{
    
    int iValue=0;
    int iRet =0;

    printf("Enter number :");
    scanf("%d",&iValue);

   iRet = Min(iValue);

   printf("%d",iRet);

    return 0;
}