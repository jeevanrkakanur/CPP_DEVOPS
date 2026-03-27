#include <iostream>
#include "calculator.h"

int main() {
    // 1. Create the Calculator object (the "instance")
    Calculator calc; 

    // 2. Call the 'add' method through the object
    double result = calc.add(2.0, 2.0);

    if (result == 4.0) {
        std::cout << "Unit Test Passed: 2 + 2 = 4" << std::endl;
        return 0; // Success
    } else {
        std::cerr << "Unit Test Failed!" << std::endl;
        return 1; // Failure
    }
}
