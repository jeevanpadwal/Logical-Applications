// retun the small characters from the file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


#define FILEZIZE 1024

int CountSmall(char Fname[])
{
    int fd = 0;     
    int iRet = 0;
    char Data[FILEZIZE];    
    int iCnt =0;
    int i =0;

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        for(i =0; i <=iRet;i++)
        {
            if(Data[i] >='a' && Data[i] <='z')
            {
                iCnt++;
            }
        }
    }

    close(fd);
    return iCnt;
}

int main()
{
    char Fname[20];
    int iRet = 0;

    printf("Enter file name to open\n");
    scanf("%s",Fname);

    iRet = CountSmall(Fname);
    printf("Small character is : %d\n",iRet);

    return 0;
}
