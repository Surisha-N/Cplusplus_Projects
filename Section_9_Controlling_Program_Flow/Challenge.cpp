/*Challenge Description
This challenge involves using a collection or list of integers and allowing the user to select options from a menu. The menu options are: p, a, m, s, l, and q.

Pressing p prints the elements of the list.
Pressing a adds a number to the list, which the user is prompted to enter.
Pressing m displays the mean of the numbers in the list.
Pressing s displays the smallest number in the list.
Pressing l displays the largest number in the list.
Pressing q quits the program.
Any other input should result in an "invalid choice" message.
Input Validation and Case Insensitivity
Only valid choices are accepted from the user. Both uppercase and lowercase selections should be allowed. If the user enters an illegal choice, the program should display "unknown selection, please try again" and then redisplay the menu.

Printing the List (Option P)
If the user enters either uppercase or lowercase p, the program displays all elements of the list. This list consists of integers.
If the list is empty, display two square brackets [] and the message "the list is empty".
If the list is not empty, display all integers inside square brackets separated by spaces. For example, if the list contains 1, 2, 3, 4, and 5, display them accordingly.

Adding Numbers to the List (Option A)
If the user enters uppercase or lowercase a, prompt them for a number to add to the list. After adding the number, display a message confirming the number added.
Duplicate entries are allowed in the list.

Calculating the Mean (Option M)
If the user enters uppercase or lowercase m, calculate and display the average (mean) of the numbers in the list.
If the list is empty, display "unable to calculate the mean, no data".
The mean should be displayed as a double (floating-point number), not an integer.

Finding the Smallest Number (Option S)
If the user enters uppercase or lowercase s, find and display the smallest integer in the list.
For example, if the list contains 2, 4, 5, and 1, display "the smallest number is 1".
If the list is empty, display "unable to determine the smallest number".

Finding the Largest Number (Option L)
If the user enters uppercase or lowercase l, find and display the largest integer in the list.
If the list is empty, handle accordingly.

Quitting the Program (Option Q)
If the user presses q, display "goodbye" and terminate the program.

Handling Invalid Inputs
If the user enters any input other than the specified options, display "unknown selection, please try again" and redisplay the menu to prompt for input again.*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
    char selection;
    vector<int> list;
    int number_added{0};

    do
    {
        cout << "\nMenu:\n"
            << "p - print the list\n"
            << "a - add a number to the list\n"
            << "m - calculate the mean of the list\n"
            << "s - find the smallest number in the list\n"
            << "l - find the largest number in the list\n"
            << "q - quit the program\n"
            << "Please enter your choice: ";
        
        cin >> selection;

        switch (selection)
        {
            case 'p':
            case 'P':
                // Print the list
                if (list.empty())
                {
                    cout << "[] The list is empty." << endl;
                }
                else
                {
                    cout << "[ ";
                    for (const auto& num : list)
                    {
                        cout << num << " ";
                    }
                    cout << "]" << endl;
                }
                break;
            case 'a':
            case 'A':
                // Add a number to the list
                cout << "What number do you want to add?";
                cin >> number_added;
                list.push_back(number_added);
                cout << "You have added " << number_added << " to the list";
                break;
            case 'm':
            case 'M':
                // Calculate and display the mean
                if (list.empty())
                {
                    cout << "Unable to calculate the mean, no data" << endl;
                }
                else
                {
                    int sum {0};
                    for (auto num : list)
                    {
                        sum += num;
                    }
                    double mean{0};
                    mean = static_cast<double> (sum) / list.size();
                    cout << "The mean is " << mean ; 
                }
                break;
            case 's':
            case 'S':
                // Find and display the smallest number
                if (list.empty())
                {
                    cout << "Unable to determine the smallest number" << endl;
                }
                else
                {
                    sort(list.begin(),list.end());
                    cout << "The smallest number is: " << list.at(0);
                }
                break;
            case 'l':
            case 'L':
                // Find and display the largest number
                if (list.empty())
                {
                    cout << "Unable to determine the largest number" << endl;
                }
                else
                {
                    sort(list.begin(),list.end());
                    int last_value = list.size()-1;
                    cout << "The largest number is: " << list.at(last_value);
                }
                break;
            case 'q':
            case 'Q':
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Unknown selection, please try again." << endl;
        }
    } while (selection != 'q' && selection != 'Q');
    
}