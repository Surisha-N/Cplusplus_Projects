/*Creating and Accessing Objects
We have already declared a C++ class named Dog  that is located in Dog.h 
In the test_dog function create a Dog  object named spot and, using the . 
operator, set the name  attribute to the string "Spot"  and the age  attribute to 5 .

Adding public methods that access private class attributes
Given the following Dog class in Dog.h add the following public getter and setter methods 
that get and set each class attribute as follows:

get_name returns the name attribute of the dog 
set_name sets the name attribute of the dog to the string that is passed into the method.
get_age returns the age attribute of the dog
set_age sets the age attribute of the dog to the int passed into the method.
get_human_years() return the dog's age * 7
speak()  returns the std::string "Woof"
*/

#include "Dog.h"
#include <iostream>

using namespace std;

Dog test_dog() 
{
    Dog spot;
    spot.set_name("Spot");
    cout << "Dog's name: " << spot.get_name() << endl;
    spot.set_age(5);
    cout << "Dog's age: " << spot.get_age() << endl;
    cout << "Dog's age in human years: " << spot.get_human_years() << endl;
    cout << "Dog speaks: " << spot.speak() << endl;

    return spot;
};

int main()
{
    test_dog();
}