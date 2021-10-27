#ifndef TEST_TEST_LIB_H_
#define TEST_TEST_LIB_H_

#ifdef COMPILING_DLL
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT __declspec(dllimport)
#endif

extern "C" DLL_EXPORT void PrintHello();

#endif // TEST_TEST_LIB_H_