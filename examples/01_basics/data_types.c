/*
 * data_types.c
 * Demonstrates basic data types in C
 * Shows int, float, double, char and their sizes
 */

#include <stdio.h>

int main() {
    // Integer types
    int age = 25;
    short altitude = 1000;
    long distance = 384400000L;  // Distance to moon in meters
    
    // Floating point types
    float velocity = 340.29f;     // Speed of sound in m/s
    double gravity = 9.80665;     // Earth's gravity in m/s^2
    
    // Character type
    char grade = 'A';
    
    // Display values and sizes
    printf("=== Data Types in C ===\n\n");
    
    printf("Integer: %d (size: %zu bytes)\n", age, sizeof(int));
    printf("Short: %hd (size: %zu bytes)\n", altitude, sizeof(short));
    printf("Long: %ld (size: %zu bytes)\n", distance, sizeof(long));
    
    printf("\nFloat: %.2f (size: %zu bytes)\n", velocity, sizeof(float));
    printf("Double: %.5f (size: %zu bytes)\n", gravity, sizeof(double));
    
    printf("\nCharacter: %c (size: %zu byte)\n", grade, sizeof(char));
    
    return 0;
}
