#pragma once
#ifdef APP1LIBRARY_EXPORTS
#define APP1LIBRARY_API __declspec(dllexport)
#else
#define APP1LIBRARY_API __declspec(dllimport)
#endif
