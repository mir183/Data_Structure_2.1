#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    printf("Which Multiplication Table?- ");
    scanf("%d",&m);
    for(int i=1;i<=10;i++){
            int res= m*i;
        printf(" %d  * %d = %d\n", i,m,res);
    }
    return 0;
}
