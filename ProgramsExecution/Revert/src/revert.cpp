#include <iostream>

void revert() {
    int a;
    std::cin >> a;

    if (a == 0) {
        return;
    }

    revert();
    std::cout << a << " ";
}
