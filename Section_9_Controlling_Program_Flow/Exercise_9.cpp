/*Nested Loops - Sum of the Product of all Pairs of Vector Elements
Given a vector of integers named vec  that is provided for you, 
find the sum of the product of all pairs of vector elements.
You should declare an integer variable named result 
and store the final product in this variable.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    vector<int> vec {1, 2, 3};
    int result{};
    
int result{};
int i{0};
int j(0);

    
    if (vec.empty()||vec.size()==1)
        result = 0;
    else
        for (int i{0}; i < vec.size(); i++)
            for (int j{i + 1}; j < vec.size(); j++)
                if (i<j)
                    result += vec.at(i)*vec.at(j);
}

/* Original code for reference
vector<int> vec {1, 2, 3};

    int result{};
    int i{0};
    int j(0);
    vector <int> pairs;
    int pair{0};
    
    if (vec.empty()||vec.size()==1)
        result = 0;
    else
        do
        {
            for (int i{0}; i<vec.size();i++)
                {
                    for (int j{0}; j<vec.size();j++)
                    {
                        if(i != j)
                        {
                            pair = vec.at(i)*vec.at(j);
                            cout << "Pair: " << vec.at(i) << " * " << vec.at(j) << " = " << pair << endl;
                            pairs.push_back(pair);
                        }
                    }
                }

            cout << "Before sort and unique: ";
            for(auto n : pairs) cout << n << " ";
            cout << endl;

            sort(pairs.begin(), pairs.end());
            
            cout << "After sort: ";
            for(auto n : pairs) cout << n << " ";
                cout << endl;

            // Remove duplicate products
            auto last = unique(pairs.begin(), pairs.end());

            cout << "After unique: ";
            for(auto m : pairs) cout << m << " ";
            cout << endl;

            pairs.erase(last, pairs.end());

            cout << "After erase: ";
            for(auto o : pairs) cout << o << " ";
            cout << endl;

            for (auto pair_result: pairs)
            {
                result += pair_result;
            }
            i=vec.size();
            
        }while(i<vec.size());

    cout << "Sum of the product of all pairs: " << result << endl;
    return 0;*/