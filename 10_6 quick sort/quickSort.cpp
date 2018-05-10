#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void quickSort( vector<int> &tab, int left, int right ) {
    // check if element with left index exist
    if ( left < right ) {

        // get marker on first elment
        int j = left;

        // loop over all elements
        for ( int i = left+1; i < right; i++ ) {

            // if current element in loop is smaller than pivot
            if ( tab[i] < tab[left] ) {

                // swap this element with marker
                j++;
                swap(tab[j], tab[i]);
            }
        }

        // after all swap also pivot
        swap(tab[left], tab[j]);

        // run for left and right side
        quickSort(tab, left, j);
        quickSort(tab, j+1, right);
    }
}

int main () {
    vector <int> tab;

    // get some random elements
    srand(time(NULL));
    for ( int i = 0; i < 25; i++ ) {
        tab.push_back(rand() % 100);
    }

    quickSort(tab, 0, tab.size());

    // print out array
    for ( int i = 0; i < tab.size(); i++ ) {
        cout << tab[i] << " ";
    }
    return 0;
}
