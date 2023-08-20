#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter three different numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int max;
    max=a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    printf("Largest is %d", max);
    return 0;
}
