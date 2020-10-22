#include <iostream>

#include "swap.h"
using namespace std;

int main() {

    const unsigned h = 3, w = 3;
    int ** m = create_array2d(h, w);
    m[0][0] = 9;
    m[0][1] = 8;
    m[0][2] = 7;
    m[1][0] = 6;
    m[1][1] = 5;
    m[1][2] = 4;
    m[2][0] = 3;
    m[2][1] = 2;
    m[2][2] = 1;
    print_array2d(m, h, w);

    swap_min(m, h, w);

    print_array2d(m, h, w);

    return 0;
}
