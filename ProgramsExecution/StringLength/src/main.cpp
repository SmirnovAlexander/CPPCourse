#include <iostream>

#include "string_length.h"

int main(int args, char* argv[]) {
    int size;
    std::cin >> size;

    char str[size];

    for (int i = 0; i < size; i++) {
        std::cin >> str[i];
    }
    str[size + 1] = '\0';

    unsigned len = string_length(str);
    std::cout << len - 1 << std::endl;

    return 0;
}
