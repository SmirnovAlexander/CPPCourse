#include "../src/move_array.h"

#include <gtest/gtest.h>

#include <iostream>

TEST(move_array, is_move_array_works_1) {
    unsigned size = 5;
    int shift = 1;

    int m[] = {1, 2, 3, 4, 5};
    int m_shifted[] = {2, 3, 4, 5, 1};

    rotate(m, size, shift);
    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(m[i], m_shifted[i])
            << "Vectors x and y differ at index " << i;
    }
}

TEST(move_array, is_move_array_works_2) {
    unsigned size = 5;
    int shift = 3;

    int m[] = {1, 2, 3, 4, 5};
    int m_shifted[] = {4, 5, 1, 2, 3};

    rotate(m, size, shift);
    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(m[i], m_shifted[i])
            << "Vectors x and y differ at index " << i;
    }
}

TEST(move_array, is_move_array_works_3) {
    unsigned size = 5;
    int shift = 6;

    int m[] = {1, 2, 3, 4, 5};
    int m_shifted[] = {2, 3, 4, 5, 1};

    rotate(m, size, shift);
    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(m[i], m_shifted[i])
            << "Vectors x and y differ at index " << i;
    }
}

TEST(move_array, is_move_array_works_4) {
    unsigned size = 5;
    int shift = 0;

    int m[] = {1, 2, 3, 4, 5};
    int m_shifted[] = {1, 2, 3, 4, 5};

    rotate(m, size, shift);
    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(m[i], m_shifted[i])
            << "Vectors x and y differ at index " << i;
    }
}
