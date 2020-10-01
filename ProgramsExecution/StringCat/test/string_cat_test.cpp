#include "../src/string_cat.h"

#include <gtest/gtest.h>

TEST(string_cat, is_string_cat_works_1) {
    char to[10] = "abc";
    const char from[4] = "def";
    char str[10] = "abcdef";

    string_cat(to, from);

    for (int i = 0; i < 10; i++) {
        EXPECT_EQ(str[i], to[i]);
    }
}

TEST(string_cat, is_string_cat_works_2) {
    char to[12] = "123";
    const char from[5] = "4567";
    char str[12] = "1234567";

    string_cat(to, from);

    for (int i = 0; i < 12; i++) {
        EXPECT_EQ(str[i], to[i]);
    }
}

TEST(string_cat, is_string_cat_works_3) {
    char to[4] = "123";
    const char from[1] = "";
    char str[4] = "123";

    string_cat(to, from);

    for (int i = 0; i < 4; i++) {
        EXPECT_EQ(str[i], to[i]);
    }
}
