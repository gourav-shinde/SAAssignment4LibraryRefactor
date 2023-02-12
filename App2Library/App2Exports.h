#pragma once
#ifdef APP2LIBRARY_EXPORTS
#define APP2LIBRARY_API __declspec(dllexport)
#else
#define APP2LIBRARY_API __declspec(dllimport)
#endif