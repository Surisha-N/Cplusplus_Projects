#include <iostream>

using namespace std;

// DATE OF BIRTH
int main()
{
    int d;
    int m;
    int y;

    cout<<"Enter your date of birth (dd mm yyyy): ";
    cin >> d;
    cin >> m;
    cin >> y;
    cout << "Your date of birth is: " << d << "/" << m << "/" << y << endl;
}