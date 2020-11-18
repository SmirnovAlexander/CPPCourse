#include <iostream>
#include <cstring>  // strlen, strcpy

#include "string_custom.h"

using namespace std;

int main() {

    String str1("kek");
    String str2 = str1;

    cout << str2.size << "\n";
    cout << str2.str << "\n";

    str2.size = 10;

    cout << str1.size << "\n";
    cout << str2.size << "\n";

    return 0;
}
