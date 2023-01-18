#include<stdio.h>

int FeqLessThan6(int iNo)
{
    int iDigit=0;
    int iCnt=0;

    while(iNo>0)
    {
        iDigit=iNo%10;

        if(iDigit<=6)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter the no\n");
    scanf("%d",&iValue);

    iRet=FeqLessThan6(iValue);

    printf("frequency is less than 6 is :%d\n",iRet);

    return 0;
}