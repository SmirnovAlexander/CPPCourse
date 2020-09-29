#include <iostream>

#include "quadratic.h"

int main(int args, char* argv[]) {
    int a, b, c;
    std::pair<double, double> roots;

    std::cin >> a >> b >> c;

    try {
        roots = find_roots(a, b, c);
        std::cout << roots.first << " " << roots.second << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
