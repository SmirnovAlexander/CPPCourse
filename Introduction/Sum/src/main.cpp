#include <iostream>

#include "sum.h"

int main(int args, char* argv[]) {
    int n;

    int x;
    int y;

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> x >> y;
        std::cout << sum(x, y) << std::endl;
    }

    return 0;
}
