/*If Statement - Can you Drive?
In this exercise you will use a simple if  statement to decide if someone can drive. 
Let's assume that anyone 16 or older can legally drive.
If the person can legally drive, your program should display, "Yes - you can drive!" using a cout  statement. 
If the person cannot legally drive, then your program should not display anything.*/

#include <iostream>

using namespace std;

int main()
{
    int age{};
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 16)
    {
        cout << "Yes - you can drive!" << endl;
    }

    return 0;
}