/*Operator Overloading as Member Functions
Given the provided Money class,  please add the overloaded equality operators == and !=
These overloaded operators should return a bool and should be implemented as member functions.
Given 2 Money objects, consider them to be equal if both the dollars and cents attributes 
are the same for both objects.
First, add the overloaded operator function declarations to the Money class declaration in Money.h
Second, add the overloaded operator function definitions in Money.cpp
These overloaded functions should not modify the objects in any way.*/

#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}

bool Money::operator==(const Money &rhs) const
{
    return dollars == rhs.dollars && cents == rhs.cents;
}

bool Money::operator!=(const Money &rhs) const
{
    return !(rhs == *this);
}


