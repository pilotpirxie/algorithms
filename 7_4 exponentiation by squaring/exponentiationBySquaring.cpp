#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    // a - base
    // b - exponent
    // _temp = b
    int a, b, _temp;
    vector <int> binaryExp;

    // input value from cli
    cin >> a >> b;
    _temp = b;

    // get binary based number
    do {
        binaryExp.push_back(_temp%2);
        _temp /= 2;
    } while ( _temp > 0);

    reverse(binaryExp.begin(), binaryExp.end());

    // for each binary number multiply output by output
    // and when binary number is equal to 1 then also
    // multiply by input base (a)
    int output = a;
    for ( int i = 1; i < binaryExp.size(); i++ ) {
        if ( binaryExp[i] == 1 ) {
            output = output * output * a;
        } else {
            output = output * output;
        }
    }

    cout << output;
    return 0;
}
