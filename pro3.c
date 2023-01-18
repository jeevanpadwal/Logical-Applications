#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
 struct node * next;

};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
void InsertFirst(PPNODE head,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->next=NULL;
    newn->data=no;

    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {
        newn->next=*head;
        *head=newn;
    }
}
void DisplayProduct(PNODE head)
{
    int iDigit=0,iMult=1;
 

    while( head!= NULL)
    {
      
       iMult=1;
        while((head->data)>0)
        {
            iDigit=(head->data)%10;
            if(iDigit>0)
            {
                   iMult=iMult*iDigit;
            }
         
            head->data=(head->data)/10;
            
        }
       printf("%d\n",iMult);

        head=head->next;
    }
}
void Display(PNODE head)
{
    while(head!=NULL)
    {
        printf("|%d|->",head->data);

        head=head->next;
    }
    printf("|NULL|\n");
}


int main()
{
PNODE first = NULL;

InsertFirst(&first,41);
InsertFirst(&first,32);

InsertFirst(&first,20);
InsertFirst(&first,11);

Display(first);

DisplayProduct(first);


    return 0;
}