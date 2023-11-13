#include <iostream>

using std::cout, std::endl;

int main()
{
    const int ALIEN_POINTS = 150;
    int aliensKilled = 10;
    int score = aliensKilled * ALIEN_POINTS;
    cout<<"score: "<<score<<endl;

    enum difficulty
    {
        NOVICE, //1
        EASY,   //2
        NORMAL, //3
        HARD,   //4
        UNBEATABLE //5
    };

    difficulty myDifficulty = EASY;

    enum shipCost 
    {
        FIGHTER_COST = 25,  
        BOMBER_COST,          //as it has no value assigned it gets the value of his predecesor + 1;
        CRUISER_COST = 50
    };

    shipCost myShipCost = BOMBER_COST;
    cout<<"\nTo upgrade my ship to a Cruiser will cost "
        <<(CRUISER_COST - myShipCost)<<" Resource Points.\n";

    return 0;
}