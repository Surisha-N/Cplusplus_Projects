/*Use the arithmetic operators in the manner and order in which they are listed below. 
Use the multiplication operator  *  to double  the value of the variable  number and store the result back in number .
Use the addition operator  +  to add 9  to the variable  number  and store the result back in number .
Use the subtraction operator  -  to subtract 3  from the variable number  and store the result back in number .new value. 
Use the division operator  /  to divide the the variable number  by 2   and store the result back in number .
Use the subtraction operator  -  to subtract the variable named original_number  from the variable number  and store the result back in number .
Use the modulo operator  %  to find the remainder of the new value when divided by 3  and store the result back in number .*/

#include <iostream>

using namespace std;

int main()
{
    int number {10};
    int original_number {number};

    cout << "Original number: " << original_number << endl;

    number *= 2; // number = number * 2
    cout << "After doubling: " << number << endl;

    number += 9; // number = number + 9
    cout << "After adding 9: " << number << endl;

    number -= 3; // number = number - 3
    cout << "After subtracting 3: " << number << endl;

    number /= 2; // number = number / 2
    cout << "After dividing by 2: " << number << endl;

    number -= original_number; // number = number - original_number
    cout << "After subtracting original_number: " << number << endl;

    number %= 3; // number = number % 3
    cout << "Final value after modulo 3: " << number << endl;

    return 0;
}