#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    /*
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("DECIMAL %d, OCTAL %o", n,n);*/
    printf("Enter an oct number: ");
    scanf("%o", &n);
    printf("OCTAL %o, DECIMAL %d",n,n);
    return 0;
}
