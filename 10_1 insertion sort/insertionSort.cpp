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
    int i, loc, j, k, selected;
    for (i = 1; i < tab.size(); ++i) {
        j = i - 1;
        selected = tab[i];
        loc = binarySearch(tab, selected, 0, j);
        while (j >= loc) {
            tab[j+1] = tab[j];
            j--;
        }
        tab[j+1] = selected;
    }

    for ( int i = 0; i < tab.size(); i++ ) {
        cout << tab[i] << " ";
    }
}

int main(){
    vector<int> tab = {4,3,2,10,12,1,5,6};
    insertionSort(tab);
    return 0;
}

