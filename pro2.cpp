//accept string and copy string without white spacess of that string anather
#include<iostream>
using namespace std;

void StrCpyX(char *src,char *dest)
{

    while(*src != '\0')
    {

        if(*src != ' ')
        {

            *dest =*src;
            dest++;
        }
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

   StrCpyX(Arr,Brr);

   cout<<"Reversedd copied string is :"<<Brr<<endl; 
 
}