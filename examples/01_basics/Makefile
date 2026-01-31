# Makefile for basic C examples
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -O2

# List of all source files
SOURCES = hello_world.c data_types.c input_output.c arithmetic.c

# Generate executable names from source files
EXECUTABLES = $(SOURCES:.c=)

# Default target: build all
all: $(EXECUTABLES)

# Rule to build each executable
%: %.c
	$(CC) $(CFLAGS) $< -o $@

# Clean compiled files
clean:
	rm -f $(EXECUTABLES)

# Phony targets
.PHONY: all clean
