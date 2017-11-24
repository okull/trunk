#pragma once
#include <memory>

namespace DesignPatterns
{
	template<typename T >
	class Singleton {
	public:
		T& instance()
		{
			static const unique_ptr<T> instance = make_unique<T>();
			return *instance;
		}

		Singleton(const Singleton&) = delete;
		Singleton& operator= (const Singleton) = delete;

	protected:
		Singleton() {}
	};


} // namespace DesignPatterns