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

int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
    int ** m_T = create_array2d(cols, rows);
    for (size_t i = 0; i < rows; ++i){
        for (size_t j = 0; j < cols; ++j){
            m_T[j][i] = m[i][j];
        }
    }
    return m_T;
}
