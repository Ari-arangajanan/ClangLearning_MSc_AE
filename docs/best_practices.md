# C Programming Best Practices

This document outlines best practices for writing clean, efficient, and maintainable C code.

## Code Style

### Naming Conventions
- **Variables**: Use descriptive lowercase names with underscores (snake_case)
  ```c
  int sensor_count;
  double aircraft_speed;
  ```

- **Constants**: Use uppercase with underscores
  ```c
  #define MAX_ALTITUDE 15000
  #define PI 3.14159265359
  ```

- **Functions**: Use descriptive lowercase names with underscores
  ```c
  double calculate_lift_force(double velocity, double area);
  ```

### Indentation and Formatting
- Use 4 spaces for indentation (not tabs)
- Place opening braces on the same line (K&R style)
- Keep lines under 80-100 characters when possible

```c
if (condition) {
    // code here
} else {
    // code here
}
```

## Memory Management

### Always Free What You Allocate
```c
int *data = malloc(n * sizeof(int));
if (data == NULL) {
    // handle error
    return;
}
// use data
free(data);
```

### Check Return Values
```c
FILE *file = fopen("data.txt", "r");
if (file == NULL) {
    fprintf(stderr, "Error opening file\n");
    return EXIT_FAILURE;
}
```

## Error Handling

### Check Function Returns
```c
if (scanf("%d", &value) != 1) {
    fprintf(stderr, "Invalid input\n");
    return EXIT_FAILURE;
}
```

### Use Exit Codes
```c
return EXIT_SUCCESS;  // or 0
return EXIT_FAILURE;  // or 1
```

## Safety Practices

### Buffer Overflow Prevention
```c
// Bad
char buffer[10];
scanf("%s", buffer);  // Unsafe!

// Good
char buffer[10];
scanf("%9s", buffer);  // Safe
```

### Bounds Checking
```c
for (int i = 0; i < array_size; i++) {
    // access array[i]
}
```

## Performance Tips

### Use Appropriate Data Types
- Use `int` for counters and small integers
- Use `double` for precise floating-point calculations
- Use `float` when memory is constrained

### Minimize Function Calls in Loops
```c
// Less efficient
for (int i = 0; i < strlen(str); i++) { }

// More efficient
int len = strlen(str);
for (int i = 0; i < len; i++) { }
```

## Debugging

### Use Compiler Warnings
```bash
gcc -Wall -Wextra -Wpedantic -std=c11 program.c
```

### Print Debugging
```c
printf("Debug: variable = %d\n", variable);
fprintf(stderr, "Error at line %d\n", __LINE__);
```

### Use Debuggers
```bash
gcc -g program.c -o program
gdb ./program
```

## Documentation

### Comment Your Code
```c
/*
 * Calculates the lift force on an aircraft wing
 * 
 * Parameters:
 *   velocity - airspeed in m/s
 *   area - wing area in m^2
 *   coefficient - lift coefficient (dimensionless)
 * 
 * Returns:
 *   Lift force in Newtons
 */
double calculate_lift(double velocity, double area, double coefficient) {
    const double RHO = 1.225;  // air density at sea level
    return 0.5 * RHO * velocity * velocity * area * coefficient;
}
```

## Testing

### Write Test Cases
```c
void test_calculate_lift() {
    double result = calculate_lift(100.0, 50.0, 1.2);
    assert(result > 0);
    printf("Test passed: calculate_lift\n");
}
```

## Additional Resources

- [C Programming Language (K&R)](https://en.wikipedia.org/wiki/The_C_Programming_Language)
- [GCC Warning Options](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html)
- [Valgrind Memory Checker](https://valgrind.org/)
