#include <iostream>
#include <cmath> // For std::round

using std::cout, std::cin;

int main() {
    float money;
    cout << "Enter the quantity of money: ";
    cin >> money;

    int totalCents = static_cast<int>(std::round(money * 100)); // Convert dollars to cents

    int tenDollars = totalCents / 1000; // 1000 cents in ten dollars
    totalCents %= 1000;

    int fiveDollars = totalCents / 500; // 500 cents in five dollars
    totalCents %= 500;

    int twoDollars = totalCents / 200; // 200 cents in two dollars
    totalCents %= 200;

    int oneDollars = totalCents / 100; // 100 cents in one dollar
    totalCents %= 100;

    int quarters = totalCents / 25; // 25 cents in a quarter
    totalCents %= 25;

    int dimes = totalCents / 10; // 10 cents in a dime
    totalCents %= 10;

    int nickels = totalCents / 5; // 5 cents in a nickel
    totalCents %= 5;

    int pennies = totalCents; // Remaining cents are pennies

    cout << tenDollars << " ten dollar bills\n";
    cout << fiveDollars << " five dollar bills\n";
    cout << twoDollars << " two dollar bills\n";
    cout << oneDollars << " one dollar bills\n";
    cout << quarters << " twenty five cent pieces\n";
    cout << dimes << " ten cent pieces\n";
    cout << nickels << " five cent pieces\n";
    cout << pennies << " one cent pieces\n";

    return 0;
}
