# Getting Started with C Programming

This guide will help you get started with the examples in this repository.

## Installation

### Linux (Ubuntu/Debian)

```bash
# Update package list
sudo apt-get update

# Install build essentials (includes gcc, make, etc.)
sudo apt-get install build-essential

# Verify installation
gcc --version
make --version
```

### macOS

```bash
# Install Xcode Command Line Tools
xcode-select --install

# Or install via Homebrew
brew install gcc
```

### Windows

Option 1: MinGW-w64
1. Download from https://www.mingw-w64.org/
2. Install and add to PATH
3. Verify with `gcc --version`

Option 2: WSL (Windows Subsystem for Linux)
1. Enable WSL in Windows Features
2. Install Ubuntu from Microsoft Store
3. Follow Linux installation steps

## Compiling Your First Program

1. Navigate to the basics directory:
```bash
cd examples/01_basics
```

2. Compile a single file:
```bash
gcc hello_world.c -o hello_world
```

3. Run the program:
```bash
./hello_world
```

## Using Make

Make simplifies the build process:

```bash
# Build all examples in a directory
make

# Build a specific example
make hello_world

# Clean compiled files
make clean
```

## Common Compiler Flags

- `-Wall`: Enable all warnings
- `-Wextra`: Enable extra warnings
- `-g`: Include debugging information
- `-O2`: Optimize for performance
- `-std=c11`: Use C11 standard
- `-lm`: Link math library

Example:
```bash
gcc -Wall -Wextra -std=c11 -O2 program.c -o program -lm
```

## IDE Setup

### Visual Studio Code

1. Install C/C++ extension
2. Install Code Runner extension
3. Open repository folder
4. Use F5 to debug or Ctrl+Alt+N to run

Recommended settings.json:
```json
{
    "C_Cpp.default.cStandard": "c11",
    "C_Cpp.default.compilerPath": "/usr/bin/gcc"
}
```

### CLion

1. Open repository as CMake project
2. CLion will auto-detect Makefiles
3. Use Run/Debug configurations

## Running Examples

Each example directory contains:
- `.c` source files
- `Makefile` for building
- Comments explaining the code

To run all examples in a directory:

```bash
cd examples/01_basics
make
./hello_world
./data_types
./arithmetic
./input_output
```

## Troubleshooting

### Command not found: gcc
- Ensure GCC is installed
- Check PATH environment variable

### Undefined reference to 'sqrt'
- Link math library: `gcc program.c -lm`

### Permission denied
- Make file executable: `chmod +x program`

### Segmentation fault
- Check array bounds
- Verify pointer operations
- Use debugger: `gdb ./program`

## Next Steps

1. Start with `examples/01_basics/`
2. Compile and run each example
3. Modify the code and experiment
4. Try exercises in `exercises/`
5. Move on to more advanced topics

## Additional Resources

- [GCC Documentation](https://gcc.gnu.org/onlinedocs/)
- [Make Tutorial](https://www.gnu.org/software/make/manual/)
- [GDB Tutorial](https://www.gnu.org/software/gdb/documentation/)
