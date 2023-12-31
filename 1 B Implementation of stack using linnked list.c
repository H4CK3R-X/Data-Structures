#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
void display();

struct node
{
    int val;
    struct node *next;
};

struct node *head;

void main()
{
    int choice = 0;
    printf("Stack Operations Using Linked List\n");
    while (choice != 4)
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter Your Choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("\nExiting...\n");
            break;
        }
        default:
        {
            printf("\nEnter A Valid Choice\n");
            break;
        }
        }
    }
}

void push()
{
    int val;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
        printf("\nNot Able To Push The Element\n");
    else
    {
        printf("\nEnter The Value\n");
        scanf("%d", &val);
        if (head == NULL)
        {
            ptr->val = val;
            ptr->next = NULL;
            head = ptr;
        }

        else
        {
            ptr->val = val;
            ptr->next = head;
            head = ptr;
        }
        printf("\nPush Operation Completed\n");
    }
}

void pop()
{
    int item;
    struct node *ptr;
    if (head == NULL)
        printf("\nUnderFlow\n");
    else
    {
        item = head->val;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("\nValue Popped\n");
    }
}

void display()
{
    int i;
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
        printf("\nStack Is Empty\n");
    else
    {
        printf("\nStack Elements\n");
        while (ptr != NULL)
        {
            printf("%d", ptr->val);
            ptr = ptr->next;
        }
    }
}