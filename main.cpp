#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    std::cout << "Add: " << calc.Add(7.0, 2.0) << std::endl;
    std::cout << "Subtract: " << calc.Sub(10.0, 4.0) << std::endl;
    std::cout << "Multiply: " << calc.Mul(5.0, 3.0) << std::endl;
    return 0;
}
