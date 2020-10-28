#include <iostream>

#include "copy.h"

using namespace std;

int main() {

    int const a = 2;
    int * p = (int *)&a;

    *p =3;

    cout << a;


    String str("kek");

    cout << str.size;

    return 0;
}
