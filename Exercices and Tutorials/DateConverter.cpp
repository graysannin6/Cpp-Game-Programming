#include <iostream>

using std::cout, std::cin;

int main() {
    unsigned int numberOfDays;
    cout << "Enter number of days: ";
    cin >> numberOfDays;

    unsigned int years = numberOfDays / 365;
    unsigned int months = (numberOfDays % 365) / 30;
    unsigned int weeks = ((numberOfDays % 365) % 30) / 7;
    unsigned int days = ((numberOfDays % 365) % 30) % 7;

    cout << years << " years, " << months << " months, " << weeks << " weeks, " << days << " days\n";
    return 0;
}
