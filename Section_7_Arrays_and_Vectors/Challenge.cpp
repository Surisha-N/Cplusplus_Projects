/*Declare two empty vectors of integers named vector1 and vector2, respectively.
Add 10 and 20 to vector1 dynamically using the push_back method.
Display those two vector elements using the at method as well as the size using the size method.
Do the same for vector2, except add 100 and 200 this time.
Next, declare an empty two-dimensional vector called vector2d. 
Remember, a two-dimensional vector is a vector of vectors.
Add vector1 to vector2d using push_back, then add vector2 to vector2d using push_back as well.
Display the elements in vector2d using the at method.
Change vector1's first element using the at(0) method.
Change it to 1000.
Display the elements in the two-dimensional vector again using the at method, just like before.
Finally, display the elements in vector1.*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Elements in vector1:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "Size of vector1: " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Elements in vector2:" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "Size of vector2: " << vector2.size() << endl;

    vector <vector<int>> vector2d;

    vector2d.push_back(vector1);
    vector2d.push_back(vector2);

    cout << "Elements in vector2d:" << endl;
    cout << vector2d.at(0).at(0) << endl;
    cout << vector2d.at(0).at(1) << endl;
    cout << vector2d.at(1).at(0) << endl;
    cout << vector2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << "After changing vector1's first element to 1000:" << endl;
    cout << vector2d.at(0).at(0) << endl;
    cout << vector2d.at(0).at(1) << endl;
    cout << vector2d.at(1).at(0) << endl;
    cout << vector2d.at(1).at(1) << endl;

    cout << "Elements in vector1: " << vector1.at(0) << ", " << vector1.at(1) << endl;
}