#include <stdio.h>
#include <string.h>

int swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int bubblesort(int arr[], int n){
        for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]>arr[j]){
                swap(&arr[i], &arr[j]);
            }
        }
    }
    for( int k=0;k<n;k++){
        printf("%d ", arr[k]);
    }
        printf("\n");
}
int display(int arr[], int n){
        for( int k=0;k<n;k++){
        printf("%d ", arr[k]);
    }
    printf("\n");

}
int srch(int arr[],int n, int x){
    int i;
    int flag=0;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            flag++;
            break;
        }
        else{
            flag=flag;
        }
        }
        if(flag==0){
        printf("Not found");}
        else{
            printf("Your desired number is in %dth position\n", i+1);
        }
            printf("\n");
    }

int makearray(int arr[], int *n){
    printf("Enter all elements: ");
    for(int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");
}

int option(){
        printf("\n");
        printf("1.Make array.\n");
        printf("2.Display.\n");
        printf("3.Sort.\n");
        printf("4.Search an element.\n");
        printf("5.Remove a number.\n");
        printf("6.Update  a number.\n");
        printf("7.Insert an extra number,\n");
        printf("8. EXIT>>>>>>>>\n");
        printf("Enter your choice: ");
}


void remobe(int arr[],int *n,int x) {
    int i;
    int flag=0;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            flag++;
            break;
        }
    }
    if (flag>0) {
        for (int j = i; j < *n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        (*n)--;
    } else {
        printf("Element not found.\n");
    }
    printf("\n");
}

int update(int arr[], int n, int x,int p){
    if(p>=1 && p<=n){
        arr[p-1]=x;
        printf("Updated Successfully.\n");
    }
    else {
        printf("Invalid position. Update failed.\n");
    }
        printf("\n");
    }

int insert(int arr[], int *n, int x, int p){
    int i;
    for (i=*n-1;i>=p-1;i--) {
        arr[i+1] = arr[i];
    }
    arr[p-1] = x;
    (*n)++;

    for (i=0;i<*n;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}





int main(){
    int choice;
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("\n");
    int arr[n];
    while(1){
        option();
        scanf("%d", &choice);
        if(choice==1){
            makearray(arr, n);
        }
        else if(choice==2){
            display(arr, n);
        }
        else if(choice==3){
            bubblesort(arr, n);
        }
        else if(choice==4){
            int x;
            printf("Enter number: ");
            scanf("%d", &x);
            srch(arr,n,x);
        }
        else if(choice==5){
            int x;
            printf("Enter the number: ");
            scanf("%d", &x);
            remobe(arr,&n,x);
        }
        else if(choice==6) {
            int x,p;
            printf("Enter the number you want to update: ");
            scanf("%d", &x);
            printf("Enter the position: ");
            scanf("%d", &p);
            update(arr, n,x,p);
         }
         else if(choice==7){
            int x,p;
            printf("Enter the number you want to insert: ");
            scanf("%d", &x);
            printf("Enter the position: ");
            scanf("%d", &p);
            insert(arr, &n,x,p);
         }
         else if(choice==8){
            break;
         }


    }
return 0; 
}

