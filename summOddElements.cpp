#include <iostream>
#include <cstdint>

int main() {
  std::cout << "Please, enter a count of input elements [1..50], each of element must be in range [-60..90] (I will calculate summ of odd elements): ";
  uint16_t elemCount;
  std::cin >> elemCount;

  int32_t sumOddElem = 0;
  for (size_t i = 0; i < elemCount; ++i) {
    std::cout << "Please, enter an element " << i+1 <<" --> ";
    int16_t element;
    std::cin >> element;
    if ((element % 2) != 0) {
      sumOddElem += element;
    }
  }

  std::cout << "Sum of inputed odd numbers is --> "<< sumOddElem << std::endl;

  return 0;
}