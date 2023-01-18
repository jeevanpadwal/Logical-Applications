//search value first occurance

#include<iostream>
using namespace std;

template<class T>
int SearchF(T *arr, int iSize,T value)
{
    int iCnt=0;

    for(int i=0; i<iSize ;i++)
    {
        iCnt++;
        if(arr[i] == value)
        {
            break;
        }
    }
    return iCnt;
}

int main()
{
   int arr[]={10,20,30,10,30,40,10,40,10};
   int iRet = SearchF(arr,9,40);
   cout<<iRet;

    return 0;
}