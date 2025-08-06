/*Exercise: Reverse a std::string using Pointers

Specification:

Write a C++ function reverse_string that takes a std::string as input and returns a new 
std::string with the characters in reverse order. The function should use pointers to perform 
the reversal.

Function Signature:

std::string reverse_string(const std::string& str);
Input:
str: The input string.

Output:
The function should return a new string with the characters of str reversed.

Example:

std::string input = "Hello, World!";
std::string reversed = reverse_string(input);

// reversed should be "!dlroW ,olleH"*/

#include <iostream>
#include <string>
using namespace std;

std::string reverse_string(const std::string &str) {
    std::string reversed;

    const char *start = str.c_str();
    const char *end = str.c_str() + str.size() - 1;
    const char *begin = str.c_str();
    
    while (end != begin-1)
    {
        reversed.insert(reversed.begin(),*start);
        start++;
        end--;
    }

    /*Alternative Approach
    while (end >= start) 
    {
        reversed.push_back(*end);
        end--;
    }
        */
    return reversed;
}

int main()
{
    std::string input = "Hello, World!";
    cout << "Original string: " << input << endl;
    std::string reversed = reverse_string(input);
    cout << "Reversed string: " << reversed << endl;
    // reversed should be "!dlroW ,olleH"*/
}