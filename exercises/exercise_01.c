/*
 * exercise_01.c - Sample Exercise Solution
 * 
 * Exercise: Create a program that asks for the user's name and age,
 * then greets them and tells them how old they'll be in 10 years.
 * 
 * This is a sample solution to demonstrate the expected format.
 */

#include <stdio.h>

int main() {
    char name[50];
    int age;
    
    printf("=== Personal Information ===\n\n");
    
    // Get user input
    printf("Please enter your name: ");
    scanf("%49s", name);
    
    printf("Please enter your age: ");
    scanf("%d", &age);
    
    // Calculate future age
    int future_age = age + 10;
    
    // Display greeting
    printf("\nHello, %s!\n", name);
    printf("You are currently %d years old.\n", age);
    printf("In 10 years, you will be %d years old.\n", future_age);
    
    return 0;
}
