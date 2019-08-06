#include <iostream>

int main() {
    int layer_tree;
    do {
        std::cout << "How much layers christmas-tree you want? input digit [3 to 59] --> ";
        std::cin >> layer_tree;
    } while (!(layer_tree >= 3 && layer_tree <= 59));
    for (int stars = 1; stars <= layer_tree; ++stars) {
        std::cout << std::string((layer_tree - stars),' ') << std::string (stars+(stars-1), '*') << std::endl;
    }
    return 0;
}    