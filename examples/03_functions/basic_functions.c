/*
 * basic_functions.c
 * Demonstrates function declaration, definition, and usage
 * Example: Aerospace calculations
 */

#include <stdio.h>
#include <math.h>

// Function declarations (prototypes)
double calculate_lift(double velocity, double area, double coefficient);
double calculate_drag(double velocity, double area, double coefficient);
double convert_knots_to_ms(double knots);
void print_flight_info(double altitude, double speed);

int main() {
    double wing_area = 50.0;      // m^2
    double lift_coeff = 1.2;
    double drag_coeff = 0.03;
    double velocity_knots = 250.0;
    
    // Convert velocity
    double velocity_ms = convert_knots_to_ms(velocity_knots);
    
    // Calculate forces
    double lift = calculate_lift(velocity_ms, wing_area, lift_coeff);
    double drag = calculate_drag(velocity_ms, wing_area, drag_coeff);
    
    // Display results
    printf("=== Aircraft Performance Analysis ===\n\n");
    printf("Wing Area: %.2f m^2\n", wing_area);
    printf("Velocity: %.2f knots (%.2f m/s)\n", velocity_knots, velocity_ms);
    printf("\nLift Force: %.2f N\n", lift);
    printf("Drag Force: %.2f N\n", drag);
    printf("Lift-to-Drag Ratio: %.2f\n", lift / drag);
    
    print_flight_info(10000.0, velocity_ms);
    
    return 0;
}

// Function definitions

double calculate_lift(double velocity, double area, double coefficient) {
    double rho = 1.225;  // Air density at sea level (kg/m^3)
    return 0.5 * rho * velocity * velocity * area * coefficient;
}

double calculate_drag(double velocity, double area, double coefficient) {
    double rho = 1.225;  // Air density at sea level (kg/m^3)
    return 0.5 * rho * velocity * velocity * area * coefficient;
}

double convert_knots_to_ms(double knots) {
    return knots * 0.514444;  // 1 knot = 0.514444 m/s
}

void print_flight_info(double altitude, double speed) {
    printf("\n=== Flight Status ===\n");
    printf("Altitude: %.2f m\n", altitude);
    printf("Speed: %.2f m/s\n", speed);
    
    if (altitude > 15000) {
        printf("Status: High altitude cruise\n");
    } else if (altitude > 5000) {
        printf("Status: Normal cruise\n");
    } else {
        printf("Status: Low altitude\n");
    }
}
