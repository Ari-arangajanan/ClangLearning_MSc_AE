# Makefile for control structure examples
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -O2

SOURCES = conditionals.c loops.c switch_case.c
EXECUTABLES = $(SOURCES:.c=)

all: $(EXECUTABLES)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECUTABLES)

.PHONY: all clean
