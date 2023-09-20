#include <iostream>
#include <iomanip> 

int main() {
    double a, b;

    std::cout << "Press a: ";
    std::cin >> a;

    std::cout << "Press b: ";
    std::cin >> b; 

    std::cout << "a\t\tb\t\ta^2\t\tb^2\t\ta^3\t\tb^3\n";

    std::cout << std::fixed << std::setprecision(4); 
    std::cout << a << "\t\t" << b << "\t\t" << a * a << "\t\t"
        << b * b << "\t\t" << a * a * a << "\t\t" << b * b * b << "\n";

    return 0;
}
