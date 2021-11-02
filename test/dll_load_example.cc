#include <windows.h>

#include <iostream>

typedef void(__cdecl *PRINT_HELLO_PTR)();
typedef int(__cdecl *ADD_PTR)(int, int);

int main() {
  HINSTANCE test_lib = LoadLibrary(TEXT("test_lib.dll"));

  int success_count = 0;
  if (test_lib != nullptr) {
    PRINT_HELLO_PTR php =
        (PRINT_HELLO_PTR)GetProcAddress(test_lib, "PrintHello");
    ADD_PTR addp = (ADD_PTR)GetProcAddress(test_lib, "Add");

    if (php != nullptr) {
      php();
      ++success_count;
    }

    if (addp != nullptr) {
      int ret = addp(3, 7);
      std::cout << "ret = " << ret << std::endl;
      ++success_count;
    }
  }

  if (success_count == 2) {
    std::cout << "Succeeded in loading dll" << std::endl;
  } else {
    std::cout << "Failed in loading dll" << std::endl;
  }
  return 0;
}