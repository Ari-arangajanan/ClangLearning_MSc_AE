/*
 * structures.c
 * Demonstrates structures in C
 * Example: Aircraft and flight data management
 */

#include <stdio.h>
#include <string.h>

// Structure definitions
typedef struct {
    char model[50];
    char manufacturer[50];
    int year;
    double max_speed;      // km/h
    double max_altitude;   // meters
    int passenger_capacity;
} Aircraft;

typedef struct {
    char flight_number[10];
    Aircraft aircraft;
    double current_altitude;
    double current_speed;
    double fuel_percentage;
} FlightStatus;

// Function prototypes
void print_aircraft_info(Aircraft ac);
void print_flight_status(FlightStatus fs);

int main() {
    // Initialize aircraft structure
    Aircraft boeing777;
    strcpy(boeing777.model, "777-300ER");
    strcpy(boeing777.manufacturer, "Boeing");
    boeing777.year = 2004;
    boeing777.max_speed = 905.0;
    boeing777.max_altitude = 13100.0;
    boeing777.passenger_capacity = 396;
    
    // Initialize another aircraft using compound literal
    Aircraft airbus_a380 = {
        "A380-800",
        "Airbus",
        2007,
        1020.0,
        13100.0,
        853
    };
    
    printf("=== Aircraft Database ===\n\n");
    print_aircraft_info(boeing777);
    printf("\n");
    print_aircraft_info(airbus_a380);
    
    // Create flight status
    FlightStatus flight1;
    strcpy(flight1.flight_number, "BA001");
    flight1.aircraft = boeing777;
    flight1.current_altitude = 11000.0;
    flight1.current_speed = 850.0;
    flight1.fuel_percentage = 65.0;
    
    printf("\n=== Current Flight Status ===\n\n");
    print_flight_status(flight1);
    
    // Array of structures
    printf("\n=== Fleet Information ===\n\n");
    Aircraft fleet[3] = {
        {"737-800", "Boeing", 1998, 842.0, 12500.0, 189},
        {"A320neo", "Airbus", 2016, 871.0, 12000.0, 194},
        {"787-9", "Boeing", 2014, 954.0, 13100.0, 296}
    };
    
    for (int i = 0; i < 3; i++) {
        printf("Aircraft %d:\n", i + 1);
        print_aircraft_info(fleet[i]);
        printf("\n");
    }
    
    return 0;
}

void print_aircraft_info(Aircraft ac) {
    printf("Model: %s %s\n", ac.manufacturer, ac.model);
    printf("Year: %d\n", ac.year);
    printf("Max Speed: %.0f km/h\n", ac.max_speed);
    printf("Max Altitude: %.0f m\n", ac.max_altitude);
    printf("Capacity: %d passengers\n", ac.passenger_capacity);
}

void print_flight_status(FlightStatus fs) {
    printf("Flight Number: %s\n", fs.flight_number);
    printf("Aircraft: %s %s\n", 
           fs.aircraft.manufacturer, fs.aircraft.model);
    printf("Current Altitude: %.0f m (%.1f%% of max)\n", 
           fs.current_altitude, 
           (fs.current_altitude / fs.aircraft.max_altitude) * 100);
    printf("Current Speed: %.0f km/h (%.1f%% of max)\n", 
           fs.current_speed,
           (fs.current_speed / fs.aircraft.max_speed) * 100);
    printf("Fuel: %.1f%%\n", fs.fuel_percentage);
}
