/*
 * arrays_basics.c
 * Demonstrates arrays and basic array operations
 * Example: Sensor data collection and analysis
 */

#include <stdio.h>

#define MAX_READINGS 10

// Function prototypes
double calculate_average(double data[], int size);
double find_maximum(double data[], int size);
double find_minimum(double data[], int size);

int main() {
    // Array of temperature readings from aircraft sensors (in Celsius)
    double temperatures[MAX_READINGS] = {
        -15.5, -18.2, -20.1, -22.5, -19.8,
        -21.3, -17.6, -23.0, -19.5, -20.8
    };
    
    // Array of pressure readings (in kPa)
    double pressures[MAX_READINGS] = {
        101.3, 95.5, 89.2, 85.1, 81.7,
        78.5, 75.2, 72.8, 70.1, 68.5
    };
    
    printf("=== Aircraft Sensor Data Analysis ===\n\n");
    
    // Display temperature data
    printf("Temperature Readings (°C):\n");
    for (int i = 0; i < MAX_READINGS; i++) {
        printf("  Sensor %d: %.1f°C\n", i + 1, temperatures[i]);
    }
    
    // Temperature statistics
    printf("\nTemperature Statistics:\n");
    printf("  Average: %.2f°C\n", calculate_average(temperatures, MAX_READINGS));
    printf("  Maximum: %.2f°C\n", find_maximum(temperatures, MAX_READINGS));
    printf("  Minimum: %.2f°C\n", find_minimum(temperatures, MAX_READINGS));
    
    // Display pressure data
    printf("\nPressure Readings (kPa):\n");
    for (int i = 0; i < MAX_READINGS; i++) {
        printf("  Sensor %d: %.1f kPa\n", i + 1, pressures[i]);
    }
    
    // Pressure statistics
    printf("\nPressure Statistics:\n");
    printf("  Average: %.2f kPa\n", calculate_average(pressures, MAX_READINGS));
    printf("  Maximum: %.2f kPa\n", find_maximum(pressures, MAX_READINGS));
    printf("  Minimum: %.2f kPa\n", find_minimum(pressures, MAX_READINGS));
    
    return 0;
}

double calculate_average(double data[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}

double find_maximum(double data[], int size) {
    double max = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}

double find_minimum(double data[], int size) {
    double min = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }
    return min;
}
