//in : 87983  //recursive
//out: 3       //smallest number

#include<stdio.h>
void Min(int no)
{
    static int iDigit =0;

    
     if( no <= 0)
     {
        return ;
     }
     else
     {
        iDigit = no % 10;
        
        printf("%d",iDigit);

        no = no/10;
        Min(no);
     }
     

}

int main()
{
    
    int iValue=0;
    int iRet =0;

    printf("Enter number :");
    scanf("%d",&iValue);

   Min(iValue);



    return 0;
}