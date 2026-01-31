# Makefile for array examples
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -O2

SOURCES = arrays_basics.c multi_dimensional.c
EXECUTABLES = $(SOURCES:.c=)

all: $(EXECUTABLES)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECUTABLES)

.PHONY: all clean
