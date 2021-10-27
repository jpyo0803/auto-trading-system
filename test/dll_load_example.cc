#include <iostream>
#include <windows.h>

typedef void(__cdecl *PRINT_HELLO_PTR)();

int main() {
  HINSTANCE test_lib = LoadLibrary(TEXT("test_lib.dll"));

  bool success = false;
  if (test_lib != nullptr) {
    PRINT_HELLO_PTR php = (PRINT_HELLO_PTR)GetProcAddress(test_lib, "PrintHello");
    if (php != nullptr) {
      php();
      success = true;
    }
  } 

  if (success) {
    std::cout << "Succeeded in loading dll" << std::endl;
  } else {
    std::cout << "Failed in loading dll" << std::endl;
  }
  return 0;
}