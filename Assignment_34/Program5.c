/*
Write a program which return smallest element from singly linear linked list.
Input Linked list : |110|->|230|->|20|->|240|->|640|
Output : 20
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

int Minimum(PNODE head)
{
    int iMin = head->data;

    while(head != NULL)
    {
        if((head->data) < iMin)
        {
            iMin = head->data;
        }
        head = head->next;
    }
    return iMin;
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
    InsertFirst(&First, 230);
    InsertFirst(&First, 20);
    InsertFirst(&First, 240);
    InsertFirst(&First, 640);

    Display(First);

    iRet = Minimum(First);

    printf("Smallest element from the linked list is : %d\n",iRet);
    
    return 0;
}