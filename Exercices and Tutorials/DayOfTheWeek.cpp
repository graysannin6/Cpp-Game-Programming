#include <iostream>
#include <limits>

using std::cout, std::cin;

int main()
{
    short dayOfTheWeek;
    
    do
    {
        cout<<"Enter the number of the day of the week, Ex. Monday is 1 /Sunday is 7: ";
        cin>>dayOfTheWeek;

        if (std::cin.fail()) {
            std::cin.clear(); // Clear error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore incorrect input
            continue; // Continue to the next iteration of the loop
        }
       
    } while (dayOfTheWeek <= 0 || dayOfTheWeek > 7);

    switch (dayOfTheWeek)
    {
    case 1:
        cout<<"Monday\n";
        break;
    case 2:
        cout<<"Tuesday\n";
        break;
    case 3: 
        cout<<"Wednesday\n";
        break;
    case 4:
        cout<<"Thurday\n";
        break;
    case 5:
        cout<<"Friday\n";
        break;
    case 6:
        cout<<"Saturday\n";
        break;
    case 7:
        cout<<"Sunday\n";
        break;
    default:
        break;
    }
    
    return 0;
}