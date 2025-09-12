#ifndef __DOG_H__
#define __DOG_H__

#include <string>
#include <iostream>

using namespace std;

class Dog {
private:
    string name;
    int age;
public:
    //1) Initialisation Constructor
    Dog()
    {
        name = "None";
        age = 0;
    }
    //2) Overloaded Constructor
    Dog (string name1, int age1)
    {
        name=name1;
        age=age1;
    }
    //3) Copy Constructor
    Dog (const Dog &source)
    : Dog {source.name, source.age} //Delegating initialisation for copy constructor
    {
        cout << "Copy Constructor" << endl;
    }

    string get_name() {return name; }
    void set_name(string n) {name = n; }
    int get_age() {return age; }
    void set_age(int a) { age = a;}
    int get_human_years() { return age * 7; }
    string speak() { return "Woof";}
};


#endif 