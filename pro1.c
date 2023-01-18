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
void Reverse(PNODE head)
{
    int iDigit=0,iRev=0;

    while( head!= NULL)
    {
        iRev=0;
       
        while((head->data)>0)
        {
            iDigit=(head->data)%10;
            iRev=iRev*10+iDigit;
            head->data=(head->data)/10;
            
        }
        printf("|%d|->",iRev);

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

InsertFirst(&first,89);
InsertFirst(&first,6);

InsertFirst(&first,41);
InsertFirst(&first,17);

InsertFirst(&first,28);
InsertFirst(&first,11);

Display(first);

Reverse(first);


    return 0;
}