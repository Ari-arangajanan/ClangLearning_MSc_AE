/*
 * file_io.c
 * Demonstrates file input/output operations
 * Example: Flight log file management
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 256

// Function prototypes
void write_flight_log(const char *filename);
void read_flight_log(const char *filename);
void append_flight_entry(const char *filename);

int main() {
    const char *log_file = "flight_log.txt";
    int choice;
    
    printf("=== Flight Log Management System ===\n\n");
    
    do {
        printf("\n1. Create new flight log\n");
        printf("2. Read flight log\n");
        printf("3. Append entry to log\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();  // Consume newline
        
        switch(choice) {
            case 1:
                write_flight_log(log_file);
                break;
            case 2:
                read_flight_log(log_file);
                break;
            case 3:
                append_flight_entry(log_file);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);
    
    return 0;
}

void write_flight_log(const char *filename) {
    FILE *file = fopen(filename, "w");
    
    if (file == NULL) {
        printf("Error: Could not create file!\n");
        return;
    }
    
    fprintf(file, "=== FLIGHT LOG ===\n");
    fprintf(file, "Date: 2026-01-31\n");
    fprintf(file, "Aircraft: Boeing 777-300ER\n");
    fprintf(file, "Flight Number: BA001\n");
    fprintf(file, "\n");
    fprintf(file, "Time    Altitude  Speed    Fuel\n");
    fprintf(file, "-------------------------------------\n");
    fprintf(file, "08:00   0         0        100%%\n");
    fprintf(file, "08:15   5000      250      95%%\n");
    fprintf(file, "08:30   10000     450      90%%\n");
    fprintf(file, "08:45   11000     850      85%%\n");
    fprintf(file, "09:00   11000     850      80%%\n");
    
    fclose(file);
    printf("Flight log created successfully: %s\n", filename);
}

void read_flight_log(const char *filename) {
    FILE *file = fopen(filename, "r");
    
    if (file == NULL) {
        printf("Error: Could not open file! Create a log first.\n");
        return;
    }
    
    char line[MAX_LINE];
    
    printf("\n=== Reading Flight Log ===\n\n");
    
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    
    fclose(file);
}

void append_flight_entry(const char *filename) {
    FILE *file = fopen(filename, "a");
    
    if (file == NULL) {
        printf("Error: Could not open file!\n");
        return;
    }
    
    char time[10];
    int altitude, speed, fuel;
    
    printf("Enter time (HH:MM): ");
    scanf("%9s", time);
    printf("Enter altitude (m): ");
    scanf("%d", &altitude);
    printf("Enter speed (km/h): ");
    scanf("%d", &speed);
    printf("Enter fuel (%%): ");
    scanf("%d", &fuel);
    
    fprintf(file, "%s   %-9d %-8d %d%%\n", time, altitude, speed, fuel);
    
    fclose(file);
    printf("Entry added successfully!\n");
}
