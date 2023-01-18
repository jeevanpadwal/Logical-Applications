//accept string and copy character of that string anathor in reversal order
#include<iostream>
using namespace std;

void StrCpyRev(char *src,char *dest)
{
    char *start=src;
    char *end=src;
    char temp;

    while(*end != '\0')
    {
        end++;

    }
    end--;

    while (start <= end)
    { 
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    
    }

    while(*src != '\0')
    {
        *dest = *src;

        dest++;
        src++;
    }
    *dest='\0';
  
    
}

int main()
{
   char Arr[30];
   char Brr[30];

   cout<<"enter the string "<<endl;
   cin.getline(Arr,30);

   StrCpyRev(Arr,Brr);

   cout<<"Reversedd copied string is :"<<Brr<<endl; 
 
}