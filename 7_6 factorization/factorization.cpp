#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main () {
    int n;
    vector <int> primeNumbers;
    cin >> n;

    // search for all prime numbers between 2 and sqrt(n)
    for ( int i = 2; i <= sqrt(n); i++ ) {
        int _f = 0;
        for ( int j = 1; j < i+1; j++ ) {
            if ( i % j == 0 ) {
                _f++;
            }
        }
        if ( _f < 3 ) {
            primeNumbers.push_back(i);
        }
    }
    // search for factor from previously created array
    while ( n > 1 ) {
        int _t = 0;
        for ( int i = 0; i < primeNumbers.size(); i++ ) {
            if ( n % primeNumbers[i] == 0 ) {
                cout << primeNumbers[i] << " ";
                n /= primeNumbers[i];
                _t++;
                break;
            }
        }
        // if there isn't number in array that match as factor
        // this is end of function, and n is prime number
        if ( _t == 0 ) {
            cout << n;
            break;
        }
    }

    return 0;
}
