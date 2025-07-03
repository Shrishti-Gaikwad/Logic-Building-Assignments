/*
Write a program which returns addition of all even element from singly linear linked list.
Input linked list : |11|->|20|->|32|->|41|
Output : 52
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

int AdditionEven(PNODE head)
{
    int iSum = 0;
    
    while(head != NULL)
    {
        int iCnt = 0;
        if((head->data % 2) == 0)
        {
            iSum = iSum + head->data;
        }
        head = head->next;
    }
    return iSum;
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

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    Display(First);

    iRet = AdditionEven(First);

    printf("Addition even elements : %d\n",iRet);

    return 0;
}