// CGT215Lab05_Winter_Geo.cpp
// LAB 05
// CREATING A CYPHER

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    vector<char> cypher = {'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E'};
    string input;

    cout << "Written by Geo Winter" << endl;
    cout << "=====================================================================" << endl;
    cout << "|                    Cypher Text Program                            |" << endl;
    cout << "=====================================================================" << endl;
    cout << "\nEnter text to cypher: ";
    getline(cin, input);

    int length = input.size();

    cout << endl << "Encoded message: ";
    for (int i = 0; i < length; i++) {

        char letter = input[i];

        int num_letter = int(letter);

        if (num_letter > 64 && num_letter < 91) {
           int num_cypher = num_letter - 65;
           cout << cypher[num_cypher];
        }
        else if (num_letter > 96 && num_letter < 123) {
           int low_num_cypher = num_letter - 32;
           int num_cypher = low_num_cypher - 65;
           char low_cypher = cypher[num_cypher];
           int num_low_cypher = int(low_cypher + 32);
           cout << char(num_low_cypher);
        }
        else {
            cout << input[i];
        }
    }
    cout << "\n\n=====================================================================" << endl;
    cout << "|                    Cypher Text Program                            |" << endl;
    cout << "=====================================================================\n";

    return 0;
}

