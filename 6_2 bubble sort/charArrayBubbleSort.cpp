#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main () {
    string tekst;
    cin >> tekst;

    vector <char> el(tekst.begin(), tekst.end());
    for ( int i = 0; i < el.size(); i++ ) {
        for ( int j = 1; j < el.size(); j++ ) {
            if ( el[j] < el[j-1] ) {
                swap(el[j], el[j-1]);
            }
        }
        for ( int i = 0; i < el.size(); i++ ) {
            cout << el[i];
        }
        cout << endl;
    }
    return 0;
}
