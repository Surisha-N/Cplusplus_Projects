/*The idea here is to write a program that asks the user to enter the following:
An integer representing the number of cents.
You can assume that the number of cents entered is greater than or equal to zero.
The program then displays how to provide that change to the user. 
In the U.S., one dollar is 100 cents, a quarter is 25 cents, a dime is 10 cents, 
a nickel is 5 cents, and a penny is one cent.
Do this using modulus and not using modulus.*/

#include <iostream>

using namespace std;

int main()
{
    int cents {0};
    cout << "Enter the number of cents: ";
    cin >> cents;
    int balance {cents};

    int dollar {}, 
        quarter {}, 
        dime {}, 
        nickel {}, 
        penny {};

    //Not using modulus
    dollar = cents / 100;
    cents -= dollar * 100;
    quarter = cents /25;
    cents -= quarter * 25;
    dime = cents / 10;
    cents -= dime * 10;
    nickel = cents / 5;
    cents -= nickel * 5;
    penny = cents;

    cout << "Not using modulus you can provide the change as follows:\n";
    cout << dollar << " dollars\n" << quarter << " quarters\n";
    cout << dime << " dimes\n" << nickel << " nickels\n";
    cout << penny << " pennies\n";

    //Using modulus
    cents = balance;
    dollar = cents / 100;
    cents %= 100;
    quarter = cents / 25;
    cents %= 25;
    dime = cents / 10;
    cents %= 10;
    nickel = cents/ 5;
    cents %= 5;
    penny = cents % 5;
    

    cout << "Using Modulus you can provide the change as follows:\n";
    cout << dollar << " dollars\n" << quarter << " quarters\n";
    cout << dime << " dimes\n" << nickel << " nickels\n";
    cout << penny << " pennies\n";
    return 0;
}