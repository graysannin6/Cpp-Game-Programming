#include <iostream>

using std::cout, std::cin;

int main() {
    unsigned int totalSeconds;
    cout << "Enter number of total seconds: ";
    cin >> totalSeconds;

    unsigned int hours = totalSeconds / 3600; // 3600 seconds in an hour
    totalSeconds %= 3600;

    unsigned int minutes = totalSeconds / 60; // 60 seconds in a minute
    totalSeconds %= 60;

    unsigned int seconds = totalSeconds;

    cout << hours << "::";
    cout << minutes << "::";
    cout << seconds;
    return 0;
}
