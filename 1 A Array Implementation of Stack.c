#include <stdio.h>

int stack[100], i, j, choice = 0, n, top = 0;

void push();
void pop();
void show();

void main()
{
    printf("Enter The Number Of Elements In The Stack\n");
    scanf("%d", &n);
    printf("\nStack Operations Using Array");
    while (choice != 4)
    {
        printf("\nChoose One From The Below Option");
        printf("\n1. Push\n2. Pop\n3. Show\n4. Exit");
        printf("\nEnter Your Choice");
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
            show();
            break;
        }
        case 4:
        {
            printf("\nExiting...");
        }
        default:
        {
            printf("\nEnter Valid Choice");
        }
        }
    }
}

void push()
{
    int val;
    if (top == n)
        printf("\nOverflow");
    else
    {
        printf("\nEnter The Value");
        scanf("%d", &val);
        top += 1;
        stack[top] = val;
    }
}

void pop()
{
    if (top <= 0)
        printf("\nUnderflow");
    else
        top -= 1;
}

void show()
{
    for (i = top; i > 0; i--)
        printf("%d", stack[i]);
    if (top <= 0)
        printf("\nStack Is Empty");
}