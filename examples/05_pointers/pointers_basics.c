/*
 * pointers_basics.c
 * Demonstrates basic pointer concepts
 * Example: Working with flight data using pointers
 */

#include <stdio.h>

void swap(int *a, int *b);
void modify_value(int *ptr);

int main() {
    int altitude = 5000;
    int *ptr_altitude;
    
    printf("=== Pointer Basics ===\n\n");
    
    // Pointer assignment
    ptr_altitude = &altitude;
    
    printf("Altitude value: %d\n", altitude);
    printf("Altitude address: %p\n", (void*)&altitude);
    printf("Pointer value (address it holds): %p\n", (void*)ptr_altitude);
    printf("Value at pointer address: %d\n", *ptr_altitude);
    
    // Modifying value through pointer
    printf("\n=== Modifying Through Pointer ===\n");
    printf("Before: altitude = %d\n", altitude);
    *ptr_altitude = 8000;
    printf("After: altitude = %d\n", altitude);
    
    // Passing pointer to function
    printf("\n=== Function with Pointer ===\n");
    printf("Before function: altitude = %d\n", altitude);
    modify_value(&altitude);
    printf("After function: altitude = %d\n", altitude);
    
    // Swapping values
    printf("\n=== Swapping Values ===\n");
    int speed1 = 250, speed2 = 300;
    printf("Before swap: speed1 = %d, speed2 = %d\n", speed1, speed2);
    swap(&speed1, &speed2);
    printf("After swap: speed1 = %d, speed2 = %d\n", speed1, speed2);
    
    // Pointer arithmetic
    printf("\n=== Pointer Arithmetic ===\n");
    int sensors[5] = {100, 200, 300, 400, 500};
    int *ptr = sensors;
    
    printf("Array elements using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("  sensors[%d] = %d (at address %p)\n", 
               i, *(ptr + i), (void*)(ptr + i));
    }
    
    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void modify_value(int *ptr) {
    *ptr = 10000;  // Modify the value at the address
}
