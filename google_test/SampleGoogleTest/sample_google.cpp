/**
 * @file sample_google.cpp
 * @author gandla bhargavi
 * @brief
 * @version 0.1
 * @date 2024-10-24
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <gtest/gtest.h>

TEST(SampleTest, Addition)
{
    EXPECT_EQ(2 + 2, 4);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
