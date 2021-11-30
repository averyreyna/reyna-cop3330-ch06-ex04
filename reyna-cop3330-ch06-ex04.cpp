/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Avery Reyna
 */

#include <iostream>
#include <vector>
using namespace std;

class Pair 
{
    public:
        string name;
        int value;

        Pair(string string1, int i) 
        {
            this->name = string1;
            this->value = i;
        }

};

int main() 
{
    string str;
    int val;
    vector<Pair> pairs;

    cout << "Please enter names followed by integers. Press enter to add more names and values. Once done, enter NoName and 0.\n";

    while (cin >> str >> val) 
    {
        if (str == "NoName" && val == 0)
        {
            break;
        }

        for (int i = 0; i < pairs.size(); i++) 
        {
            if (str == pairs[i].name) 
            {
                cout << "Error! The name you entered is a duplicate.\n";
                return 0;
            }
        }

        pairs.push_back(Pair(str, val));
    }


    cout << "\nYou entered:\n";

    for (Pair p : pairs)
    {
        cout << "(" << p.name << ", " << p.value << ")\n";
    }

    return 0;
}