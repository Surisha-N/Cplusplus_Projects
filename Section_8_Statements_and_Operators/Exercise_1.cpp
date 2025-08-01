/*Using the Assignment Operator
In this exercise, you will write a program that uses the assignment operator = 
to change the value of an initialized variable as well as assign the value of one variable to another. 
Begin by declaring and initializing the integer variable num1 to the value of 13 . 
Now declare and initialize the integer variable num2  to the value 0 .
Use the assignment operator to change the value of num1 to 5 . 
Now use the assignment operator to assign the value of  num1  to  num2.*/

#include <iostream>

using namespace std;

int main() {

    int num1 {13};
    int num2 {0};

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl; 

    num1 = 5;
    num2 = num1;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl; 

    return 0;
}