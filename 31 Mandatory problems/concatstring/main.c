#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char arr1[]="Hello ";
    char arr2[]="Wrold!";
    strcat(arr1,arr2);
    printf("%s", arr1);
    return 0;
}
