#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double compound_interest_calculator(double P, double r, double n, double t)
{
    return P * pow((1 + (r / n)), n * t);
}

int main(int argc, char **argv)
{
    double P;
    double r;
    double n;
    double t;
    double A;

    P = 1000;
    r = 1.43;
    n = 1;
    t = 1;

    A = compound_interest_calculator(P, r, n, t);
    printf("Compounded interest: %f\n", A);

    return 0;
}
