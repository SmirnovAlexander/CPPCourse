#ifndef RESIZE_H
#define RESIZE_H

/*
 * Resizing memory field.
 *
 * @param str Pointer to memory field
 * @param size Size of memory field
 * @param new_size Size of memory field after resizing
 *
 * @return Pointer to resized memory field
 */
char *resize(const char *str, unsigned size, unsigned new_size);

#endif  // RESIZE_H
