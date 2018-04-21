#include <iostream>

using namespace std;

int power(int n, int m) {
    if ( m == 1 ) {
        return n;
    } else {
        int _t = power(n, m/2);
        if ( m % 2 == 0 ) {
            return _t * _t;
        } else {
            return _t * _t * n;
        }
    }
}

int main () {
    int n,m;
    cin >> n >> m;
    cout << power (n, m);
    return 0;
}
