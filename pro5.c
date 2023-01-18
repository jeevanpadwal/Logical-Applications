#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int Diff(int Arr[],int iLength)
{

    int iCnt=0,iDigit=0,iBigCnt=0,inCnt=0;
    int iSum=0;

    for(iCnt=1;iCnt<iLength;iCnt++)
    {

        while(Arr[iCnt]!=0)
        {
            
            
            iDigit=*Arr%10;
            printf("%d\n",iDigit);
            *Arr=*Arr/10;

        }
        
    }
   
    
}

int main()
{
 int iSize=0,iCnt=0;
int *iptr=NULL;
int iRet=0;

 printf("enter no of elements");
 scanf("%d",&iSize);

 iptr=(int*)malloc(sizeof(int)*iSize);

 printf("enter the elements");
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
     scanf("%d",&iptr[iCnt]);

 }

 Diff(iptr,iSize);

 

free(iptr);

return 0;
}