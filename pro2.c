#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int Small(int Arr[],int iLength)
{

    int iCnt=0,iMin=Arr[iCnt];
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(iMin>(Arr[iCnt]))
        {
            iMin=Arr[iCnt];
        }

    }
    return iMin;
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

 iRet=Small(iptr,iSize);

 printf("largest number is ;%d",iRet);

free(iptr);

return 0;
}