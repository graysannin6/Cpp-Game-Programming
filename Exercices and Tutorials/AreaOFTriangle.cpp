#include<iostream>

using std::cout,std::cin;

int main()
{
    unsigned short base;
    unsigned short height;
    cout<<"Enter the base of the triangle: ";
    cin>>base;
    cout<<"Enter the height of the triangle: ";
    cin>>height;

    double area = static_cast<double> (base * height) / 2;

    cout<<"The area of the Triangle is: "<<area<<'\n';
    return 0;
}