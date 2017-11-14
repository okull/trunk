#include "stdafx.h"
#include "RandomNumber.h"

#include <stdexcept>
#include <random>
#include <time.h>

namespace MathUtilities
{
	bool RandomNumberGeneratorImpl::init()
	{
		srand(static_cast<unsigned int>(time(NULL)));
		return true;
	}

	size_t RandomNumberGeneratorImpl::getRandom(size_t range, size_t begin /* = 0 */)
	{
		if (range == 0)
		{
			throw invalid_argument("Random number has to have non-zero range");
		}
		return rand() % range + begin;
	}
} // namespace MathUtilities