//accept no chk have zero or not
#include<stdio.h>
#include<stdbool.h>

 bool ChkZero(int iNo)
{
    int iDigit=0;
    bool bFlag=true;
    while(iNo>0)
    {
        iDigit=iNo%10;
        
        if(iDigit==0)
        {
            bFlag=false;
        }
       
      iNo=iNo/10;
        
    }

    return bFlag;

    
   
}
int main()

{
  int iValue=0;
    bool bRet=false ;
     printf("entr the number "); 
   scanf("%d",&iValue);

    bRet =ChkZero(iValue);

     if(bRet==true)
   {
      printf("number dont have zero");
   } 
      else 
    {
        printf("number contain zero");
    }

    return 0;
}