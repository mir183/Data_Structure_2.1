#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    char arr[]="Hello World **1234$$";
    int digit=0,uppercase=0,lowercase=0,space=0,specialC=0,vowel=0,cons=0;
    int n=strlen(arr);
    for(int i=0;i<n;i++){
            if(isdigit(arr[i])){
                digit++;
            }
            else if(isupper(arr[i])) {
                uppercase++;
            }
            else if(islower(arr[i])){
                lowercase++;
            }
            else if(isspace(arr[i])){
                space++;
            }
            else{
                specialC++;
            }
    }
    for(int j=0;j<n;j++){
            char l=tolower(arr[j]);
        if(l=='a'|| l=='e'||l=='i'||l=='o'||l=='u'){
            vowel++;
        }
        else{
            cons++;
        }
    }
    printf("Total=%d\n",n);
    printf("Vowel=%d\n", vowel);
    printf("Consonant=%d\n", cons);
    printf("digit=%d\n", digit);
    printf("Uppercase=%d\n", uppercase);
    printf("Lowercase=%d\n", lowercase);
    printf("space=%d\n", space);
    printf("Special Character=%d\n", specialC);
    return 0;
}
