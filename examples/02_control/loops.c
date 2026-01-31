/*
 * loops.c
 * Demonstrates for, while, and do-while loops
 * Example: Countdown sequence and trajectory calculation
 */

#include <stdio.h>

int main() {
    int i;
    
    // For loop: Launch countdown
    printf("=== Launch Countdown ===\n");
    for (i = 10; i >= 0; i--) {
        if (i > 0) {
            printf("T-minus %d...\n", i);
        } else {
            printf("LIFTOFF!\n");
        }
    }
    
    // While loop: Altitude gain simulation
    printf("\n=== Altitude Gain Simulation ===\n");
    double altitude = 0.0;
    double velocity = 50.0;  // m/s
    int time = 0;
    
    while (altitude < 10000.0) {
        altitude += velocity;
        time++;
        if (time % 20 == 0) {  // Print every 20 seconds
            printf("Time: %ds, Altitude: %.2f m\n", time, altitude);
        }
    }
    printf("Target altitude reached at %d seconds\n", time);
    
    // Do-while loop: Menu system
    printf("\n=== Flight Computer Menu ===\n");
    int choice;
    do {
        printf("\n1. Check fuel\n");
        printf("2. Check altitude\n");
        printf("3. Check speed\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Fuel: 75%%\n");
                break;
            case 2:
                printf("Altitude: 8500m\n");
                break;
            case 3:
                printf("Speed: 250 m/s\n");
                break;
            case 4:
                printf("Exiting system...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);
    
    return 0;
}
