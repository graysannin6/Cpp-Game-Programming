#include <iostream>
#include <array>
using std::cout;

int main()
{
    std::array<int,100> arr;

    for (size_t i = 0; i < arr.size(); i++)
    {
        arr[i] = i + 1;
        if (arr[i] % 2 == 0)
        {
            cout<<arr[i]<<" is even\n";
        }
        else
        {
            cout<<arr[i]<<" is odd\n";
        }
        
    }
    
}