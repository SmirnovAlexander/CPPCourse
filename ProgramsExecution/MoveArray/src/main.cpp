#include <iostream>

#include "move_array.h"

int main(int args, char* argv[]) {
    unsigned size;
    int shift;

    std::cin >> size;
    std::cin >> shift;

    int m[size];

    for (unsigned i = 0; i < size; i++) {
        std::cin >> m[i];
    }

    rotate(m, size, shift);

    for (unsigned i = 0; i < size; i++) {
        std::cout << m[i] << " ";
    }

    return 0;
}
