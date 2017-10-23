// BoardGameTests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest\gtest.h"

int add(int a, int b)
{
	return a + b;
}

int multiple(int a, int b)
{
	return a * b;
}

int main(int ac, char* av[])
{
	testing::InitGoogleTest(&ac, av);
	return RUN_ALL_TESTS();
}


TEST(Addition, addTest)
{
	EXPECT_TRUE(add(2, 2) == 4);
}

TEST(Addition, multipleTest)
{
	EXPECT_EQ(multiple(2, 2), 4);
}

