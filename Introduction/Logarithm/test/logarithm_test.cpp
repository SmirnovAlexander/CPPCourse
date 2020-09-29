#include "../src/logarithm.h"

#include <gtest/gtest.h>

TEST(logarithm, is_logarithm_works) {
    ASSERT_EQ(0, logarithm(1));
    ASSERT_EQ(1, logarithm(2));
    ASSERT_EQ(3, logarithm(8));
    ASSERT_EQ(3, logarithm(9));
    ASSERT_EQ(15, logarithm(59218));
    ASSERT_EQ(15, logarithm(50960));
    ASSERT_EQ(15, logarithm(42043));
    ASSERT_EQ(15, logarithm(42817));
    ASSERT_EQ(13, logarithm(9998));
}
