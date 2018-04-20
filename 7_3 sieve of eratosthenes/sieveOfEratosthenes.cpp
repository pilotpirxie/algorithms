#include <iostream>
#include <vector>

using namespace std;

int main () {
    int maximum;
    cin >> maximum;
    vector <bool> sieve;

    // initialize array
    for ( int i = 0; i < maximum; i++ ) {
        sieve.push_back(true);
    }

    // remove all complex numbers
    // from 2 to sieve.size()
    // get number I and remove I+(I*J)
    for ( int i = 2; i < sieve.size(); i++ ) {
        for ( int j = i-1; j < sieve.size() / i; j++ ) {
             sieve[i+(i*j)] = false;
        }
    }

    // print all prime numbers
    for ( int i = 2; i < sieve.size(); i++ ) {
        if ( sieve[i] ) {
            cout << i << " ";
        }
    }
    return 0;
}
