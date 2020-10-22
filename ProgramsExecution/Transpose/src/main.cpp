#include <iostream>

#include "transpose.h"
using namespace std;


int main() {

    const unsigned h = 3, w = 3;
    int ** m = create_array2d(h, w);
    m[0][0] = 1;
    m[0][1] = 2;
    m[0][2] = 3;
    m[1][0] = 4;
    m[1][1] = 5;
    m[1][2] = 6;
    m[2][0] = 7;
    m[2][1] = 8;
    m[2][2] = 9;
    print_array2d(m, h, w);

    int ** m_T = transpose(m, h, w);
    print_array2d(m_T, h, w);

    free_array2d(m);

    return 0;
}
