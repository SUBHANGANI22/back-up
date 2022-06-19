#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * start;
void createList(int n);
void reverseList();
void displayList();
int main()
{
    int n, choice;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);
    printf("\nData in the list \n");
    displayList();
    printf("\nPress 1 to reverse the order of singly linked list\n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        reverseList();
    }
    printf("\nData in the list\n");
    displayList();

    return 0;
}
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;
    if (n <= 0)
    {
        printf("List size must be greater than zero.\n");
        return;
    }
    start = (struct node *)malloc(sizeof(struct node));
    if (start == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("Enter the data of node 1: ");
        scanf("%d", &data);
        start->data = data;
        start->next = NULL;
        temp = start;
        for (i = 2; i <= n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            if (newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);
                newNode->data = data;
                newNode->next = NULL;
                temp->next = newNode;
                temp = temp->next;
            }
        }
        printf("SINGLY LINKED LIST CREATED \n");
    }
}
void reverseList()
{
    struct node *prevNode, *curNode;
    if (start != NULL)
    {
        prevNode = start;
        curNode = start->next;
        start = start->next;
        prevNode->next = NULL;
        while (start != NULL)
        {
            start = start->next;
            curNode->next = prevNode;
            prevNode = curNode;
            curNode = start;
        }
        start = prevNode;
        printf("REVERSED LIST\n");
    }
}
void displayList()
{
    struct node *temp;
    if (start == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = start;
        while (temp != NULL)
        {
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
}