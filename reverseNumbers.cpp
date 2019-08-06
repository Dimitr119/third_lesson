#include <iostream>

int main() {

    uint reverse = 0;
    int set_num;
    int adder;

    std::cout << "imput your set of numbers ticket and I'll give reverse of it: ";
    std::cin >> set_num;

    while (set_num > 0){
        adder = set_num % 10;
        reverse = reverse * 10 + adder;
        set_num /=10;
    }

    std::cout << "---------------------------------------------> reverse of it: "<< reverse << std::endl;
     
    return 0;
}