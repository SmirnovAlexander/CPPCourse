#include "../src/gcd.h"

#include <gtest/gtest.h>

TEST(gcd, is_gcd_works) {
    ASSERT_EQ(2, gcd(2, 0));
    ASSERT_EQ(0, gcd(0, 0));
    ASSERT_EQ(6, gcd(18, 6));
    ASSERT_EQ(2, gcd(228, 322));
    ASSERT_EQ(1, gcd(1024, 13));
}
