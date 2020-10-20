#include <cstring>
#include <iostream>

#include "readline.h"
using namespace std;


int main() {
    char *line = get_line();

    size_t length = strlen(line);
    cout << "Length: " << length << endl;

    for (unsigned i = 0; i < length; i++) {
        cout << line[i];
    }

    delete[] line;

    return 0;
}
