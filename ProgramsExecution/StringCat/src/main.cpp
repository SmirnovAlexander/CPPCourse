#include <iostream>

#include "string_cat.h"

int main(int args, char *argv[]) {
    char to[10] = "abc";
    const char from[4] = "def";

    string_cat(to, from);

    for (int i = 0; i < 10; i++) {
        std::cout << to[i];
    }

    return 0;
}
