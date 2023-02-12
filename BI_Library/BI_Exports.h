#pragma once
#ifdef BILIBRARY_EXPORTS
#define BILIBRARY_API __declspec(dllexport)
#else
#define BILIBRARY_API __declspec(dllimport)
#endif
