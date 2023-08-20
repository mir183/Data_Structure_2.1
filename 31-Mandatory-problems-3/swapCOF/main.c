#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int*y){
    int temp = *x;
    *x=*y;
    *y=temp;
    printf("Inside sawp: x=%d y=%d\n",*x,*y);
}
int main()
{
    int x=10, y=20;
    printf("Before swap x=%d y=%d\n",x,y);
    swap(&x, &y);
    printf("After swap x=%d y=%d\n",x,y);
    return 0;
}
