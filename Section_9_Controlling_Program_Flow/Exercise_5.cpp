/*For loop - Sum of Odd Integers
Write code that uses a for loop to calculate the sum of the odd integers from 1 to 15, inclusive. 
The final result should be stored in an integer variable named sum .*/

#include <iostream>

using namespace std;

int main()
{
    int sum{0};
    for(int i=1; i<=15; i++)
    {
        if (i % 2 != 0)
            sum += i;
    }
    cout << "The sum of odd integers from 1 to 15 is: " << sum << endl;
    return 0;
}