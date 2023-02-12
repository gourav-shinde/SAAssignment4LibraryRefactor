#pragma once
#ifdef LINKEDLIST_EXPORTS
#define LINKEDLIST_API __declspec(dllexport)
#else
#define LINKEDLIST_API __declspec(dllimport)
#endif