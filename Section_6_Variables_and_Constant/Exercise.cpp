#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int age;
    double hourly_wage {23.50};
    string name;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;

    cout<< "Your name is " << name << ". Your age is " << age << ". Your hourly wage is $" << hourly_wage << "." << endl;
}