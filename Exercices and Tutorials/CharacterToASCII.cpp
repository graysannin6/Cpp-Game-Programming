#include <iostream>

using std::cout,std::cin;

int main()
{
    char character;

    cout<<"Enter a single character: ";
    cin>>character;

    int value = character;

    cout<<"The ASCII value of "<<character<<" is: "<<value<<'\n';
    return 0;
}