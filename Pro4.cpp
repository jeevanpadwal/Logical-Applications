//search value Last occurance

#include<iostream>
using namespace std;

template<class T>
int SearchL(T *arr, int iSize,T value)
{
    int iCnt=0;
    int Last =0;

    for(int i= 0; i< iSize ;i++)
    {
        iCnt++;
        if(arr[i] == value)
        {
            Last = iCnt;
        }
    }
    return Last;
}

int main()
{
   int arr[]={10,20,30,10,30,40,10,40,10};
   int iRet = SearchL(arr,9,40);
   cout<<iRet;

    return 0;
}