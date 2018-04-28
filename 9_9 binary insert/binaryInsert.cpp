#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void binarySearch (vector <int> tab, int to_insert, int left_i, int right_i) {
    // get the mid index
    int _temp = (left_i + right_i)/2;

    // check if this number fit to this place
    if ( to_insert >= tab[_temp] && to_insert <= tab[_temp+1] ) {
        cout << "You can insert " << to_insert << " after index: " << _temp << ". This is " << tab[_temp] << " and the next one is " << tab[_temp+1];
        return;
    // set new left index
    } if ( to_insert > tab[_temp] ) {
        left_i = _temp;
    // set new right index
    } else if ( to_insert < tab[_temp]) {
        right_i = _temp;
    // bullet proof
    } else {
        return;
    }
    binarySearch(tab, to_insert, left_i, right_i);
}

int main () {
    // input array
    vector <int> tab = {37, 23, 0, 17, 12, 72, 31, 46, 100, 88, 54};

    // sort the array
    sort(tab.begin(), tab.end());

    // get number to insert
    int to_insert;
    cin >> to_insert;

    binarySearch(tab, to_insert, 0, tab.size()-1);
    return 0;
}
