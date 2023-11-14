#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, rev=0, rim;
    printf("Enter a number: ");
    scanf("%d",&n);
    int oRiGiNaLnum=n;
    while(n!=0){
        rim=n%10;
        rev=rev*10+rim;
        n=n/10;
    }
    if (oRiGiNaLnum==rev){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}
