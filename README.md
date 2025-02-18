# Complex Number Implementation in C++

## Overview
This project involves implementing a `Complex` class in C++ to represent complex numbers. The class supports basic arithmetic operations, formatted output, and adheres to good programming practices such as operator overloading and stack allocation.

## Features
- Representation of complex numbers in the form `a + bi`.
- Overloaded arithmetic operators:
  - Addition (`+`, `+=`)
  - Subtraction (`-`, `-=`)
  - Multiplication (`*`, `*=`)
- Overloaded `<<` operator for formatted output.
- Uses namespace `cmsc270`.
- No dynamic memory allocation (stack-based objects only).

## Files
- `Complex.h` - Header file declaring the `Complex` class.
- `Complex.cpp` - Implementation of the `Complex` class.
- `main.cpp` (optional) - Test file for validating class functionality.

## Usage
### Creating Complex Numbers
```cpp
cmsc270::Complex c1;         // Default constructor (0 + 0i)
cmsc270::Complex c2(3, 4);   // 3 + 4i
cmsc270::Complex c3(2.5, -1); // 2.5 - i
```

### Performing Operations
```cpp
cmsc270::Complex sum = c2 + c3;  // Addition
cmsc270::Complex prod = c2 * c3; // Multiplication
c2 += c3; // In-place addition
c2 *= c3; // In-place multiplication
```

### Printing Complex Numbers
```cpp
std::cout << c2 << std::endl; // Prints in simplified form
```

## Compilation
Use a standard C++ compiler such as `g++`:
```sh
g++ -o complex main.cpp Complex.cpp
./complex
```

## Notes
- The `<<` operator ensures no redundant zeros (e.g., `0 + -1i` prints as `-i`).
- Uses reference parameters where possible for efficiency.
- No method definitions are placed in `Complex.h`.
