#include <stdio.h>
#include <stdlib.h>

int fact(int n){
    if (n==0){
        return 1;
    }
    else {
        return n*fact(n-1);
    }

}

int main()
{
    int n=4;
    int res=fact(n);
    printf("%d",res);
    return 0;
}
