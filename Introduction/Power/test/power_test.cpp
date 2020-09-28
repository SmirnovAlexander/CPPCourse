#include "../src/power.h"

#include <gtest/gtest.h>

TEST(power, is_power_works) {
    ASSERT_EQ(32, power(2, 5));
    ASSERT_EQ(27, power(3, 3));
}

TEST(power, borders) {
    ASSERT_EQ(0, power(0, 10));
    ASSERT_EQ(1, power(2, 0));
    ASSERT_EQ(1, power(0, 0));
    ASSERT_EQ(0, power(0, -1));
    ASSERT_EQ(-1000, power(-10, 3));
}
