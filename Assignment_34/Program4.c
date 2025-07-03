/*
Write a program which return largest element from singly linear linked list.
Input Linked list : |110|->|230|->|320|->|240|
Output : 320
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

int Maximum(PNODE head)
{
    int iMax = head->data;

    while(head != NULL)
    {
        if((head->data) > iMax)
        {
            iMax = head->data;
        }
        head = head->next;
    }
    return iMax;
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

    InsertFirst(&First, 110);
    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 250);

    Display(First);

    iRet = Maximum(First);
    
    printf("Largest element from the linked list is : %d\n",iRet);
    
    return 0;
}