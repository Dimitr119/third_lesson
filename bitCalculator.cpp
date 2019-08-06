#include <iostream>

int main() {
        
    unsigned long digit_data;

    std::cout << "imput number and I'll count how much bit is setted: ";
    std::cin >> digit_data;
    
    short int count = 0;

    for (size_t shift = 0; digit_data >> shift; ++shift) {
        count += (digit_data >> shift)&1;
    }
    std::cout<< "For number " << digit_data << " is setted " << count << " bit(s)" << std::endl;

    return 0;
}