#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int base, power, res;
    printf("Enter base and power: ");
    scanf("%d %d", &base, &power);
    res= pow(base, power);
    printf("%d", res);
    return 0;
}
