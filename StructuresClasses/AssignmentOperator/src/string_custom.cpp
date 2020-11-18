#include "string_custom.h"

#include <cstring>  // strlen, strcpy

String::String(const char *str) {
    this->size = strlen(str);
    this->str = strcpy(new char[this->size + 1], str);
}

String::String(size_t n, char c) {
    this->size = n;

    char *new_str = new char[this->size + 1];
    for (size_t i = 0; i < n; ++i) {
        *(new_str + i) = c;
    }

    *(new_str + n) = '\0';

    this->str = new_str;
}

String::~String() { delete[] this->str; }

void String::append(const String &other) {
    size_t new_size = this->size + other.size;
    char *new_str = new char[new_size + 1];

    strcpy(new_str, this->str);
    strcpy(new_str + this->size, other.str);

    *(new_str + new_size) = '\0';

    delete[] this->str;

    this->size = new_size;
    this->str = new_str;
}

String::String(const String &other) {
    this->size = strlen(other.str);
    this->str = strcpy(new char[this->size + 1], other.str);
}

String &String::operator=(const String &other) {
    if (&other != this) {
        delete [] this->str;
        this->size = other.size;
        this->str = strcpy(new char[this->size + 1], other.str);
    }
    return *this;
}
