#include <iostream>

#include "append.h"

using namespace std;

int main() {
    String str1(3, 'k');
    String str2(3, 'o');

    cout << str1.size << '\n';
    cout << str2.size << '\n';

    str1.append(str2);

    cout << str1.size << '\n';

    for (size_t i = 0; i < str1.size; ++i) {
        cout << str1.str[i];
    }
    
    return 0;
}
