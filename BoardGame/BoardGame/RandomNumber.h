#pragma once
#include "RandomNumberI.h"

namespace MathUtilities
{
	class RandomNumberGeneratorImpl : public RandomNumberGenerator
	{
	public:
		RandomNumberGeneratorImpl() = default;

		virtual ~RandomNumberGeneratorImpl() = default;

		/*< RandomNumberGenerator >*/
		virtual bool init() override;

		virtual size_t getRandom(size_t range, size_t begin = 0) override;
		/*< RandomNumberGenerator />*/

	};
} // namespace MathUtilities