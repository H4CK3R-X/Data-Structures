#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;

void insert();
void delete();
void display();

void main()
{
    int choice = 0;
    while(choice != 4)
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("\nEnter Your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\nEnter Valid Choice !\n");
        }
    }
}

void insert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
        printf("\nOverFlow\n");
    else
    {
        printf("\nEnter A Value : ");
        scanf("%d", &item);
        ptr -> data = item;
        if(front == NULL)
        {
            front = ptr;
            rear = ptr;
            front -> next = NULL;
            rear -> next = NULL;
        }
        else
        {
            rear -> next = ptr;
            rear = ptr;
            rear -> next = NULL;
        }
    }
}

void delete()
{
    struct node *ptr;
    if(front == NULL)
    {
        printf("\nUnderFlow\n");
    }
    else
    {
        ptr = front;
        front = front -> next;
        free(ptr);
    }
}

void display()
{
    struct node *ptr;
    ptr = front;
    if(front == NULL)
        printf("\nQueue Is Empty\n");
    else
    {
        printf("\nValues Are : ");
        while(ptr != NULL)
        {
            printf("%d ", ptr -> data);
            ptr = ptr -> next;
        }
    }
}