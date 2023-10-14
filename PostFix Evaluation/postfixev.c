#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int stack[20];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char exp[20];
    char *e;
    int n1, n2, n3, num;
    printf("Enter the expression :: ");
    gets(exp);
    e = exp;
    while (*e != '\0')
    {
        if (isdigit(*e))
        {
            num = (*e) - '0';
            push(num);
        }
        else
        {
            n1 = pop();
            n2 = pop();
            if (*e == '+')
            {
                n3 = n2 + n1;
            }
            else if (*e == '-')
            {
                n3 = n2 - n1;
            }
            else if (*e == '*')
            {
                n3 = n2 * n1;
            }
            else if (*e == '/')
            {
                if (n1 == 0)
                {
                    printf("Division by zero is not allowed\n");
                    break;
                }
                n3 = n2 / n1;
            }
            push(n3);
        }
        e++;
    }
    printf("\nThe result of expression %s  =  %d\n\n", exp, pop());
    return 0;
}
