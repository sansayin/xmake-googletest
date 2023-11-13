#include "gtest/gtest.h"

TEST(MyTestSuite, MyTestCase) {
    EXPECT_EQ(2 + 2, 4);
    ASSERT_TRUE(true);
}

TEST(MyTestSuite, MyTestCase1) {
    EXPECT_EQ(2 + 2, 5);
    ASSERT_TRUE(true);
}

