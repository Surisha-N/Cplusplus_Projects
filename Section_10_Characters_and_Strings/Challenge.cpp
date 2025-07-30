/*Challenge Requirements
You need to write a program that:

Asks the user to enter a secret message (a string).
Encrypts that message using the substitution cipher.
Displays the encrypted message.
Then decrypts the encrypted message back to the original message.
You can use two strings for your substitution: one string for the alphabet and another 
string for the key.

A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decrypt the encrypted message back to the original message.

You may use the 2 strings below for your substitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, punctuation, 
whitespace and so forth. Also, currently the cipher always substitutes a lowercase letter 
with an uppercase letter and vice-versa. This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() 
{
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string secret_message {};
    cout << "Enter a secret message: ";
    getline(cin, secret_message);
    string encrypted_message;

    for (auto i:secret_message)
    {
        size_t position =alphabet.find(i);
        if (position != string::npos) 
        {
            char new_char=key.at(position);
            encrypted_message.insert(encrypted_message.end() ,new_char); //encrypted_message += z;
        } 
        else 
        {
            encrypted_message += i; 
        }
    }
    
    cout << "Encrypted message: "<< encrypted_message << endl;

    string decrypted_message {};

    for (auto j : encrypted_message)
    {
        size_t position = key.find(j);
        if (position != string::npos)
            {
                char new_char = alphabet.at(position);
                decrypted_message += new_char;
            }
        else
            decrypted_message += j;
    }

    cout << "Decrypted message: "<< decrypted_message << endl;

    cout << endl;
    return 0;
}
