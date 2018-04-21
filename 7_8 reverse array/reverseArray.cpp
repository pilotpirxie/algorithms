#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main () {
    int n;
    vector <int> arr;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        int _temp;
        cin >> _temp;
        arr.push_back(_temp);
    }

    for ( int i = 0; i < floor(arr.size()/2); i++ ) {
        int _temp = arr[i];
        arr[i] = arr[arr.size() - 1 - i];
        arr[arr.size() - i - 1] = _temp;
    }


    for ( int i = 0; i < arr.size(); i++ ) {
        cout << arr[i] << " ";
    }

    return 0;
}
