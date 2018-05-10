#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main () {
    // input
    vector <int> input {1,2,3,3,4,5,6};

    // count
    cout << "ALGORITHM \nCOUNT(begin, end, to_find)" << endl;
    cout << count(input.begin(), input.end(), 3) << endl << endl;

    // copy
    cout << "ALGORITHM \nCOPY(begin_from, end_from, begin_to)" << endl;
    vector <int> copyInput(input.size());
    copy(input.begin(), input.end(), copyInput.begin());

    for ( int i = 0; i < copyInput.size(); i++ ) {
        cout << copyInput[i] << endl;
    }
    cout << endl << endl;

    // swap
    cout << "ALGORITHM \nSWAP(a, b)" << endl;
    cout << input[0] << " " << input[1] << endl;
    swap(input[0], input[1]);
    cout << input[0] << " " << input[1] << endl << endl;

    // reverse
    cout << "ALGORITHM \nREVERSE(begin, end)" << endl;
    reverse(copyInput.begin(), copyInput.end());
    for ( int i = 0; i < copyInput.size(); i++ ) {
        cout << copyInput[i] << endl;
    }


    // reverse
    cout << endl << "ALGORITHM \nREMOVE(begin, end, to_remove)" << endl;
    vector <int> toRemove = copyInput;
    remove(toRemove.begin(), toRemove.end(), 3);
    for ( int i = 0; i < toRemove.size(); i++ ) {
        cout << toRemove[i] << endl;
    }

    // replace
    cout << endl << "ALGORITHM \nREPLACE(begin, end, old_value, new_value)" << endl;
    vector <int> toReplace = copyInput;
    replace(toReplace.begin(), toReplace.end(), 3, 0);
    for ( int i = 0; i < toReplace.size(); i++ ) {
        cout << toReplace[i] << endl;
    }

    // unique
    cout << endl << "ALGORITHM \nUNIQUE(begin, end)" << endl;
    vector <int> toUnique = copyInput;
    unique(toUnique.begin(), toUnique.end());
    for ( int i = 0; i < toUnique.size(); i++ ) {
        cout << toUnique[i] << endl;
    }


    return 0;
}
