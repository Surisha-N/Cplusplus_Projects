#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    int i{0};
    bool vowel_found {false};

    // Uncomment one of the following lines to test with different vectors
    //vector<char> vec {'f','r','a','n','k'};
    //vector<char> vec {'F','R','A','N','K'};
    //vector<char> vec {'h','e','l','l','o'};
    //vector<char> vec {};
    vector<char> vec {'x','y','z','o'};
    
    do
    {
        for (int i=0; i<vec.size(); i++)
            {
                if(vec.at(i) == 'a' || vec.at(i) == 'e' || vec.at(i) == 'i' || vec.at(i) == 'o' || vec.at(i) == 'u')
                    {
                        cout << "Vowel found: " << vec.at(i);
                        vowel_found = true;
                        break;
                    }
                else 
                    {
                        vowel_found = false;
                    }
            }
        i=vec.size();
        
    } while (i<vec.size() && vowel_found == false);
    
    if (vowel_found == false)
        {
            cout << "No vowel was found" ;
        }

}

/* An alternative approach using a function could be:
void find_first_vowel(const std::vector<char>& vec) 
{
    size_t i{0};
    bool vowel_found {false};

    if (!vec.empty()) 
    {
        do 
        {
            if (vec.at(i) == 'a' || vec.at(i) == 'e' || vec.at(i) == 'i' || vec.at(i) == 'o' || vec.at(i) == 'u') 
            {
                vowel_found = true;
            } 
            else 
            {
                i++;
            }
        } while (!vowel_found && i < vec.size());
    }
    
    if (vowel_found) 
    {
        cout << "Vowel found: " << vec.at(i);
    } 
    else 
    {
        cout << "No vowel was found";
    }
}*/
