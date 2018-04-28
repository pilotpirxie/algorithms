#include <iostream>

using namespace std;

int euclideanGCD (int a, int b) {
    if ( b == 0 ) {
        return a;
    } else {
        return euclideanGCD(b, a % b);
    }
}

int main () {
    cout << euclideanGCD(95,45);
    return 0;
}
