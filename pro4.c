#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int ChkF(int Brr[], int iLength)
{
    int iCnt=0,FiCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Brr[iCnt]==11)
        {
            FiCnt++;
        }
       
    }
    return FiCnt;
}
int main()
{
    int iSize=0,iCnt=0;
    int *iptr=NULL;
    int iRet;

    printf("enter the size of elements\n");
    scanf("%d",&iSize);

    iptr=(int*)malloc(sizeof(int)*iSize);

    printf("enter the elements\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&iptr[iCnt]);
    }

    iRet=ChkF(iptr,iSize);
    
    printf("frequency is :%d",iRet);
    free(iptr);

    return 0;
}