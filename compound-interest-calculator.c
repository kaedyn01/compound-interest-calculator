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
    return P * (pow((1 + (r / n)), n * t));
}

/**
 * This main function handles gathering command line arguments, as well as outputting
 * the final amount and interest generated to the stdio.
 */
int main(int argc, char **argv)
{
   // Handle incorrect number of arguments, there should be 5 arguments including the program name.
    if (argc != 5)
    {
        printf("Compound Interest Calculator Usage: \"cic P r n t\"\n");
        printf("Where...\n");
        printf("\tP = principal amount\n");
        printf("\tr = annual interest rate\n");
        printf("\tn = compounding frequency,\n");
        printf("\tt = length of time interest is applied\n");
        return 1;
    }

    double A;                       // final compounded amount
    double P = atof(argv[1]);       // principal amount
    double r = atof(argv[2]) / 100; // annual interest rate
    double n = atof(argv[3]);       // compounding frequency
    double t = atof(argv[4]);       // length of time interest is applied (in years)

    A = compound_interest_calculator(P, r, n, t);

    printf("A = %.2f\n", A);
    printf("Interest Generated = %.2f\n", A - P);

    return 0;
}
