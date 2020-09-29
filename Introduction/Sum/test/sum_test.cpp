#include "../src/sum.h"

#include <gtest/gtest.h>

TEST(sum, is_sum_works) {
    ASSERT_EQ(20, sum(5, 15));
    ASSERT_EQ(-2, sum(0, -2));
    ASSERT_EQ(0, sum(-10, 10));
}
