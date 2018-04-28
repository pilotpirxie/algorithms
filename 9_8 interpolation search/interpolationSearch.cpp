#include <iostream>
#include <vector>

using namespace std;

// sorted array, key to find, minimum index of search, maximum index of search
void interpolationSearch (vector <int> tab, int search_for, int left_i, int right_i) {

    int _temp = left_i + ((right_i-left_i)/(tab[right_i]-tab[left_i]))*(search_for-tab[left_i]);

    // when found
    if ( search_for == tab[_temp] ) {
        cout << _temp;
        return;
    // when the key is greater than value under current mid index
    } else if ( search_for > tab[_temp] ) {
        left_i = _temp +1;
    // when the key is smaller than value under current mid index
    } else if ( search_for < tab[_temp]) {
        right_i = _temp - 1;
        // bullet proof
    } else {
        return;
    }

    // call this function with new parameters
    interpolationSearch(tab, search_for, left_i, right_i);

}

int main () {
    vector <int> tab;
    int n, search_for, _temp;
    cin >> n >> search_for;

    for ( int i = 0; i < n; i++ ) {
        cin >> _temp;
        tab.push_back(_temp);
    }

    interpolationSearch(tab, search_for, 0, tab.size()-1);
    return 0;
}
