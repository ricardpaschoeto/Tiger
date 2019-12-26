#pragma once

#ifdef TG_PLATFORM_WINDOWS
	#ifdef TIGER_BUILD_DLL 
		#define TIGER_API __declspec(dllexport)
	#else
		#define TIGER_API __declspec(dllimport)
	#endif
#else
	#error Tiger Supports only Windows!
#endif
