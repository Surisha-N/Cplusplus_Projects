/*
1) Add a Default Constructor to an Existing Class
Given the Dog class in Dog.h, add a default no-args constructor that initializes 
the dog's name to "None" and the dog's age to zero.

2) Add an Overloaded Constructor to an Existing Class
Given the Dog class defined in Dog.h, add an overloaded constructor that 
expect a std::string and int as parameters.

The constructor should allow us to create Dog objects as follows:
Dog fido {"Fido", 4}; 

3) Add a Copy Constructor to an Existing Class
The copy constructor should copy the attributes from one object to another.
Also, please display, "Copy Constructor" to cout in the body of your copy constructor.

The copy constructor should allow us to create Dog objects as follows:
Dog spot {"Spot", 5};   // Overloaded constructor
Dog twin {spot};        // Copy constructor, twin will be a copy of spot*/

#include "Dog.h"
#include <iostream>

using namespace std;

Dog test_dog() 
{
    //1) Initialisation Constructor
    Dog spot;
    cout << "Initially Dog 2's name: " << spot.get_name() << endl;
    cout << "Initially Dog 2's age: " << spot.get_age() << endl;
    spot.set_name("Spot");
    cout << "Now Dog 2's name: " << spot.get_name() << endl;
    spot.set_age(5);
    cout << "Now Dog 2's age: " << spot.get_age() << endl;
    //2)Overloaded Constructor
    Dog fido ("Fido", 4);
    cout << "Dog 1's name: " << fido.get_name() << endl;
    cout << "Dog 1's age: " << fido.get_age() << endl;
    //3) Copy Constructor
    Dog twin(spot);
    cout << "Dog 3's name: " << twin.get_name() << endl;
    cout << "Dog 3's age: " << twin.get_age() << endl;

    cout << "Dog 2's age in human years: " << spot.get_human_years() << endl;
    cout << "Dog 2 speaks: " << spot.speak() << endl;

    return spot;
};

int main()
{
    test_dog();
}