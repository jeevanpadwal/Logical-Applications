#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int Diff(int Arr[],int iLength)
{

    int iCnt=0,iMax=0,iMin=Arr[iCnt],iDiff=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(iMax<(Arr[iCnt]))
        {
            iMax=Arr[iCnt];
        }
    
    }
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
    
        if(iMin>Arr[iCnt])
        {
            iMin=Arr[iCnt];
        }
    }
    
    iDiff=iMax-iMin;
    return iDiff;
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

 iRet=Diff(iptr,iSize);

 printf("differance between largest and smallest is :%d",iRet);

free(iptr);

return 0;
}