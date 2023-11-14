#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp, first, sec;
    first=10;
    sec=20;
    printf("Before swapping first=%d & sec=%d\n", first,sec);
    temp=first;
    first=sec;
    sec=temp;
    printf("after swapping first=%d & sec=%d", first,sec);
    return 0;
}
