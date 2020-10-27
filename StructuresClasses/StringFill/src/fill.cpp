#include "fill.h"

#include <cstring>  // strlen, strcpy

String::String(size_t n, char c) { 
    this->size = n;

    char * new_str = new char[this->size + 1];
    for (int i = 0; i < n; ++i) {
        *(new_str + i) = c;
    }

    *(new_str + n) = '\0';

    this->str = new_str;
}

String::~String() {
    delete [] this->str;
}
