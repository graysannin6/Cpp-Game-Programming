#include <iostream>

using std::cout, std::cin, std::endl;

int main() {
    unsigned short sideA, sideB, sideC;

    cout << "Enter the lengths of the three sides of the triangle, separated by spaces (e.g., 5 6 10): ";
    if (!(cin >> sideA >> sideB >> sideC)) {
        cout << "Invalid input. Please enter numeric values." << endl;
        return 1; // Exit with an error code
    }

    // Check for a valid triangle using the Triangle Inequality Theorem
    if (sideA + sideB <= sideC || sideA + sideC <= sideB || sideB + sideC <= sideA) {
        cout << "The given lengths do not form a valid triangle." << endl;
        return 1;
    }

    // Determine the type of the triangle
    bool isEquilateral = (sideA == sideB && sideB == sideC);
    bool isIsosceles = (sideA == sideB || sideB == sideC || sideA == sideC) && !isEquilateral;

    if (isEquilateral) {
        cout << "The triangle is Equilateral." << endl;
    } else if (isIsosceles) {
        cout << "The triangle is Isosceles." << endl;
    } else {
        cout << "The triangle is Scalene." << endl;
    }

    return 0;
}
