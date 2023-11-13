#include <iostream>

using std::cout,std::endl,std::cin;

int main()
{
    cout<<"Enter 3 game scores of your last match of flappy bird and i will output your average score!\n";

    int firstScore, secondScore, thirdScore;

    cout<<"Enter the scores separated by space (Ex: 10 45 34): ";
    cin>>firstScore>>secondScore>>thirdScore;

    double avg = static_cast<double>(firstScore + secondScore + thirdScore)/3;

    cout<<"Your avg score is: "<<avg<<endl;
    

    return 0;
}






//1. Create a list of six legal variable names—three good choices and three
//bad choices. Explain why each name falls into the good or bad category.

/*Good Variable Names:

playerScore: Clearly indicates what the variable represents, which is the score of the player. The use of camelCase makes it readable.

enemyCount: Descriptive and concise, letting the programmer know that this variable keeps track of the number of enemies.

totalAmmoLeft: Provides a clear understanding that it represents the total remaining ammunition, using the word 'Left' to imply what remains.

Bad Variable Names:

data: This is too vague and generic. It does not provide any indication of what the data refers to or what type of data it is.

xyz: Such a name fails to communicate the purpose or type of the variable. It looks like a placeholder and should be replaced with a descriptive name.

num1: While slightly more descriptive than xyz, it's still unclear what num1 relates to. It doesn't indicate the context or meaning within the program.
*/

/*
2. What’s displayed by each line in the following code snippet? Explain
each result.
cout << "Seven divided by three is " << 7 / 3 << endl;
cout << "Seven divided by three is " << 7.0 / 3 << endl;
cout << "Seven divided by three is " << 7.0 / 3.0 << endl;


cout << "Seven divided by three is " << 7 / 3 << endl;

This line will display: Seven divided by three is 2
Explanation: Since both 7 and 3 are integers, the division is integer division, and the result will be the quotient without any remainder (truncated towards zero).
cout << "Seven divided by three is " << 7.0 / 3 << endl;

This line will display: Seven divided by three is 2.33333 (the number of decimal places may vary)
Explanation: Here, 7.0 is a double, and 3 is an integer. When an integer is used with a floating-point number (double in this case), the integer is promoted to a double, and floating-point division is performed, resulting in a floating-point number.
cout << "Seven divided by three is " << 7.0 / 3.0 << endl;

This line will display: Seven divided by three is 2.33333 (the number of decimal places may vary)
Explanation: Both operands are doubles, so floating-point division is performed, resulting in a floating-point number.

*/