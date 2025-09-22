/*Operator Overloading as Non-member Functions
Given the provided Money class,  please add the overloaded  + operator so that it will add two 
Money objects together and return a Money object representing their sum.
This overloaded operator should return a Money object and should be implemented as a non-member 
friend function.
First, add the overloaded operator function declaration to the Money class declaration in Money.h
Second, add the overloaded operator function definition in Money.cpp
This overloaded operator function should not modify the objects in any way.*/

#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}

Money operator+(const Money &lhs, const Money &rhs)
{
    int dollars = lhs.dollars + rhs.dollars;
    int cents = lhs.cents + rhs.cents;
    int total = dollars*100 + cents;
    return total;
}
