#include <stdio.h>

#include <math.h>


double f(double x){ return exp(-fabs(x)) * sin(x); }

double g(double x){ return exp(-fabs(x)) * cos(x); }

int main()
{
    double x = 0;
    printf("X = ");
    scanf("%lf",&x);
    printf("g(x) = %lf \nf(x) = %lf \n", g(x), f(x));
    return 0;
}


