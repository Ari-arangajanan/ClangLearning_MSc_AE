# Makefile for advanced examples
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -O2
LDFLAGS = -lm

SOURCES = structures.c file_io.c numerical_methods.c
EXECUTABLES = $(SOURCES:.c=)

all: $(EXECUTABLES)

%: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f $(EXECUTABLES) flight_log.txt

.PHONY: all clean
