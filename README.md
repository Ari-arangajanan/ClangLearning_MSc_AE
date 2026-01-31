# C Language Learning Repository - MSc Aerospace Engineering

This repository contains learning materials and examples for C programming, designed for MSc Aerospace Engineering students as part of the Foundations of Software (FOS) course.

## Overview

This repository provides a structured approach to learning C programming with a focus on applications relevant to aerospace engineering, including:
- Fundamental C programming concepts
- Numerical methods and computations
- File I/O and data processing
- Memory management and pointers
- Data structures

## Repository Structure

```
ClangLearning_MSc_AE/
├── README.md           # This file
├── examples/           # Code examples organized by topic
│   ├── 01_basics/     # Basic C concepts
│   ├── 02_control/    # Control structures
│   ├── 03_functions/  # Functions and modular programming
│   ├── 04_arrays/     # Arrays and strings
│   ├── 05_pointers/   # Pointers and memory
│   └── 06_advanced/   # Advanced topics
├── exercises/         # Practice problems and solutions
├── projects/          # Mini-projects
└── docs/              # Additional documentation
```

## Getting Started

### Prerequisites

To compile and run the examples, you'll need:
- GCC compiler (recommended: gcc 7.0 or later)
- Make utility
- A text editor or IDE (VS Code, CLion, etc.)

### Installation on Linux/Mac

```bash
# Install GCC on Ubuntu/Debian
sudo apt-get update
sudo apt-get install build-essential

# Install GCC on macOS (using Homebrew)
brew install gcc
```

### Installation on Windows

- Install MinGW-w64 or use WSL (Windows Subsystem for Linux)
- Or use an IDE like Code::Blocks or Dev-C++

## Building and Running Examples

Each example directory contains a Makefile for easy compilation:

```bash
# Navigate to an example directory
cd examples/01_basics

# Compile all examples
make

# Run a specific example
./hello_world

# Clean compiled files
make clean
```

## Learning Path

1. **Basics** - Start with fundamental syntax, data types, and I/O
2. **Control Structures** - Learn conditionals and loops
3. **Functions** - Understand modular programming
4. **Arrays** - Work with collections of data
5. **Pointers** - Master memory management
6. **Advanced Topics** - Explore file I/O, structures, and numerical methods

## Contributing

This is a learning repository. Feel free to:
- Report issues or errors
- Suggest improvements
- Add your own examples

## Resources

- [C Programming Language (K&R)](https://en.wikipedia.org/wiki/The_C_Programming_Language)
- [GCC Documentation](https://gcc.gnu.org/onlinedocs/)
- [C Standard Library Reference](https://en.cppreference.com/w/c)

## License

This repository is for educational purposes.

## Contact

For questions or clarifications, please open an issue in this repository.