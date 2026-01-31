/*
 * multi_dimensional.c
 * Demonstrates 2D arrays (matrices)
 * Example: Flight trajectory data grid
 */

#include <stdio.h>

#define ROWS 5
#define COLS 4

void print_matrix(double matrix[ROWS][COLS], int rows, int cols);
void calculate_row_averages(double matrix[ROWS][COLS], int rows, int cols);

int main() {
    // 2D array: Flight data over 5 time intervals
    // Columns: Time(s), Altitude(m), Speed(m/s), Fuel(%)
    double flight_data[ROWS][COLS] = {
        {0.0,    0.0,     0.0,   100.0},
        {60.0,   2000.0,  150.0, 95.0},
        {120.0,  5000.0,  200.0, 90.0},
        {180.0,  8500.0,  250.0, 85.0},
        {240.0,  12000.0, 280.0, 80.0}
    };
    
    printf("=== Flight Trajectory Data ===\n\n");
    printf("Time(s)  Altitude(m)  Speed(m/s)  Fuel(%%)\n");
    printf("-------  -----------  ----------  ------\n");
    
    for (int i = 0; i < ROWS; i++) {
        printf("%6.0f   %10.0f   %9.0f   %6.0f\n", 
               flight_data[i][0], flight_data[i][1], 
               flight_data[i][2], flight_data[i][3]);
    }
    
    // Calculate rate of climb
    printf("\n=== Performance Metrics ===\n");
    for (int i = 1; i < ROWS; i++) {
        double time_diff = flight_data[i][0] - flight_data[i-1][0];
        double alt_diff = flight_data[i][1] - flight_data[i-1][1];
        double rate_of_climb = alt_diff / time_diff;
        printf("Interval %d: Rate of climb = %.2f m/s\n", i, rate_of_climb);
    }
    
    // Calculate average values for each column
    printf("\n=== Average Values ===\n");
    for (int j = 1; j < COLS; j++) {  // Skip time column
        double sum = 0.0;
        for (int i = 0; i < ROWS; i++) {
            sum += flight_data[i][j];
        }
        double avg = sum / ROWS;
        
        switch(j) {
            case 1:
                printf("Average Altitude: %.2f m\n", avg);
                break;
            case 2:
                printf("Average Speed: %.2f m/s\n", avg);
                break;
            case 3:
                printf("Average Fuel: %.2f%%\n", avg);
                break;
        }
    }
    
    return 0;
}
