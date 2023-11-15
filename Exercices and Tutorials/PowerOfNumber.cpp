#include <iostream>

using std::cout, std::cin;

int main() {
    int base, exponent, result = 1;
    cout << "Enter the base and the exponent separated by space (Ex. 2 3): ";
    if (!(cin >> base >> exponent)) {
        cout << "Invalid input. Please enter numeric values.\n";
        return 1; // Exit with an error code
    }

    if (exponent < 0) {
        cout << "Negative exponents are not handled by this program.\n";
        return 1; // Exit with an error code
    }

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    cout << "Result: " << result << "\n";
    return 0;
}
