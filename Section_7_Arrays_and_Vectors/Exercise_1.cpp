/*Declaring, Initializing and Accessing an Array
Declare an array of 10  integers named arr  and initialize the array so that all 10 integers are 0 .
Then assign 100  to the first element of the array and 1000  to the last element of the array.*/

#include <iostream>
//#include <vector>

using namespace std;

int main ()
{
    int arr [10] {};
    arr[0] = 100;
    arr[9] = 1000;

    cout << "First element: " << arr[0] << endl;
    cout << "Last element: " << arr[9] << endl;
}