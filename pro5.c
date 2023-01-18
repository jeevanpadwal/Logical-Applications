
// accept n number display divisible by 5 and even 
#include<stdio.h>
#include<stdlib.h>

void Mult(int Arr[] ,int iLength)
{
     int iCnt=0;
     for(iCnt=0;iCnt<iLength;iCnt++)
     {
         if((Arr[iCnt]%11)==0)
         {
             printf("%d\n",Arr[iCnt]);
         }
     }
}

int main()
    {
int iSize=0;
int *iptr=NULL;
int iCnt=0;

printf("enter the size of elements");
scanf("%d",&iSize);

iptr=(int*)malloc(sizeof(int)*iSize);

printf("enter elements");
for(iCnt=0;iCnt<iSize;iCnt++)
{

 scanf("%d",&iptr[iCnt]);

}

Mult(iptr,iSize);


        return 0;
    }
