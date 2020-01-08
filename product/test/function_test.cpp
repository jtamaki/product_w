#include <gtest/gtest.h>
#include "function.h"

TEST(function, add3) {
	EXPECT_EQ( 0, add3(0, 0, 0));
	EXPECT_EQ( 6, add3(1, 2, 3));
	EXPECT_EQ(12, add3(3, 4, 5));
}

TEST(function, sub3) {
	EXPECT_EQ( 0, sub3(0, 0, 0));
	EXPECT_EQ(-4, sub3(1, 2, 3));
	EXPECT_EQ(-6, sub3(3, 4, 5));
}

TEST(function, mul3) {
	EXPECT_EQ( 0, mul3(0, 0, 0));
	EXPECT_EQ( 6, mul3(1, 2, 3));
	EXPECT_EQ(60, mul3(3, 4, 5));
}
