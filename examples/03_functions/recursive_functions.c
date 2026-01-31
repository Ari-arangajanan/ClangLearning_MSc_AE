/*
 * recursive_functions.c
 * Demonstrates recursion in C
 * Example: Factorial and Fibonacci for computing trajectory coefficients
 */

#include <stdio.h>

// Function prototypes
long factorial(int n);
long fibonacci(int n);
double power(double base, int exponent);

int main() {
    int n;
    
    printf("=== Recursive Functions Demo ===\n\n");
    
    // Factorial example
    printf("Factorial calculations:\n");
    for (n = 0; n <= 10; n++) {
        printf("  %d! = %ld\n", n, factorial(n));
    }
    
    // Fibonacci sequence
    printf("\nFibonacci sequence (first 15 terms):\n");
    for (n = 0; n < 15; n++) {
        printf("  F(%d) = %ld\n", n, fibonacci(n));
    }
    
    // Power function
    printf("\nPower calculations:\n");
    printf("  2^10 = %.0f\n", power(2.0, 10));
    printf("  3^5 = %.0f\n", power(3.0, 5));
    printf("  1.5^4 = %.4f\n", power(1.5, 4));
    
    return 0;
}

// Recursive factorial function
long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Recursive Fibonacci function
long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Recursive power function
double power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0;
    }
    if (exponent < 0) {
        return 1.0 / power(base, -exponent);
    }
    return base * power(base, exponent - 1);
}
