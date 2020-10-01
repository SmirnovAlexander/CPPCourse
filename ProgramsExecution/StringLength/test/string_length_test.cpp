#include "../src/string_length.h"

#include <gtest/gtest.h>

TEST(string_length, is_string_length_works_1) {
    unsigned size = 5;
    char str[] = "kekek";
    EXPECT_EQ(size, string_length(str));
}

TEST(string_length, is_string_length_works_2) {
    unsigned size = 0;
    char str[] = "";
    EXPECT_EQ(size, string_length(str));
}

TEST(string_length, is_string_length_works_3) {
    unsigned size = 6;
    char str[] = "228322";
    EXPECT_EQ(size, string_length(str));
}
