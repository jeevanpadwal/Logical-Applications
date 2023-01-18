// accept string and copy into anothewr bt toggling into capital
#include<iostream>
using namespace std;

void StrCpyRev(char *src,char *dest)
{

    while(*src != '\0')
    {

        if( *src >='A' && *src <='Z')
        {
            *src = *src + 32;
            *dest =*src;
              
        }
        else if( *src >='a'&& *src<= 'z')
        {
            *src = *src -32;
            *dest = *src;
        }
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

   cout<<"Small case  copied string is :"<<Brr<<endl; 
 
}