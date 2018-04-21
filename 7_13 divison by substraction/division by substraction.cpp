#include <iostream>

using namespace std;

int main () {
    int n, m, i = 0;
    cin >> n >> m;
    while ( n-m >= 0 ) {
        n -= m;
        i++;
    }
    cout << i << " and " << n << " of rest";
    return 0;
}
