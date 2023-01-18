#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool Chk(int Brr[], int iLength)
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
    bool fRet;

    printf("enter the size of elements\n");
    scanf("%d",&iSize);

    iptr=(int*)malloc(sizeof(int)*iSize);

    printf("enter the elements\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&iptr[iCnt]);
    }

    fRet=Chk(iptr,iSize);
    if(fRet==true)
    {
        printf("arry contain 11 ");
    }
    else
    {
        printf("arry does not contain 11");
    }

    free(iptr);

    return 0;
}