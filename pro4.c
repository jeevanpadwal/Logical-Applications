#include<stdio.h>
int Feq4(int iNo)
{
    int iDigit=0;
    int iCnt=0;

    while(iNo>0)
    {
        iDigit=iNo%10;

        if(iDigit==4)
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

    printf("enter no\n");
    scanf("%d",&iValue);

    iRet=Feq4(iValue);

    printf("frequency of 4 is :%d\n",iRet);

    return 0;
}