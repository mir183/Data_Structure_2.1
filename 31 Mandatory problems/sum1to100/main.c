#include <stdio.h>
#include <stdlib.h>

    int sumOfOnetoHun(int n){
    if(n==0){
        return 0;
    } else {
    return n+sumOfOnetoHun(n-1); }
    }
int main()
{
    int n=100;
    int res= sumOfOnetoHun(n);
    printf("%d", res);
    return 0;
}
