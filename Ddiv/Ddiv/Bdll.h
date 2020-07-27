#ifndef Bdll_H_
#define Bdll_H
#ifdef MYLIBDLL
#define MYLIBDLL extern "C" _declspec(dllimport) 
#else
#define MYLIBDLL extern "C" _declspec(dllexport) 
#endif
MYLIBDLL long double Sub(float plus1, float plus2);
#endif