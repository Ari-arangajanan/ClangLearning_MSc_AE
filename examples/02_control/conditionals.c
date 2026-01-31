/*
 * conditionals.c
 * Demonstrates if-else statements
 * Example: Flight safety check system
 */

#include <stdio.h>

int main() {
    double altitude, speed, fuel;
    
    printf("=== Flight Safety Check System ===\n\n");
    
    printf("Enter altitude (meters): ");
    scanf("%lf", &altitude);
    
    printf("Enter speed (m/s): ");
    scanf("%lf", &speed);
    
    printf("Enter fuel percentage: ");
    scanf("%lf", &fuel);
    
    printf("\n=== Safety Analysis ===\n");
    
    // Altitude check
    if (altitude < 1000) {
        printf("WARNING: Low altitude!\n");
    } else if (altitude > 15000) {
        printf("CAUTION: Very high altitude\n");
    } else {
        printf("Altitude: Normal\n");
    }
    
    // Speed check
    if (speed < 100) {
        printf("WARNING: Low speed - risk of stall!\n");
    } else if (speed > 300) {
        printf("CAUTION: High speed\n");
    } else {
        printf("Speed: Normal\n");
    }
    
    // Fuel check
    if (fuel < 10) {
        printf("CRITICAL: Very low fuel!\n");
    } else if (fuel < 25) {
        printf("WARNING: Low fuel - consider landing\n");
    } else {
        printf("Fuel: Adequate\n");
    }
    
    // Overall status
    if (altitude >= 1000 && speed >= 100 && fuel >= 25) {
        printf("\nOverall Status: SAFE\n");
    } else {
        printf("\nOverall Status: ATTENTION REQUIRED\n");
    }
    
    return 0;
}
