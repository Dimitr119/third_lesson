#include <iostream>
#include <cstdint>

int main() {
  std::cout << "Please, enter a count of input elements [1..50], each of element must be in range [-60..90] (I will calculate summ of odd elements): ";
  uint16_t elemCount;
  
  
  while (!(std::cin >> elemCount) || (elemCount < 1 || elemCount > 50)) {
    std::cout << "Wrong! Please input elements in range [1..50]" << std::endl;
    std::cin.clear();
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
  }
  

  int32_t sumOddElem = 0;
  for (size_t i = 0; i < elemCount; ++i) {
    std::cout << "Please, enter an element " << i+1 <<" --> ";
    int16_t element;
    while (!(std::cin >> element) || (element < -60 || element > 90)) {
      std::cout << "Error! Re-Input count of elements in range [-60..90]" << std::endl;
      std::cin.clear();
      std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
    }    
    
    if ((element % 2) != 0) {
      sumOddElem += element;
    }
  }

  std::cout << "Sum of inputed odd numbers is --> "<< sumOddElem << std::endl;

  return 0;
}
