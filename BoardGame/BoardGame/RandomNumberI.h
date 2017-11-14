#pragma once

namespace MathUtilities
{
	class RandomNumberGenerator
	{
	protected:
		RandomNumberGenerator() = default;

	public:
		virtual ~RandomNumberGenerator() = default;

		virtual bool init() = 0;

		virtual size_t getRandom(size_t range, size_t begin = 0) = 0;

	};
} // namespace MathUtilities