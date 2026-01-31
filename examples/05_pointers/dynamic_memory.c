/*
 * dynamic_memory.c
 * Demonstrates dynamic memory allocation
 * Example: Dynamic sensor array allocation
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_sensors;
    double *sensor_data;
    
    printf("=== Dynamic Memory Allocation ===\n\n");
    
    // Get number of sensors from user
    printf("Enter number of sensors: ");
    scanf("%d", &num_sensors);
    
    // Allocate memory dynamically
    sensor_data = (double *)malloc(num_sensors * sizeof(double));
    
    if (sensor_data == NULL) {
        printf("Error: Memory allocation failed!\n");
        return 1;
    }
    
    printf("Memory successfully allocated for %d sensors\n\n", num_sensors);
    
    // Input sensor data
    printf("Enter sensor readings:\n");
    for (int i = 0; i < num_sensors; i++) {
        printf("  Sensor %d: ", i + 1);
        scanf("%lf", &sensor_data[i]);
    }
    
    // Process and display data
    printf("\n=== Sensor Data Analysis ===\n");
    double sum = 0.0;
    double max = sensor_data[0];
    double min = sensor_data[0];
    
    for (int i = 0; i < num_sensors; i++) {
        sum += sensor_data[i];
        if (sensor_data[i] > max) max = sensor_data[i];
        if (sensor_data[i] < min) min = sensor_data[i];
    }
    
    printf("Number of readings: %d\n", num_sensors);
    printf("Average: %.2f\n", sum / num_sensors);
    printf("Maximum: %.2f\n", max);
    printf("Minimum: %.2f\n", min);
    
    // Reallocate memory for more sensors
    printf("\n=== Memory Reallocation ===\n");
    int additional_sensors;
    printf("How many additional sensors to add? ");
    scanf("%d", &additional_sensors);
    
    int new_total = num_sensors + additional_sensors;
    sensor_data = (double *)realloc(sensor_data, new_total * sizeof(double));
    
    if (sensor_data == NULL) {
        printf("Error: Memory reallocation failed!\n");
        return 1;
    }
    
    printf("Memory successfully reallocated for %d sensors\n", new_total);
    
    // Input additional sensor data
    printf("Enter additional readings:\n");
    for (int i = num_sensors; i < new_total; i++) {
        printf("  Sensor %d: ", i + 1);
        scanf("%lf", &sensor_data[i]);
    }
    
    // Display all data
    printf("\n=== All Sensor Readings ===\n");
    for (int i = 0; i < new_total; i++) {
        printf("  Sensor %d: %.2f\n", i + 1, sensor_data[i]);
    }
    
    // Free allocated memory
    free(sensor_data);
    printf("\nMemory freed successfully.\n");
    
    return 0;
}
