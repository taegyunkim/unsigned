#include <iostream>

int main(int argc, const char *argv[]) {
  uint8_t a = 0x80;
  uint8_t b = 0x80;
  uint8_t c = a + b;
  printf("%u\n", c); // prints 0
  std::cout << c << std::endl; // doesn't print anything?
  return 0;
}
