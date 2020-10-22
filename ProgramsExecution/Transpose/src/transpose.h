#ifndef TRANSPOSE_H
#define TRANSPOSE_H

#include <iostream>

/*
 * Creating dynamic 2d array.
 */
int ** create_array2d(size_t a, size_t b);

/*
 * Deleting array from memory.
 */
void free_array2d(int ** m);

/*
 * Printing array.
 */
void print_array2d(int ** m, size_t a, size_t b);

/*
 * Transposing matrix.
 */
int ** transpose(const int * const * m, unsigned rows, unsigned cols);

#endif  // TRANSPOSE_H
