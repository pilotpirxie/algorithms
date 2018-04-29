#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeArrays( vector<int>tab1, vector<int> tab2 ) {
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

    return output;
}

// return sorted array
// in each execution divide tab into two merged pieces
// in deepest execution it merge of two array with just one element
vector<int> mergeSort ( vector<int>tab ) {

    // if tab has two or more elements
    if ( tab.size() > 1 ) {

        // handle left and right side
        vector<int> _tab1;
        vector<int> _tab2;

        // divide tab from 0 to mid index
        for ( int i = 0; i < tab.size()/2; i++ ) {
            _tab1.push_back(tab[i]);
        }

        // divide tab from mid index to the end
        for ( int i = tab.size()/2; i < tab.size(); i++ ) {
            _tab2.push_back(tab[i]);
        }

        // return one array from merged two arrays
        // from next execution
        // in deepest execution it merge two array both with one element
        return mergeArrays(mergeSort(_tab1), mergeSort(_tab2));
    } else {

        // when tab has one element
        return tab;
    }
}

int main () {
    vector<int> tab = {6,1,5,4,11,2,4,9,-1,0};
    vector<int> out = mergeSort(tab);

    // print elements
    for ( int i = 0; i < out.size(); i++ ) {
        cout << out[i] << " ";
    }
    return 0;
}
