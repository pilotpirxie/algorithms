#include <iostream>

using namespace std;

int euclidean(int a, int b) {
    if ( a == 0 ) {
        return b;
    }
    euclidean (b%a, a);
}

int main () {
    int a, b;
    cin >> a >> b;
    cout << euclidean(a,b);
    return 0;
}
