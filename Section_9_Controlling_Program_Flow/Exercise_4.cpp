/*Switch Statement - Day of the Week
In this exercise you will write a switch statement that displays the name of the day of the week given the day code.
You may use the integer variable named day_code whose value we will change to automatically to test your code.
Given the following day codes, your program should display the day of the week using a cout statement. 

Day Code        Display
--------        ------------------------
    0            Sunday
    1            Monday
    2            Tuesday
    3            Wednesday
    4            Thursday
    5            Friday
    6            Saturday
    other        Error - illegal day code*/

#include <iostream>

using namespace std;

int main()
{
    int day_code {};
    cout << "Please enter the day code (0-6): ";
    cin >> day_code;
        switch (day_code)
    {
        case 0 : cout << "Sunday"; 
                    break;
        case 1 : cout << "Monday"; 
                    break;
        case 2 : cout << "Tuesday"; 
                    break;
        case 3 : cout << "Wednesday"; 
                    break;
        case 4 : cout << "Thursday"; 
                    break;
        case 5 : cout << "Friday"; 
                    break;
        case 6 : cout << "Saturday"; 
                    break;
        default : cout << "Error - illegal day code";
        
    }
}