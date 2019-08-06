#include <iostream>

int main() {
    
    ulong number_ticket;
    
    std::cout << "imput your number ticket and I'll answer whether it lucky ticket: ";
    std::cin >> number_ticket;
    
    short int count4;
    uint sum_first = 0;
    uint sum_last = 0;

    while (number_ticket > 0) {
        if (count4 < 3) {
            sum_first += number_ticket % 10;
            number_ticket /=10;
            ++count4;    
        } else {
            sum_last += number_ticket %10;
            number_ticket /=10;
            ++count4;
        }
    }

    if (sum_first == sum_last) {
        std::cout << "Your ticket is lucky" << std::endl;
    } else {
        std::cout << "Your ticket gives a chance to try again, but not today" << std::endl;
    }
}