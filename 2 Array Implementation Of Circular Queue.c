#include <stdio.h>
#define max 6

int queue[max], front = -1, rear = -1;

void enqueue(int element)
{
    if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = element;
    }
    else if((rear+1) % max == front)
        printf("\nQueue Is OverFlow\n");
    else
    {
        rear = (rear+1) % max;
        queue[rear] = element;
    }
}

void dequeue()
{
    if((front == -1) && (rear == -1))
        printf("\nQueue Is UnderFlow\n");
    else if(front == rear)
    {
        printf("The dequeued element is %d", queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("The dequeued Element Is %d", queue[front]);
        front = (front+1) % max;
    }
}

void display()
{
    int i = front;
    if(front == -1 && rear == -1)
        printf("\nQueue Is Empty\n");
    else
    {
        printf("\nElement In The Queue ");
        while(i <= rear)
        {
            printf("%d ", queue[i]);
            i++;
        }
    }
}

int main()
{
    int choice = 1, x;
    while(choice < 4 && choice != 0)
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter Value : ");
                scanf("%d", &x);
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
        }
    }
}