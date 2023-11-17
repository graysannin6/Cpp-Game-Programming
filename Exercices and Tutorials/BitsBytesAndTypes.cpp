#include <iostream>

using std::cout;

int main()
{
    cout<<"The size of an int is: "<<sizeof(int)<<'\n';
    cout<<"The size of a char is: "<<sizeof(char)<<'\n';
    cout<<"The size of an int is: "<<sizeof(float)<<'\n';
    cout<<"The size of a char is: "<<sizeof(double)<<'\n';

    unsigned int x =0; //cant be negative / 0 to 2 pow 32 - 1
    return 0;
}