#include <stdio.h>
#include <stdlib.h>

struct std{
    char name[50];
    int age;
    float height;
};


int main()
{
    struct std student;
    strcpy(student.name,"Mir Hossain Ahmed");
    student.age=20;
    student.height=162;

    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Amount: %.2f cm\n", student.height);
    return 0;
}
