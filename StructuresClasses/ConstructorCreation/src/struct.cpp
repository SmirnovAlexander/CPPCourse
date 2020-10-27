#include "struct.h"

#include <cstring>  // strlen, strcpy

String::String(const char *str) { 
    this->size = strlen(str);
    this->str = strcpy(new char[this->size + 1], str);
}
