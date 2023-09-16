#include <stdio.h>
#include <stdlib.h>

int option(){
    printf("1. Right Half pyramid\n");
    printf("2. Inverted Right Half Pyramid\n");
    printf("3. Square \n");
    printf("4. Pyramid\n");
    printf("5. Inverted pyramid\n");
    printf("6. Diamond\n");
    printf("7. Butterfly\n");
    printf("8. Hollow Square\n");
    printf("9. Center Spaced Square\n");
    printf("10. EXIT>>>>>>>>>>>>>>\n");
}

void rhp(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

void irhp(int n){
    for(int i=0;i<n;i++){
        for(int j=i ;j<n;j++){
            printf("* ");
        }
        printf("\n");
    }

}

void sq(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("* ");
        }
        printf("\n");
    }
}

void pyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int k=0;k<2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}

void invp(int n){
    for(int i=n;i>0;i--){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int k=0;k<2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}


void butterfly(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf("* ");
        }
        for(int j=i;j<n;j++){
            printf("  ");
        }
        for(int j=i;j<n;j++){
            printf("  ");
        }
        for(int j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printf("* ");
        }
        for(int j=0;j<i;j++){
            printf("  ");
        }
        for(int j=0;j<i;j++){
            printf("  ");
        }
        for(int j=i;j<n;j++){
            printf("* ");
        }
        printf("\n");
    }
}

void hs(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i > 0 && i < n - 1 && j > 0 && j < n - 1){
                printf("  ");
                continue;
            }
            printf("* ");
        }
        printf("\n");
    }
}

void css(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==n/2 && j==n/2){
                printf("  ");
            }
            else{
            printf("* ");    
            }
            
        }
        printf("\n");
    }
}

int main(){
    int c,n;
    printf("Welcome to pattern printing.\n");
    while(1){
        option();
        printf("Which one you want to print: ");
        scanf("%d", &c);
        if(c==1){
        printf("Enter N: ");
        scanf("%d", &n);
            rhp(n);
        }
        else if(c==2){
        printf("Enter N: ");
        scanf("%d", &n);
            irhp(n);
        }
        else if (c==3){
            printf("Enter N: ");
        scanf("%d", &n);
            sq(n);
        }
        else if(c==4){
            printf("Enter N: ");
        scanf("%d", &n);
            pyramid(n);
        }
        else if(c==5){
            printf("Enter N: ");
        scanf("%d", &n);
        invp(n);
        }
        else if(c==6){
            printf("Enter N: ");
        scanf("%d", &n);
        pyramid(n);
        invp(n);
        }
        else if (c==7){
            printf("Enter N: ");
        scanf("%d", &n);
        butterfly(n);
        }
        else if(c==8){
            printf("Enter N: ");
        scanf("%d", &n);
            hs(n);
        }
        else if(c==9){
            printf("Enter N: ");
        scanf("%d", &n);
            css(n);
        }
        else if(c==10){
            break;
        }
    }
}