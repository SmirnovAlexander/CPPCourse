#ifndef STRUCT_H
#define STRUCT_H

#include <cstddef>  // size_t

struct String {
    String(const char *str = "");

    size_t size;
    char *str;
};

#endif  // STRUCT_H
