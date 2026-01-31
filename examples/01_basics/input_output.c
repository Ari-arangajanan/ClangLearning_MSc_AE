/*
 * input_output.c
 * Demonstrates basic input/output operations
 * Uses scanf for input and printf for output
 */

#include <stdio.h>

int main() {
    char name[50];
    int year;
    float gpa;
    
    printf("=== Student Information System ===\n\n");
    
    // Get user input
    printf("Enter your name: ");
    scanf("%49s", name);  // Read up to 49 characters
    
    printf("Enter your year of study (1-5): ");
    scanf("%d", &year);
    
    printf("Enter your GPA (0.0-4.0): ");
    scanf("%f", &gpa);
    
    // Display formatted output
    printf("\n=== Your Information ===\n");
    printf("Name: %s\n", name);
    printf("Year: %d\n", year);
    printf("GPA: %.2f\n", gpa);
    
    return 0;
}
