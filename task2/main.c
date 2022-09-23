#include <stdio.h>

#include "libs.c"

int main()
{
    double x = 0;
    printf("X = ");
    scanf("%lf",&x);
    printf("g(x) = %lf \nf(x) = %lf \n", g(x), f(x));
    return 0;
}
