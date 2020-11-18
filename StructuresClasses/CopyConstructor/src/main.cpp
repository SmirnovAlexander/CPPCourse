#include <iostream>

#include "copy.h"

using namespace std;

int main() {

    String str("kek");
    String lol(str);

    cout << lol.size << "\n";
    cout << lol.str;

    return 0;
}
