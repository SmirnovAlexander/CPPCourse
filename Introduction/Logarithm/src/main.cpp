#include <iostream>

#include "logarithm.h"

int main(int args, char* argv[]) {

    int t;
    int n;

    std::cin >> t;

    for (int i = 0; i < t; i++) {
        std::cin >> n;
        std::cout << logarithm(n) << std::endl;
    }

    return 0;
}
