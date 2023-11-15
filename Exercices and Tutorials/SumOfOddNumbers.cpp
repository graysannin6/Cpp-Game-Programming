#include <iostream>

using std::cout, std::cin;

int main()
{
    int sum{};
    cout<<"Enter the number limit to sum all odd numbers from 1 to your number: ";
    int n;
    if (!(cin>>n))
    {
        cout<<"you didnt enter an integer number!!! Try again\n";
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
          cout<<i<<'\n';
          sum += i;   
        }
        
    }
    
    cout<<"the sum is: "<<sum<<'\n';
    return 0;
}