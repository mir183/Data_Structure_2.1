#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter all numbers\n");
    for(int i=1;i<=n;i++){
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }
    double avg=sum/n;
    printf("The avg is %.2lf",avg );
    return 0;
}
