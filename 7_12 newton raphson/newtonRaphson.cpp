#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double newtonRaphson (double p) {
    int i = 0;
    double a = 1, b = p, eps = 0.00001;
    while ( fabs(a-b) >= eps ) {
        a = (a+b)/2;
        b = p/a;
        i++;
        cout << "a=" << a << " b=" << b << endl;
    }
    cout << "Iteration count: " << i << endl << endl;
    return a;
}

int main () {
    double in;
    cin >> in;

    cout << newtonRaphson(in);

    return 0;
}
