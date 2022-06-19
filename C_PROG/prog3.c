#include <stdlib.h>
#include <stdio.h>

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void rev_display();
int count();
void search();

struct node
{
    int info;
    struct node *next;
};
struct node *start = NULL;
int main()
{
    int choice;
    while (1)
    {
        printf("\n MENU\n");
        printf("\n 1.Create \n");
        printf("\n 2.Display \n");
        printf("\n 3.Insert at the beginning \n");
        printf("\n 4.Insert at the end \n");
        printf("\n 5.Insert at specified position\n");
        printf("\n 6.Delete from beginning\n");
        printf("\n 7.Delete from the end \n");
        printf("\n 8.Delete from specified position\n");
        printf("\n 9.Reverse Display\n");
        printf("\n 10.Count No of Nodes\n");
        printf("\n 11.Search Nodes\n");
        printf("\n 12.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert_begin();
            break;
        case 4:
            insert_end();
            break;
        case 5:
            insert_pos();
            break;
        case 6:
            delete_begin();
            break;
        case 7:
            delete_end();
            break;
        case 8:
            delete_pos();
            break;
        case 9:
            rev_display();
            break;
        case 10:
            count();
            break;
        case 11:
            search();
            break;
        case 12:
            exit(0);
            break;
        default:
            printf("\n Wrong Choice:\n");
            break;
        }
    }
    return 0;
}
void create()
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nOut of Memory Space:\n");
        exit(0);
    }
    printf("\nEnter the data value for the node: ");
    scanf("%d", &temp->info);
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void display()
{
    struct node *ptr;
    if (start == NULL)
    {
        printf("\nList is empty:\n");
        return;
    }
    else
    {
        ptr = start;
        printf("\nThe List elements are: \n");
        while (ptr != NULL)
        {
            printf("%d ", ptr->info);
            ptr = ptr->next;
        }
    }
}
void insert_begin()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nOut of Memory Space:\n");
        return;
    }
    printf("\nEnter the data value for the node: ");
    scanf("%d", &temp->info);
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        temp->next = start;
        start = temp;
    }
}
void insert_end()
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nOut of Memory Space:\n");
        return;
    }
    printf("\nEnter the data value for the node: ");
    scanf("%d", &temp->info);
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void insert_pos()
{
    struct node *ptr, *temp;
    int i, pos;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nOut of Memory Space:\n");
        return;
    }
    printf("\nEnter the position for the new node to be inserted: ");
    scanf("%d", &pos);
    printf("\nEnter the data value of the node: ");
    scanf("%d", &temp->info);

    temp->next = NULL;
    if (pos == 0)
    {
        temp->next = start;
        start = temp;
    }
    else
    {
        for (i = 0, ptr = start; i < pos - 1; i++)
        {
            ptr = ptr->next;
            if (ptr == NULL)
            {
                printf("\nPosition not found:\n");
                return;
            }
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
}
void delete_begin()
{
    struct node *ptr;
    if (ptr == NULL)
    {
        printf("\nList is Empty:\n");
        return;
    }
    else
    {
        ptr = start;
        start = start->next;
        printf("\nThe deleted element is :%d", ptr->info);
        free(ptr);
    }
}
void delete_end()
{
    struct node *temp, *ptr;
    if (start == NULL)
    {
        printf("\nList is Empty:");
        exit(0);
    }
    else if (start->next == NULL)
    {
        ptr = start;
        start = NULL;
        printf("\nThe deleted element is:%d", ptr->info);
        free(ptr);
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = NULL;
        printf("\nThe deleted element is:%d", ptr->info);
        free(ptr);
    }
}
void delete_pos()
{
    int i, pos;
    struct node *temp, *ptr;
    if (start == NULL)
    {
        printf("\nThe List is Empty:\n");
        exit(0);
    }
    else
    {
        printf("\nEnter the position of the node to be deleted: ");
        scanf("%d", &pos);
        if (pos == 0)
        {
            ptr = start;
            start = start->next;
            printf("\nThe deleted element is:%d", ptr->info);
            free(ptr);
        }
        else
        {
            ptr = start;
            for (i = 0; i < pos; i++)
            {
                temp = ptr;
                ptr = ptr->next;
                if (ptr == NULL)
                {
                    printf("\nPosition not Found:\n");
                    return;
                }
            }
            temp->next = ptr->next;
            printf("\nThe deleted element is:%d", ptr->info);
            free(ptr);
        }
    }
}
void rev_display()
{
    struct node *t1, *t2, *temp;
    t1 = t2 = NULL;

    if (start == NULL)
        printf("List is empty\n");
    else
    {
        while (start != NULL)
        {

            t2 = start->next;
            start->next = t1;
            t1 = start;
            start = t2;
        }
        start = t1;
        temp = start;
        printf("Reversed linked list is : ");
        while (temp != NULL)
        {
            printf("%d ", temp->info);
            temp = temp->next;
        }
    }
}
int count()
{
    struct node *temp = start;
    int count = 0;
    while (temp != NULL)
    {
        count = count + 1;
        printf("Number of Nodes: %d\n", count);
        temp = temp->next;
    }
    return count;
}
void search()
{
    struct node *temp;
    int item, i = 0, f;
    temp = start;
    if (temp == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d", &item);
        while (temp != NULL)
        {
            if (temp->info == item)
            {
                printf("item found at location %d \n", i + 1);

                f = 0;
                break;
            }
            else
            {
                f = 1;
            }
            i++;
            temp = temp->next;
        }
        if (f == 1)
        {
            printf("Item not found\n");
        }
    }
}