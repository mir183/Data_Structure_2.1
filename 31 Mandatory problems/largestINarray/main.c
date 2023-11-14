#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    int max=0;
    printf("Enter all numbers\n");
    for(int i=1;i<=n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Array elements are: ");
    for(int j=1;j<=n;j++){
        printf("%d ", arr[j]);
    }
    for(int k=1;k<=n;k++){
        if(arr[k]>max){
                max=arr[k];
        }
    }
    printf("Largest %d", max);
    return 0;
}
