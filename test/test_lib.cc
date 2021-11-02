#include "test/test_lib.h"

#include <iostream>

DLL_EXPORT void PrintHello() {
  std::cout << "Hello from test lib" << std::endl;
}

DLL_EXPORT int Add(int a, int b) { return a + b; }