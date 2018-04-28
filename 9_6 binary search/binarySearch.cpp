#include <iostream>
#include <vector>

using namespace std;

// sorted array, key to find, minimum index of search, maximum index of search
void binarySearch (vector <int> tab, int search_for, int left_i, int right_i) {

    // temporary variable set to mid index
    int _temp = (left_i + right_i)/2;

    // when found
    if ( search_for == tab[_temp] ) {
        cout << _temp;
        return;
    // when the key is greater than value under current mid index
    } if ( search_for > tab[_temp] ) {
        left_i = _temp;
    // when the key is smaller than value under current mid index
    } else if ( search_for < tab[_temp]) {
        right_i = _temp;
        // bullet proof
    } else {
        return;
    }

    // call this function with new parameters
    binarySearch(tab, search_for, left_i, right_i);

}

int main () {
    vector <int> tab;
    int n, search_for, _temp;
    cin >> n >> search_for;

    for ( int i = 0; i < n; i++ ) {
        cin >> _temp;
        tab.push_back(_temp);
    }

    binarySearch(tab, search_for, 0, tab.size()-1);
    return 0;
}
