# Assignment 7 - Electric and Magnetic Field Classes

## Description:
This program uses C++ classes to manage a three-dimensional electric field
and a three-dimensional magnetic field. Each class stores its components
in a dynamically allocated array of 3 doubles ([0] = x, [1] = y, [2] = z).
The destructor frees the memory.

## Classes:
- Electric_Field: default constructor, constructor with 3 components,
  destructor, getters and setters, calculateMagnitude(), and
  calculateInnerProduct()
- Magnetic_Field: default constructor, constructor with 3 components,
  destructor, getters and setters, calculateMagnitude(), and
  printUnitVector()

## How to Compile and Run
g++ -o lab7 lab7.cpp
./lab7

## Output Of It:
The program creates fields using the default constructor, the
3-component constructor, and the setters. It prints the magnitude
of each field, the inner product of the electric fields, and the
unit vector of the magnetic fields.
