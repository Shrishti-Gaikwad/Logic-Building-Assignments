/*
Write a program which return second maximum element from singly linear linked list.
Input : |110|->|230|->|320|->|240|
Output : 240
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = no;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

int SecMaximum(PNODE head)
{
    int iMax1 = 0;
    int iMax2 = 0;
    
    while(head != NULL)
    {
        if((head->data) > iMax1)
        {
            iMax2 = iMax1;
            iMax1 = head->data;
        }
        else if(((head->data) > iMax2) && ((head->data) != iMax1))
        {
            iMax2 = head->data; 
        }
        head = head->next;
    }
    return iMax2;
}

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d | -> ",head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);

    iRet = SecMaximum(First);

    printf("Second maximum elements : %d\n",iRet);

    return 0;
}