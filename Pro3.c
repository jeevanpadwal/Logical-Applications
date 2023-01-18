//in : HElloWOrld   //recursive
//out:5             // no.of small char

#include<stdio.h>
int SmallChar(char *str)
{
    static int iCnt =0;

     if(*str !='\0')
     {
        if(*str >= 'a' && *str <= 'z')
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

   iRet = SmallChar(ch);
   printf("%d",iRet);

    return 0;
}