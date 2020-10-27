#include <iostream>

#include "access.h"

using namespace std;

int main() {
    Cls sample('k', 1.0, 2);

    char &hacked_field = get_c(sample);

    cout << sample.get_c();
    cout << hacked_field;

    hacked_field = 'o';

    cout << sample.get_c();

    return 0;
}
