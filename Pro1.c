//in : He llo WOr LD   //recursive
//out:3        //white spacess

#include<stdio.h>
int WhiteSpace(char *str)
{
    static int iCnt =0;

     if(*str !='\0')
     {
        if(*str == ' ')
        {
          
            iCnt++;
        }
        str++;
        WhiteSpace(str);
     }
     return iCnt;

}

int main()
{
    
    char ch[50];
    int iRet =0;

    printf("Enter string :");
    scanf(" %[^'\n']s",&ch);

   iRet = WhiteSpace(ch);
   printf("%d",iRet);

    return 0;
}