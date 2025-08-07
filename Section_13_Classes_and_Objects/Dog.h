#ifndef __DOG_H__
#define __DOG_H__

#include <string>

using namespace std;

class Dog 
{
private:
    string name;
    int age;
public:
    string get_name() 
    {
        return name;
    }
    
    void set_name(string name1)
    {
        name = name1;
    }
    
    int get_age() 
    {
        return age;
    }
    
    void set_age(int age1) 
    {
        age = age1;
    }

        int get_human_years()
    {
        return age*7;
    }
    
    string speak()
    {
        return "Woof";
    }
};
#endif 