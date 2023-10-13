#include <stdio.h>
#include <stdlib.h>

int front = -1, rear = -1;
int queue[100];
int n;

void pushele()
{
    if (rear == n - 1)
    {
        printf("OVERFLOW: Queue is full\n");
    }
    else
    {
        int val;
        printf("Enter the element: ");
        scanf("%d", &val);

        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = rear + 1;
        }
        queue[rear] = val;
    }
}

void popele()
{
    if (front == -1)
    {
        printf("UNDERFLOW\n");
    }
    else
    {
        printf("Popped element: %d\n", queue[front]);
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = front + 1;
        }
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty, nothing to print.\n");
    }
    else
    {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    printf("Enter the size of the queue: ");
    scanf("%d", &n);
    int choice;
    while (1)
    {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            pushele();
        }
        else if (choice == 2)
        {
            popele();
        }
        else if (choice == 3)
        {
            display();
        }
        else if (choice == 4)
        {
            break;
        }
    }
}
