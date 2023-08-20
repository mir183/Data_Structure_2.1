#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int digit=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0){
        n=n/10;
        digit++;
    }
    printf("%d", digit);// bug detected
    return 0;
}
