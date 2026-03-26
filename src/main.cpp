#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    int choice;
    double num1, num2;

    std::cout << "Simple Calculator\n";
    std::cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    try {
        switch (choice) {
            case 1:
                std::cout << "Result: " << calc.add(num1, num2) << std::endl;
                break;
            case 2:
                std::cout << "Result: " << calc.subtract(num1, num2) << std::endl;
                break;
            case 3:
                std::cout << "Result: " << calc.multiply(num1, num2) << std::endl;
                break;
            case 4:
                std::cout << "Result: " << calc.divide(num1, num2) << std::endl;
                break;
            default:
                std::cout << "Invalid choice!" << std::endl;
        }
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
