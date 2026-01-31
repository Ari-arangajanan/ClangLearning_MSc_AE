/*
 * switch_case.c
 * Demonstrates switch-case statements
 * Example: Aircraft type classification
 */

#include <stdio.h>

int main() {
    int aircraft_type;
    
    printf("=== Aircraft Classification System ===\n\n");
    printf("1. Fighter Jet\n");
    printf("2. Commercial Airliner\n");
    printf("3. Cargo Aircraft\n");
    printf("4. Helicopter\n");
    printf("5. Drone\n");
    printf("\nEnter aircraft type (1-5): ");
    scanf("%d", &aircraft_type);
    
    printf("\n=== Aircraft Details ===\n");
    
    switch(aircraft_type) {
        case 1:
            printf("Type: Fighter Jet\n");
            printf("Max Speed: Mach 2+\n");
            printf("Typical Range: 1,500-3,000 km\n");
            printf("Primary Use: Military operations\n");
            break;
            
        case 2:
            printf("Type: Commercial Airliner\n");
            printf("Max Speed: 900 km/h\n");
            printf("Typical Range: 6,000-15,000 km\n");
            printf("Primary Use: Passenger transport\n");
            break;
            
        case 3:
            printf("Type: Cargo Aircraft\n");
            printf("Max Speed: 850 km/h\n");
            printf("Typical Range: 4,000-9,000 km\n");
            printf("Primary Use: Freight transport\n");
            break;
            
        case 4:
            printf("Type: Helicopter\n");
            printf("Max Speed: 250 km/h\n");
            printf("Typical Range: 500-1,000 km\n");
            printf("Primary Use: VTOL operations\n");
            break;
            
        case 5:
            printf("Type: Drone (UAV)\n");
            printf("Max Speed: Varies (50-400 km/h)\n");
            printf("Typical Range: 10-25,000 km\n");
            printf("Primary Use: Surveillance, delivery\n");
            break;
            
        default:
            printf("Error: Invalid aircraft type!\n");
            printf("Please enter a number between 1 and 5.\n");
    }
    
    return 0;
}
