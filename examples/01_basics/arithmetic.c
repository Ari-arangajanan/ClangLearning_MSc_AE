/*
 * arithmetic.c
 * Demonstrates arithmetic operations in C
 * Example: Calculate aircraft speed and fuel consumption
 */

#include <stdio.h>

int main() {
    // Aircraft parameters
    double distance = 5000.0;      // Distance in km
    double fuel_capacity = 140000.0;  // Fuel in liters
    double fuel_used = 42000.0;    // Fuel used in liters
    double flight_time = 6.5;      // Flight time in hours
    
    // Calculations
    double average_speed = distance / flight_time;
    double fuel_efficiency = distance / fuel_used;
    double fuel_remaining = fuel_capacity - fuel_used;
    double fuel_percentage = (fuel_remaining / fuel_capacity) * 100.0;
    
    // Display results
    printf("=== Flight Analysis ===\n\n");
    printf("Distance traveled: %.2f km\n", distance);
    printf("Flight time: %.2f hours\n", flight_time);
    printf("Average speed: %.2f km/h\n", average_speed);
    
    printf("\n=== Fuel Analysis ===\n");
    printf("Fuel used: %.2f liters\n", fuel_used);
    printf("Fuel efficiency: %.4f km/liter\n", fuel_efficiency);
    printf("Fuel remaining: %.2f liters (%.2f%%)\n", 
           fuel_remaining, fuel_percentage);
    
    return 0;
}
