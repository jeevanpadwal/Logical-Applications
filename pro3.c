#include<stdio.h>
int Freq2(int iNo)
{
    int iDigit=0;
    int iCnt=0;

    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit==2)
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

    printf("enter the number\n");
    scanf("%d",&iValue);

    iRet=Freq2(iValue);

    printf("%d",iRet);

    return 0;
}