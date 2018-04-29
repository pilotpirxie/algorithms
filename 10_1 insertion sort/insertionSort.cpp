#include <vector>
#include <iostream>

using namespace std;

int binarySearch(vector<int> tab, int item, int low, int high) {
    if (high <= low) {
        if ( item > tab[low] ) {
            return (low + 1);
        } else {
            return low;
        }
    }else {
        int mid = (low + high)/2;
        if(item == tab[mid]) {
            return mid+1;
        } else if(item > tab[mid]) {
            return binarySearch(tab, item, mid+1, high);
        } else {
            return binarySearch(tab, item, low, mid-1);
        }
    }
}

void insertionSort(vector<int> tab) {
    for (int i = 1; i < tab.size(); i++) {
        // variable for storing information about lowest index to move by one
        int j = i - 1;

        // select value to insert
        int selected = tab[i];

        // find position to insert
        int newPosition = binarySearch(tab, selected, 0, j);

        // move all elements by one
        while (j >= newPosition) {
            tab[j+1] = tab[j];
            j--;
        }
        tab[j+1] = selected;
    }

    // print all elements
    for ( int i = 0; i < tab.size(); i++ ) {
        cout << tab[i] << " ";
    }
}

int main(){
    vector<int> tab = {4,3,2,10,12,1,5,6,-30};
    insertionSort(tab);
    return 0;
}

