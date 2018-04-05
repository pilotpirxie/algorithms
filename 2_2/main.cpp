#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double money, revenue;
    int months;
    cin >> money >> revenue >> months;
    revenue = 1 + (revenue / 3);
    months /= 4;
    cout << money * pow(revenue, months);
    return 0;
}
