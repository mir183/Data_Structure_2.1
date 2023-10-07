#include <stdio.h>

int stack[100];
int top = -1;
int n;

int pushelement()
{
    if (top == n - 1)
    {
        printf("Can't push storage full\n");
    }
    else
    {
        printf("Enter the value: ");
        int val;
        scanf("%d", &val);
        top++;
        stack[top] = val;
    }
}

int popelement()
{
    if (top == -1)
    {
        printf("Can't pop storage empty\n");
    }
    else
    {
        top--;
    }
}

int idfullstack()
{
    if (top == n - 1)
    {
        printf("Yes, stack is full\n");
    }
    else
    {
        printf("Stack is not full\n");
    }
}

int isemptystack()
{
    if (top == -1)
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("The stack is not empty\n");
    }
}

int showstack()
{
    if (top == -1)
    {
        printf("Stack is empty, nothing to print\n");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
    }
}

int main()
{
    printf("Enter the size of stack: ");
    scanf("%d", &n);
    int choice;
    while (1)
    {
        printf("1. Push\n2. Pop\n3. isFill\n4. isEmpty\n5. Show\n6.Exit....\n");
        printf("Enter a your choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            pushelement();
        }
        else if (choice == 2)
        {
            popelement();
        }
        else if (choice == 3)
        {
            idfullstack();
        }
        else if (choice == 4)
        {
            isemptystack();
        }
        else if (choice == 5)
        {
            showstack();
        }
        else if (choice == 6)
        {
            break;
        }
    }
}