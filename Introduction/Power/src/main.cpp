#include <iostream>

#include "power.h"

int main(int args, char* argv[]) {
    int x;
    unsigned int p;

    std::cin >> x >> p;
    int result = power(x, p);

    std::cout << result << std::endl;
    return 0;
}
