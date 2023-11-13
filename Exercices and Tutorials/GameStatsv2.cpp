#include <iostream>

using std::cout,std::endl;

int main()
{
    //unsigned means it cant be negative, so it doubles the capacity of int
    unsigned int score = 5000;
    cout<<"score: "<<score<<endl;

    score = score + 100;
    cout<<"score: "<<score<<endl;

    //combined assignment operator
    score += 100;
    cout<<"score: "<<score<<endl;

    //increment operator
    int lives = 3;
    ++lives;
    cout<<"lives: "<<lives<<endl;

    lives = 3;

    lives++;
    cout<<"lives: "<<lives<<endl;

    lives = 3;
    int bonus = ++lives * 10;
    cout<<"lives, bonus = "<<lives<<","<<bonus<<endl;

    //integer wrap around
    score = 4294967295;
    cout<<"\nscore: "<<score<<endl;
    ++score;
    cout<<"score: "<<score<<endl;
    return 0;
}
