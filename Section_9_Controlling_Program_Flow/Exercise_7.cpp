/*While loop exercise
Given a vector of integers, determine how many integers are present before you see the value -99 . 
Note, it's possible -99  is not in the vector! 
If -99  is not in the vector then the result will be equal to the number of elements in the vector.
The final result should be stored in an integer variable named count .
Note that you the different vectors will be tested against your code. 
You do not need to declare the vector of integers. vec  is the name of the vector you should use.*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec1 {1, 2, 3, 4, 5, -99, 6, 7, 8}; 
    vector<int> vec2 {1, 2, 3, 4, 5, 6, 7, 8}; 
    vector<int> vec3 {-99, 1, 2, 3, 4, 5};

    int count{0};
    int index{0};
    int reset{0};

    while (index < vec1.size() && vec1.at(index) != -99)
    {
        count ++;
        index++;
    }
    cout << "Count of elements before -99 in vec1: " << count << endl;

    count = reset;
    index = reset; 

    while (index < vec2.size() && vec2.at(index) != -99)
    {
        count++;
        index++;
    }
    cout << "Count of elements before -99 in vec2: " << count << endl;

    count = reset;
    index = reset;  

    while (index < vec3.size() && vec3.at(index) != -99)
    {
        count++;
        index++;
    }
    cout << "Count of elements before -99 in vec3: " << count << endl;
}