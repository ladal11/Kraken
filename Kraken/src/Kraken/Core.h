#pragma once

#ifdef KK_PLATFORM_WINDOWS
	#ifdef KK_BUILD_DLL
		#define KRAKEN_API __declspec(dllexport)
	#else
		#define KRAKEN_API __declspec(dllimport)
	#endif // KRAKEN_API
#else
	#error Kraken only supports Windows!
#endif // KK_PLATFORM_WINDOWS