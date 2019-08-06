#include <iostream>
#include <cstdint>

uint32_t getSum (uint64_t number) {
  uint32_t summ = 0;
  for (; number > 0; number /= 10) {
    summ += (number % 10);
  }
  return summ;
}

int main() {
  std::cout << "Input a number and I'll find the best divider: ";
  uint64_t number;
  std::cin >> number;

  uint64_t bestDivider = number;
  uint32_t sumOfDigits = getSum(number);

  for (size_t i = 1; i <= (number / 2); ++i) {
    if (((number % i) == 0) && (getSum(i) > sumOfDigits)) {
      bestDivider = i;
    }
  }

  std::cout << bestDivider << std::endl;

  return 0;
}