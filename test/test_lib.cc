#include <iostream>
#include "test/test_lib.h"

DLL_EXPORT void PrintHello() {
  std::cout << "Hello from test lib" << std::endl;
}