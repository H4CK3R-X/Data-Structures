#include <stdio.h>
#define n 5

int main()
{
    int queue[n], ch = 1, front = 0, rear = 0, i, j = 1, x = n;
    printf("\nQueue Using Array\n");
    while (ch)
    {
        printf("\n1. Insertion\n2. Deletion\n3. Display\n4. Exit\n");
        printf("\nEnter Your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            if (rear == x)
                printf("\nQueue Is Full\n");
            else
            {
                printf("\nEnter A Value : ");
                scanf("%d", &queue[rear++]);
            }
            break;
        }
        case 2:
        {
            if (front == rear)
                printf("\nQueue Is Empty\n");
            else
            {
                printf("\nDeleted Value Is %d", queue[front++]);
                x++;
            }
            break;
        }
        case 3:
        {
            if (front == rear)
                printf("\nQueue Is Empty\n");
            else
            {
                for (i = front; i < rear; i++)
                {
                    printf("%d ", queue[i]);
                }
            }
            break;
        }
        case 4:
            exit(0);
        default:
            printf("\nEnter A Valid Choice\n");
        }
    }
    return 0;
}