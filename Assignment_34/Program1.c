/*
Write a program which search first occurrence of particular element from singly linear linked list.
Function should return position at which element is found.
Input Linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 3
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

int SearchFirstOcc(PNODE head, int no)
{
    int iPos = 1;

    while(head != NULL)
    {
        if(head->data == no)
        {
            return iPos;
        }
        iPos++;
        head = head->next;
    }
    return -1;
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
    int iElement = 0;
    int iRet = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    Display(First);

    printf("Enter the elements : \n");
    scanf("%d",&iElement);

    iRet = SearchFirstOcc(First, iElement);

    if(iRet == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("First Occurence of element is: %d\n",iRet);
    }
    return 0;
}