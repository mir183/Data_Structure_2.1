#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("Enter a, b, c values: ");
    scanf("%d %d %d", &a, &b, &c);
    int d= b*b-4*a*c;
    double r1,r2;
    r1=(-b+ sqrt(d))/2*a;
    r2=(-b- sqrt(d))/2*a ;
    if(d<0){
        printf("Imaginary roots");
    }
    else if(d==0){
        printf("Same Equal root, %.2lf",r1);
    }
    else if (d>0){
        printf("first root=%.2lf, sec root=%.2lf\n",r1, r2);
    }
    return 0;
}
