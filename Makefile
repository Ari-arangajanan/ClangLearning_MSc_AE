# Root Makefile for C Learning Repository
# Builds all examples across all directories

.PHONY: all clean basics control functions arrays pointers advanced

# Build all examples
all: basics control functions arrays pointers advanced
	@echo "All examples compiled successfully!"

# Build individual sections
basics:
	@echo "Building basics examples..."
	@$(MAKE) -C examples/01_basics

control:
	@echo "Building control structure examples..."
	@$(MAKE) -C examples/02_control

functions:
	@echo "Building function examples..."
	@$(MAKE) -C examples/03_functions

arrays:
	@echo "Building array examples..."
	@$(MAKE) -C examples/04_arrays

pointers:
	@echo "Building pointer examples..."
	@$(MAKE) -C examples/05_pointers

advanced:
	@echo "Building advanced examples..."
	@$(MAKE) -C examples/06_advanced

# Clean all compiled files
clean:
	@echo "Cleaning all compiled files..."
	@$(MAKE) -C examples/01_basics clean
	@$(MAKE) -C examples/02_control clean
	@$(MAKE) -C examples/03_functions clean
	@$(MAKE) -C examples/04_arrays clean
	@$(MAKE) -C examples/05_pointers clean
	@$(MAKE) -C examples/06_advanced clean
	@echo "All clean!"

# Help target
help:
	@echo "Available targets:"
	@echo "  make all       - Build all examples"
	@echo "  make basics    - Build basic examples only"
	@echo "  make control   - Build control structure examples"
	@echo "  make functions - Build function examples"
	@echo "  make arrays    - Build array examples"
	@echo "  make pointers  - Build pointer examples"
	@echo "  make advanced  - Build advanced examples"
	@echo "  make clean     - Remove all compiled files"
	@echo "  make help      - Show this help message"
