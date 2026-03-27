#include <iostream>
#include <assert.h>
#include "calculator.h" // Assuming you have this header

void test_addition() {
    // Simple manual test if you don't have GTest installed
    if (add(2, 2) == 4) { 
        std::cout << "Test Passed!" << std::endl; 
    } else {
        std::cout << "Test Failed!" << std::endl;
        exit(1);
    }
}

int main() {
    test_addition();
    return 0;
}
