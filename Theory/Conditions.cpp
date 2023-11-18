#include <iostream>

using std::cout, std::cin;

int main()
{
    bool myBoolean = false; // 2 values - true or false

    bool resultGreater = 10 > 3;
    bool resultEquality = (10 == 3);
    

    cout<<"The value of result is: "<<resultGreater<<'\n';
    cout<<"The value of result is: "<<resultEquality<<'\n';

    bool A = true;
    bool B = false;
    int x = 10;
    int y = 0;

    bool result = (A && B) || (x > y); // true
    bool result2 = (!A || B) && (x <= y); // false


    return 0;
}