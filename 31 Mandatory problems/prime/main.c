#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,count;
    printf("enter the number: ");
    scanf("%d",&n);
    if(n==1){
        count=1;
    }else if(n>1){
        for(int i=2;i<n;i++){
            if (n%i==0){
                count=1;
                break;
            }
        }
        }
        if(count==0){
            printf("Prime");
        }
        else{
            printf("Not prime");
        }
    return 0;
}

