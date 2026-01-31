# Makefile for function examples
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -O2
LDFLAGS = -lm

SOURCES = basic_functions.c recursive_functions.c
EXECUTABLES = $(SOURCES:.c=)

all: $(EXECUTABLES)

%: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f $(EXECUTABLES)

.PHONY: all clean
