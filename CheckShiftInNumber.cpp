#include <iostream>
#include <cstdint>

int main() {
  uint64_t userVar;
  uint16_t userShift;
  std::cout << "Please, enter number and bit shift, separated by a space: (I will find, if the bit is setted): ";
  std::cin >> userVar >> userShift;
  bool isBitSetted = (((userVar >> (userShift - 1)) & 1) && (userShift > 0));
  std::cout << (isBitSetted ? "Yes\n" : "No\n");

  return 0;
}