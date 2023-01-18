#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;

    for(i=1;i<=iRow;i++)
    {
        for(j=iCol;j>=1;j--)
        {
             if(i==j||i==1||i==iRow||j==iCol||j==1)
            {
           printf("*\t");
            }
            else if(i<j)
            
            {
                printf("#\t");

            }
            else if(i>j)
            {
                printf("$\t");
            }
            
            

        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("enter rows and column");
    scanf("%d%d",&iValue1,&iValue2);

    Display(iValue1,iValue2);

    return 0;
}