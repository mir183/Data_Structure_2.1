#include <stdio.h>
#include <stdlib.h>

int fibo(int n){
    if(n<=0){
        return 0;
    }
    else if (n==1){
        return 0;
    }
    else if(n==2) {
        return 1;
    }
    else{
       return fibo(n-1)+fibo(n-2); /* n=1; 0
                                        n=2, 1
                                        n=3; // it will call fibo(2)+fibo(1); 1+0
                                        n=4; // it will call, fibo(3)+fibo(2)
                                                                |       |
                                                            ->  1   +   1 // 2
                                        n=5 // it will call fib(4)+fibo(3)
                                                            -> 2    + 1 // 3
       */
    }
    }
int main()
{
    int n=5;
    for(int i=1; i<=n;i++){
        printf("%d ", fibo(i)); // 0 1 1 2 3
    }
    return 0;
}
