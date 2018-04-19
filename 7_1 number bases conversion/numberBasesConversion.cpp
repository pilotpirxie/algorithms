#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// inputBase - base of number
// outputBase - expected base of number
// number - number in inputBase base
vector <char> fromTo(int inputBase, int outputBase, vector <char> number) {
    // array with possible characters
    vector <char> baseNumbers = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','w','y','z'};

    // reverse input number (passed as char array)
    // to calculate decimal value
    reverse(number.begin(), number.end());

    // minimum output value is 0
    int decimal = 0;

    // sum all parts of number
    for ( int i = 0; i < number.size(); i++ ) {

        // search for specific part of number in baseNumber
        // index is a value in decimal
        for ( int j = 0; j < baseNumbers.size(); j++ ) {
            if ( number[i] == baseNumbers[j] ) {
                decimal += pow(inputBase, i) * j;
            }
        }
    }

    // all parts of output number will be stored here
    vector <char> outputVal;

    // divide as long as number is greater than zero
    do {
        // modulo from decimal and outputBase is part of number in decimal
        int modulo = decimal % outputBase;
        // search for valid character and put into output array
        outputVal.push_back(baseNumbers[modulo]);
        // divide and repeat as long as greater than zero
        decimal /= outputBase;
    } while ( decimal > 0 );

    // reverse because number is store reversed
    reverse(outputVal.begin(), outputVal.end());

    // return array with output number
    return outputVal;
}

int main () {
    // in - input from cli
    // inputBase - base of number
    // outputBase - expected base of number
    string in;
    int inputBase, outputBase;

    // get value from command line
    cin >> in >> inputBase >> outputBase;

    // process string into char array
    // each character is part of number
    vector <char> toProcess(in.begin(), in.end());
    vector <char> output = fromTo(inputBase,outputBase,toProcess);

    // print output number
    for ( int i = 0; i < output.size(); i++ ) {
        cout << output[i];
    }

    return 0;
}
