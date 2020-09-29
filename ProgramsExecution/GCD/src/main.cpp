#include <iostream>

#include "gcd.h"

int main(int args, char* argv[]) {

    unsigned int a;
    unsigned int b;

    std::cin >> a >> b;
    std::cout << gcd(a, b);

    return 0;
}
