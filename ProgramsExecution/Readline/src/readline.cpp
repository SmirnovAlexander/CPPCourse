#include <iostream>

#include "resize.h"
using namespace std;

char *get_line() {
    char *line = new char[1];

    char ch = 0;
    unsigned cur_size = 0;
    unsigned size = 1;

    while (cin.get(ch) && ch != '\n' && ch != cin.eof()) {
        line[cur_size] = ch;
        cur_size++;

        if (cur_size > size - 1) {
            line = resize(line, cur_size, size * 2);
            size *= 2;
        }
    }

    line[cur_size] = '\0';

    return line;
}
