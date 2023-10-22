#include <iostream>

int main() {
    int k;
    std::cout << "Input k->";
    std::cin >> k;

    std::cout << "Table of multiplication by" << k << ":" << std::endl;

    for (int i = 1; i <= 10; i++) {
        int result = k * i;
        std::cout << k << " x " << i << " = " << result << std::endl;
    }

    return 0;
}