#include "stdafx.h"
#include "gtest\gtest.h"
#include <RandomNumber.h>
#include <stdexcept>

TEST(RandomNumberTests, getRandom)
{
	MathUtilities::RandomNumberGeneratorImpl generator;

	generator.init();
	EXPECT_THROW(generator.getRandom(0u), std::invalid_argument);
}