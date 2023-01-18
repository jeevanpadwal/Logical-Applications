#include<stdio.h>
#include<stdlib.h>

int Feq(int Brr[], int iLength)
{
    int iCnt=0,feqCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Brr[iCnt]%2)==0)
        {
            feqCnt++;
        }
    }
    return feqCnt;
}
int main()
{
    int iSize=0,iCnt=0,iRet=0;
    int *iptr=NULL;

    printf("enter the size of elements\n");
    scanf("%d",&iSize);

    iptr=(int*)malloc(sizeof(int)*iSize);

    printf("enter the elements\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&iptr[iCnt]);
    }

    iRet=Feq(iptr,iSize);

    printf("result is :%d",iRet);

    free(iptr);

    return 0;
}