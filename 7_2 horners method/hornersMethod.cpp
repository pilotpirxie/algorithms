#include <iostream>
#include <vector>

using namespace std;

// tab - factors of polynomial
// x - factor to find search
int hornersMethod(vector <int> tab, int x) {
    int solve = tab[0];
    for ( int i = 1; i < tab.size(); i++ ) {
        solve = solve*x+tab[i];
    }
    return solve;
}

int main(){
    vector <int> toSolve = {-1,7,-1,0};
    cout << hornersMethod(toSolve, -3);
    return 0;
}
