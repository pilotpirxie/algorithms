#include <iostream>
#include <vector>

using namespace std;

void hanoi (int n, char from, char dest, char aux) {
    // if we handle just one disk
    // and this is the top of the function (rest we move recursive
    // and this is the lonely single element)
    // we can move it directly to the destination rod
    if ( n == 1 ) {
        cout << "Moved 1 from " << from << " to " << dest << endl;
        return;
    } else {
        // otherwise firstly we get n-1 elements and move it
        // to the destination by using temporary rod
        // of course inside we need to make this movement once again
        // as well by using same function
        // we move more deeper and deeper to move loneliest element ^
        // from the conditional statement
        hanoi(n-1, from, aux, dest);
        // print information
        cout << "Moved " << n << " from " << from << " to " << dest << endl;
        // while function go to the top move all elements
        // minus the single one that is now on correct place
        // from temporary rod to destination
        hanoi(n-1, aux, dest, from);
    }
}

int main () {
    hanoi(3, 'A', 'C', 'B');
    return 0;
}
