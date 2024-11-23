#include <stdio.h>
#include <math.h> // Required for pow()

int main() {
    int principal = 8000;      // Principal amount
    float rate = 0.04;         // Annual interest rate (in decimal)
    int time = 2;              // Time in years
    int n = 4;                 // Compounding quarterly

    // Correct usage of pow() for exponentiation
    float amount = principal * pow((1 + rate / n), n * time); 
    float compound_interest = amount - principal;

    // Use %.2f for formatted floating-point numbers
    printf("Compound Interest = Ugx %.2f\n", compound_interest);

 return 0;
}
