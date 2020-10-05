#include "../src/search_substring.h"

#include <gtest/gtest.h>

TEST(search_substring, 1) {
    EXPECT_EQ(1, search_substring("hello",  "ell"));
    EXPECT_EQ(0, search_substring("",  ""));
    EXPECT_EQ(0, search_substring("a",  ""));
    EXPECT_EQ(0, search_substring("a",  "a"));
    EXPECT_EQ(-1, search_substring("a",  "b"));
    EXPECT_EQ(0, search_substring("aa",  ""));
    EXPECT_EQ(0, search_substring("aa",  "a"));
    EXPECT_EQ(0, search_substring("ab",  "a"));
    EXPECT_EQ(1, search_substring("ba",  "a"));
    EXPECT_EQ(-1, search_substring("bb",  "a"));
    EXPECT_EQ(0, search_substring("aaa",  ""));
    EXPECT_EQ(0, search_substring("bbb",  ""));
    EXPECT_EQ(0, search_substring("aaa",  "a"));
    EXPECT_EQ(1, search_substring("abc",  "b"));
    EXPECT_EQ(2, search_substring("abc",  "c"));
    EXPECT_EQ(-1, search_substring("abc",  "d"));
    EXPECT_EQ(-1, search_substring("a",  "aa"));
    EXPECT_EQ(-1, search_substring("a",  "ba"));
    EXPECT_EQ(-1, search_substring("a",  "ab"));
    EXPECT_EQ(-1, search_substring("a",  "ab"));
    EXPECT_EQ(-1, search_substring("a",  "bb"));
    EXPECT_EQ(-1, search_substring("a",  "aaa"));
    EXPECT_EQ(-1, search_substring("aa",  "aaa"));
    EXPECT_EQ(0, search_substring("aaa",  "aaa"));
    EXPECT_EQ(0, search_substring("aaab",  "aaa"));
    EXPECT_EQ(1, search_substring("baaa",  "aaa"));
    EXPECT_EQ(1, search_substring("baaaa",  "aaa"));
    EXPECT_EQ(1, search_substring("baaab",  "aaa"));
    EXPECT_EQ(-1, search_substring("abd",  "abc"));
    EXPECT_EQ(2, search_substring("ababc",  "abc"));
    EXPECT_EQ(3, search_substring("abdabc",  "abc"));
}
