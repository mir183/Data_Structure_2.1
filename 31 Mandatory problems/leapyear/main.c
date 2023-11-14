#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,y;
    printf("enter a year: ");
    scanf("%d", &y);
    r=y%4;
    if(r==0){
        printf("Leap Year\n");
    }
    else{
        printf("Not Leap year\n");
    }
    return 0;
}
