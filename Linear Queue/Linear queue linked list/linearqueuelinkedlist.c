#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

int enqueue(int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;

    if (rear == NULL)
    {
        front = ptr;
        rear = ptr;
    }
    else
    {
        rear->next = ptr;
        rear = ptr;
    }
    printf("Enqueued: %d\n", data);
}

int dequeue()
{
    if (front == NULL)
    {
        printf("UNDERFLOW: Queue is empty\n");
    }
    else
    {
        struct node *temp = front;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }

        printf("Dequeued: %d\n", temp->data);
        free(temp);
    }
}

int display()
{
    if (front == NULL)
    {
        printf("Queue is empty, nothing to display.\n");
    }

    else
    {
        struct node *ptr = front;
        printf("Queue elements: ");
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

int main()
{
    int choice, data;
    while (1)
    {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter the element to enqueue: ");
            scanf("%d", &data);
            enqueue(data);
        }
        else if (choice == 2)
        {
            dequeue();
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
