# C++ Programming

Tasks for [C++ Programming course](https://stepik.org/course/7).

## Building

All tasks are build using `CMake`.

Example of building [power function task](Introduction/Power/):
```shell
git clone https://github.com/SmirnovAlexander/CPPCourse
cd CPPCourse/Introduction/Power
mkdir build && cd build
cmake ..
cmake --build .
```

Executing:
```shell
./power
2 5
```
```
32
```

Running tests:
```shell
./tests
```

## Homework 1. 
29.09.20

Introduction

- [1.1](Introduction/Power/)

    - create a power function

- [1.2](Introduction/Sum/)

    - create a program that sums numbers

- [1.3](Introduction/QuadraticEquation/)

    - create an quadratic equation solver

- [1.4](Introduction/SpaceDeletion/)

    - create program that removes whitespaces from string

- [1.5](Introduction/Logarithm/)

    - create program that counts logarithm

## Homework 2. 
06.10.20

Programs execution

- [2.1](ProgramsExecution/GCD/)

    - create recursive GCD function

- [2.2](ProgramsExecution/Revert/)

    - create a program that recursively reverts sequence

- [2.3](ProgramsExecution/MoveArray/)

    - create a program that shifts array

- [2.4](ProgramsExecution/StringLength/)

    - create a program that calculates string length

- [2.5](ProgramsExecution/StringCat/)

    - create a program that concatenates strings

- [2.6](ProgramsExecution/SubstringSearch/)

    - create a program that returns index of first substring entrance

- [2.7](ProgramsExecution/Resize/)

    - create a function that resizes memory

- [2.8](ProgramsExecution/Readline/)

    - create function that reads line till end of stream

- [2.9](ProgramsExecution/Transpose/)

    - create function transposes 2d array

- [2.10](ProgramsExecution/SwapMin/)

    - create function that swaps rows of 2d array

## Homework 3. 
31.10.20

Structures and classes

- [3.1](StructuresClasses/ConstructorCreation/)

    - create constructor for string class (strlen and strcpy)

- [3.2](StructuresClasses/StringFill)

    - create constructor for string class (fill string with $n$ given chars)

- [3.3](StructuresClasses/StringAppend)

    - create method `append` for string class

- [3.4](StructuresClasses/AccessModifiers/)

    - create function that accesses structure's private fields

- [3.5](StructuresClasses/CopyConstructor/)

    - create copy constructor for string struct

- [3.6](StructuresClasses/AssignmentOperator/)

    - create assignment operator for string struct
