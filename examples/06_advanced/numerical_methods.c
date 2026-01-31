/*
 * numerical_methods.c
 * Demonstrates numerical methods relevant to aerospace engineering
 * Example: Trajectory calculation using numerical integration
 */

#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

#define G 9.81  // Gravitational acceleration (m/s^2)
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Function prototypes
double projectile_height(double v0, double angle, double t);
void euler_method(double t0, double tf, double dt, double v0, double angle);
double calculate_range(double v0, double angle);

int main() {
    double initial_velocity, launch_angle;
    
    printf("=== Projectile Motion Analysis ===\n\n");
    
    printf("Enter initial velocity (m/s): ");
    scanf("%lf", &initial_velocity);
    
    printf("Enter launch angle (degrees): ");
    scanf("%lf", &launch_angle);
    
    // Convert angle to radians
    double angle_rad = launch_angle * M_PI / 180.0;
    
    // Calculate range
    double range = calculate_range(initial_velocity, angle_rad);
    printf("\nTheoretical Range: %.2f m\n", range);
    
    // Calculate max height
    double v0_y = initial_velocity * sin(angle_rad);
    double max_height = (v0_y * v0_y) / (2 * G);
    printf("Maximum Height: %.2f m\n", max_height);
    
    // Time of flight
    double time_of_flight = 2 * v0_y / G;
    printf("Time of Flight: %.2f s\n", time_of_flight);
    
    // Numerical integration using Euler method
    printf("\n=== Trajectory Data (Euler Method) ===\n");
    printf("Time(s)  Height(m)  Distance(m)\n");
    printf("-----------------------------------\n");
    
    euler_method(0, time_of_flight, 0.5, initial_velocity, angle_rad);
    
    return 0;
}

double projectile_height(double v0, double angle, double t) {
    double v0_y = v0 * sin(angle);
    return v0_y * t - 0.5 * G * t * t;
}

double calculate_range(double v0, double angle) {
    return (v0 * v0 * sin(2 * angle)) / G;
}

void euler_method(double t0, double tf, double dt, double v0, double angle) {
    double t = t0;
    double vx = v0 * cos(angle);
    double vy = v0 * sin(angle);
    double x = 0.0;
    double y = 0.0;
    
    while (t <= tf && y >= 0) {
        printf("%.1f    %.2f      %.2f\n", t, y, x);
        
        // Update velocities
        vy = vy - G * dt;
        
        // Update positions
        x = x + vx * dt;
        y = y + vy * dt;
        
        // Update time
        t = t + dt;
    }
}
