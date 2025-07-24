/*Logical Operators and Operator Precedence - Can you work?
In this exercise you will create a program that determines the eligibility of an individual applying for a job as a delivery driver. 
In order for the individual to be eligible, they must be 18  years of age or older, or be above the age of  15  and have their parents consent to work. 
Additionally they must possess a valid social security number and have no driving accidents.
Let the variable age  represent the individual's age, and the boolean variables 
parental_consent  represent parental consent, ssn  represent a valid social security number, and 
accidents   represent whether they have had any car accidents.*/

#include <iostream>

using namespace std;

int main()
{
    int age;
    bool parental_consent, ssn, accidents;

    cout << boolalpha;
    cout << "Enter age, parental consent (true/false), social security number (true/false), and accidents (true/false): ";
    cin >> age >> parental_consent >> ssn >> accidents;

    //WRITE ALL YOUR CODE WITHIN THE PARENTHESES
    if ( (age >= 18 || age>15 && parental_consent) && (ssn && !accidents) )
    cout << "Yes, you can work.";
}