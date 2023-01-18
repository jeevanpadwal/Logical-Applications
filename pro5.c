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
void DisplayLarge(PNODE head)
{
    int iDigit=0,iMax=0;
 

    while( head!= NULL)
    {
         
       
        while((head->data)>0)
        {

            iDigit=(head->data)%10;
            
            if(iDigit>iMax)
            {
                   iMax=iDigit;
            }
         
            head->data=(head->data)/10;
            
        }
       printf("%d\n",iMax);

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

InsertFirst(&first,419);
InsertFirst(&first,532);

InsertFirst(&first,250);
InsertFirst(&first,11);

Display(first);

DisplayLarge(first);


    return 0;
}