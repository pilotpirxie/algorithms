#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int n, i = 0;
    cin >> n;

    while ( n != 2 && n != 1 && n != 0 ) {
        n /= 2;
        i++;
    }
    if ( n == 2 ) {
        cout << "2^" << i + 2 << "=" << pow(2,i+2);
    } else if ( n == 1)  {
        cout << "2^" << i + 1 << "=" << pow(2,i+1);
    } else {
        cout << "2^" << i << "=" << pow(2,0);
    }

    return 0;
}
