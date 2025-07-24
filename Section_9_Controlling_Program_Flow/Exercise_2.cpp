/*If-Else Statement - Can you Drive?
In this exercise you will use an simple if/else  statement to decide if someone can drive. 
Let's assume that anyone 16 or older can legally drive.
If the person can legally drive, your program should display, "Yes - you can drive!" using a cout  statement. 
If the person cannot legally drive, then your program should display, "Sorry, come back in n  years", 
where n is how many years until the person turns 16 year old.*/

#include <iostream>

using namespace std;

int main() {
    int age;

    cout << "Please enter your age: ";
    cin >> age;

    if (age >= 16) 
    {
        cout << "Yes - you can drive!" << endl;
    } 
    else 
    {
        int yearsUntilDriving = 16 - age;
        cout << "Sorry, come back in " << yearsUntilDriving << " years." << endl;
    }

    return 0;
}