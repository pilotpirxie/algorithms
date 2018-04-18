#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
    // input text
    string inputText;
    cin >> inputText;

    // conversion from input to vector that is much easier to read and work on
    vector <char> el(inputText.begin(), inputText.end());

    // number of swap
    int swapCount = 0;

    // for each element of vector array - 2
    for ( int i = 0; i < el.size()-1; i++ ) {

        // index of minimum value
        int minimum = i;

        // search for minimum value
        // from i+1 to the end
        for ( int j = i+1; j < el.size(); j++ ) {
            if ( el[minimum] > el[j] ) {
                minimum = j;
            }
        }

        // swap values
        swap(el[minimum], el[i]);
        swapCount++;
        cout << "Swapped " << el[i] << " with " << el[minimum] << endl;

        // print out array
        for ( int i = 0; i < el.size(); i++ ) {
            cout << el[i];
        }
        cout << endl;
    }

    // print total swap count
    cout << "Total swap count is " << swapCount;
    return 0;
}
