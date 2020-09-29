#include "../src/quadratic.h"

#include <gtest/gtest.h>

TEST(find_roots, is_find_roots_works) {
    ASSERT_EQ(-2, find_roots(1, 4, 4).first);
    ASSERT_EQ(-2, find_roots(1, 4, 4).second);
    ASSERT_EQ(0, find_roots(1, 0, 0).first);
    ASSERT_EQ(0, find_roots(1, 0, 0).second);
    ASSERT_NEAR(-0.719224, find_roots(2, 7, 4).first, 1. / 1e6);
    ASSERT_NEAR(-2.780776, find_roots(2, 7, 4).second, 1. / 1e6);
}

TEST(find_roots, is_find_roots_throwing_error) {
    ASSERT_THROW(find_roots(1, 0, 1), std::runtime_error);
    ASSERT_THROW(find_roots(2, 2, 10), std::runtime_error);
}
