#include <iostream>

#include "resize.h"
using namespace std;

int main() {
    unsigned size = 10;
    const char *str = new char[10];
    unsigned new_size = 15;

    char *str_resized = resize(str, size, new_size);

    for (unsigned i = 0; i < new_size; i++) {
        cout << str_resized[i] << "\n";
    }

    return 0;
}
