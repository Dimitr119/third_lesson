#include <iostream>

int main() {
    
    int digit;
    uint counter = 0;
    uint summ = 0;
    double aver;
    
    std::cout << "input numbers and I'll give summ and average: ";
    std::cin >> digit;
    
    while (digit > 0) {
        summ += digit % 10;
        digit /= 10;
        ++counter;
    }
    aver = (double)summ/counter;

    std::cout << "Summ = " << summ  << std::endl;
    std::cout << " average = " << aver << std::endl;

    return 0;
}