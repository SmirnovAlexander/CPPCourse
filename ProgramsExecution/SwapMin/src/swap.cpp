#include <iostream>

using namespace std;

int ** create_array2d(size_t a, size_t b) {
    int ** m = new int *[a];
    m[0] = new int[a * b];
    for (size_t i = 1; i < a; ++i) {
        m[i] = m[i - 1] + b;
    }
    return m;
}

void free_array2d(int ** m) {
    delete [] m[0];
    delete [] m;
}

void print_array2d(int ** m, size_t a, size_t b) {
    for (size_t i = 0; i < a; ++i) {
        for (size_t j = 0; j < b; ++j){
            cout << m[i][j] << ' ';
        }
        cout << '\n';
    }
}

void swap_min(int *m[], unsigned rows, unsigned cols) {

    int min = m[0][0];
    unsigned min_row_num = 0;

    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j){
            if (m[i][j] < min) {
                min = m[i][j];
                min_row_num = i;
            }
        }
    }

    int * temp = m[0];
    m[0] = m[min_row_num];
    m[min_row_num] = temp;
}
