#pragma once

#ifdef NVS_PLATFORM_WINDOWS
	#ifdef NVS_BUILD_DLL
		#define NOVEHS_API __declspec(dllexport)
	#else
		#define NOVEHS_API __declspec(dllimport)
	#endif
#else
	#error Only Windows is supported
#endif