#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

int pushitem()
{
    int item;
    printf("Enter data: ");
    scanf("%d", &item);
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    ptr->data = item;
    ptr->next = head;
    head = ptr;
}

int popitem()
{
    if (head == NULL)
    {
        printf("UnderFlow\n");
    }
    else
    {
        struct node *temp = head;
        int item = temp->data;
        head = head->next;
        free(temp);
    }
}

int showitem()
{
    if (head == NULL)
    {
        printf("UnderFlow, nothing to show\n");
    }
    else
    {
        struct node *ptr = head;
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
}

int isemptyitem()
{
    if (head == NULL)
    {
        printf("Stack is empty. Nothing to show\n");
    }
    else
    {
        printf("Stack is not empty\n");
    }
}

int main()
{
    printf("An empty Linked List has been created\n");
    int choice;
    while (1)
    {

        printf("1. Push\n2. Pop\n3. Show\n4. isempty\n5. Exit...\n");
        printf("What do you want to do? \n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            pushitem();
        }
        else if (choice == 2)
        {
            popitem();
        }
        else if (choice == 3)
        {
            showitem();
        }
        else if (choice == 4)
        {
            isemptyitem();
        }
        else if (choice == 5)
        {
            break;
        }
    }
}
