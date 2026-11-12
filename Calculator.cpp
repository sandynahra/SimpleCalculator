#include <iostream>
#include <cmath>


int main() {
    double a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "Sum = " << a + b << std::endl;
    std::cout << "Difference = " << a - b << std::endl;
    std::cout << "Product = " << a * b << std::endl;
    if (b != 0) {
        std::cout << "Quotient = " << a / b << std::endl;
    } else {
        std::cout << "Division by zero is not allowed." << std::endl;
    }
    std::cout << "Power = " << std::pow(a, b) << std::endl;
    return 0;
}