#include <iostream>
#include <vector>
using namespace std;

int hornersMethod(vector <int> tab, int n, int x) {
    if ( n == 0) {
        return tab[0];
    } else {
        return hornersMethod(tab, n-1, x) * x +tab[n];
    }
}

int main () {
    vector <int> toSolve = {3,0,-4,4,-5};
    cout << hornersMethod(toSolve, toSolve.size()-1, -2);
    return 0;
}
