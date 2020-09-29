#include <iostream>

int main() {
    char c;
    char prev = 'a';

    while (std::cin.get(c)) {
        if (!((c == ' ') & (prev == ' '))) {
            std::cout << c;
        }
        prev = c;
    }

    return 0;
}
