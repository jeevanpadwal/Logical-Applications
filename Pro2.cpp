//count frrequency of generic value

#include<iostream>
using namespace std;

template<class T>
int Freq(T *arr, int iSize,T value)
{
    int iCnt=0;

    for(int i=0; i<iSize ;i++)
    {
        if(arr[i] == value)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
   int arr[]={10,20,30,10,30,40,10,40,10};
   int iRet = Freq(arr,9,10);
   cout<<iRet;

    return 0;
}