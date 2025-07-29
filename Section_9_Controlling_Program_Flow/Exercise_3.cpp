/*Nested If Statements - Can you Drive?
In this exercise you will use nested if statements to decide if someone can drive. 
Let's assume that anyone 16 or older can legally drive, but they must also own a car to drive.
If the person is not 16 or older then you should display, 
"Sorry, come back in n  years and be sure you own a car when you come back.", 
where n is how many years until the person turns 16 year old.
If the person is 16 or older but they do NOT own a car, then your program should display, 
"Sorry, you need to buy a car before you can drive!" .
If the person is 16 or older and they DO own a car, then your program should display, 
"Yes - you can drive!"*/

#include <iostream>

using namespace std;

int main() {
    int age {};
    bool has_car;

    cout << "Please enter your age: ";
    cin >> age;
    cout << "Do you own a car? (1 for Yes, 0 for No): ";
    cin >> has_car;

    if (age < 16) 
    {
        int yearsUntilDriving = 16 - age;
        cout << "Sorry, come back in " << yearsUntilDriving << " years and be sure you own a car when you come back." << endl;
    }

    else if (age>=16 && has_car)
        cout << "Yes - you can drive!";
    else
        cout << "Sorry, you need to buy a car before you can drive!";

    return 0;
}