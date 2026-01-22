#include <iostream>
#include "math.hpp"

int main() {
    int a = 10;
    int b = 5;
    int c = 0;

    std::cout << "add(" << a << ", " << b << ") = " << add(a, b) << '\n';
    std::cout << "subtract(" << a << ", " << b << ") = " << subtract(a, b) << '\n';
    std::cout << "multiply(" << a << ", " << b << ") = " << multiply(a, b) << '\n';
    std::cout << "divide(" << a << ", " << b << ") = " << divide(a, b) << '\n';

    // Demonstrate divide by zero behavior
    std::cout << "divide(" << a << ", " << c << ") = " << divide(a, c) << '\n';

    return 0;
}
