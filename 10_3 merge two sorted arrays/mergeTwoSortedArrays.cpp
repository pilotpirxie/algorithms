#include <iostream>
#include <vector>

using namespace std;

void mergeArrays( vector<int>tab1, vector<int> tab2 ) {
    vector<int> output;

    // as long as first or second array is not empty
    // there must be minimum one element to append
    // to output array
    while ( !tab1.empty() || !tab2.empty() ) {
        // check if both array are not empty
        // and have minimum one element
        if ( !tab1.empty() && !tab2.empty() ){

            // compare the first element
            // from 'left' side
            // push the smaller element to the output array
            // and pop it from the source array
            if ( tab1.front() < tab2.front() ) {
                output.push_back(tab1.front());
                tab1.erase(tab1.begin());
            } else {
                output.push_back(tab2.front());
                tab2.erase(tab2.begin());
            }

        // check if only tab1 is not empty
        // append all elements into output
        // and erase from source array
        } else if ( !tab1.empty() ) {
            output.push_back(tab1.front());
            tab1.erase(tab1.begin());

        // same as above but for second array
        } else if ( !tab2.empty() ) {
            output.push_back(tab2.front());
            tab2.erase(tab2.begin());
        }
    }

    // print out
    for ( int i = 0; i < output.size(); i++ ) {
        cout << output[i] << " ";
    }
}

int main () {
    vector<int> tab1 = {1,3,6,9,11,20};
    vector<int> tab2 = {1,1,1,1,1,1};
    mergeArrays(tab1, tab2);
    return 0;
}
