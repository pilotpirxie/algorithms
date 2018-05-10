#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main (){
    string line;
    vector<string> lines;

    // read words
    fstream file("palindromes.txt");
    while (getline(file, line)) {
        string _line = line;

        // reverse array of chars (string)
        reverse(_line.begin(), _line.end());

        // compare original string with reversed
        if ( _line == line ) {
            cout << line << endl;
            lines.push_back(line);
        }
    }
    file.close();

    // save output words
    ofstream out("output.txt");
    for ( int i = 0; i < lines.size(); i++ ) {
        out << lines[i] << endl;

    }
    out.close();

    return 0;
}
