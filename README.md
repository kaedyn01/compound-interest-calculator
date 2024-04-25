## Intro

This program is a compound interest calculator for the command line.

The following formula is used to calculate the interest:
$$A=P(1+{r/n})^{nt}$$
Where...
- *A* is the total amount after interest is generated
- *P* is the principal amount before interest is generated
- *r* is the nominal annual interest rate
- *n* is the compounding frequency
- *t* is the length of time interest is applied

## Installation (building from source)
1. Download or clone the source code
2. Run the following in the source directory:
```
make
```
3. Move the resulting binary to the desired directory

## Utilization
Run the program in the following format:
```
./cic P r n t
```
For example, calculating the interest on account with a principal amount
of 1,000 with an annual interest rate of 5.5% compounded over the course
of 3 years would require the following command:
```
./cic 1000 5.5 1 3
```
