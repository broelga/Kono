#pragma once

#ifdef KN_ENABLE_ASSERTS
#define KN_ASSERT(x, ...) { if(!x)) { KN_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#define KN_CORE_ASSERT(x, ...) { if(!x)) { KN_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
#define KN_ASSERT(x, ...)
#define KN_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)

#define KN_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)

