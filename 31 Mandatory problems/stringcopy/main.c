#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char arr1[]="Hello world!\n";
    int n=strlen(arr1);
        char copied[n];
    for(int i=0;i<n;i++){
        copied[i]=arr1[i];
    }
    printf("%s", copied);
    return 0;
}
