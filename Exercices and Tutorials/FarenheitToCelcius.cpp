#include <iostream>

using std::cout,std::cin;

int main()
{
    float celsius, farenheit;

    cout<<"Please enter a farenheit value: ";
    cin>> farenheit;

    celsius = ((farenheit - 32.0) * 5.0) / 9.0;

    cout<<farenheit<<" in celsius is: "<<celsius<<"\n";
    return 0;
}