#include <iostream>

#include "fill.h"

using namespace std;

int main() {
    String str = String(3, 'k');

    cout << str.size << '\n';

    for (int i = 0; i < 3; ++i) {
        cout << str.str[i];
    }
    
    return 0;
}
