#ifndef SWAP_H
#define SWAP_H

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
 * Swapping row that have minimal value
 * in array with first row.
 */
void swap_min(int *m[], unsigned rows, unsigned cols);

#endif  // SWAP_H
