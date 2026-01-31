# Makefile for pointer examples
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -O2

SOURCES = pointers_basics.c dynamic_memory.c
EXECUTABLES = $(SOURCES:.c=)

all: $(EXECUTABLES)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECUTABLES)

.PHONY: all clean
