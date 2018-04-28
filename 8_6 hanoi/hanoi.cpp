#include <iostream>
#include <vector>

using namespace std;

void hanoi (int n, char from, char dest, char aux) {
    if ( n == 1 ) {
        cout << "Moved 1 from " << from << " to " << dest << endl;
        return;
    } else {
        hanoi(n-1, from, aux, dest);
        cout << "Moved " << n << " from " << from << " to " << dest << endl;
        hanoi(n-1, aux, dest, from);
    }
}

int main () {
    hanoi(3, 'A', 'C', 'B');
    return 0;
}
