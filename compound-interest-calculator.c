#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * This function handles the calculations for the compound interest calculator. 
 * See https://en.wikipedia.org/wiki/Compound_interest#Calculation for more details.
 *
 * Args: 
 *  P - principal amount
 *  r - nominal annual interest rate
 *  n - compounding frequency 
 *  t - length of time interest is applied (in years)
 *
 * Return: 
 *  A - final compounded amount
 */
double compound_interest_calculator(double P, double r, double n, double t)
{
    return P * pow((1 + (r / n)), n * t);
}

/**
 * Main function.
 */
int main(int argc, char **argv)
{
    double A;   // final compounded amount
    double P;   // principal amount
    double r;   // nominal annual interest rate
    double n;   // compounding frequency
    double t;   // length of time interest is applied (in years)

    P = 1000;
    r = 1.43;
    n = 1;
    t = 1;

    A = compound_interest_calculator(P, r, n, t);
    printf("Compounded interest: %f\n", A);

    return 0;
}
