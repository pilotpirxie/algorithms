#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {

    // input text
    string input;
    cin >> input;

    // string to char conversion
    vector <char> el (input.begin(), input.end());

    // buckets vector
    vector < int > bucket;

    // minimum and maximum bucket
    int minimum, maximum = 0;

    // search for minimum and maximum bucket
    for ( int i = 0; i < el.size(); i++ ) {
        if ( minimum > el[i] ) {
            minimum = el[i];
        }
        if ( maximum < el[i] ) {
            maximum = el[i];
        }
    }

    // initialize buckets with zero elements
    for ( int i = minimum; i < maximum+1; i++ ) {
        bucket.push_back(0);
    }

    // push elements into buckets by incrementing how many items they have
    for ( int i = 0; i < el.size(); i++ ) {
        bucket[el[i]-minimum]++;
    }

    // for each bucket print all elements
    for ( int i = 0; i < bucket.size(); i++ ) {
        for ( int j = 0; j < bucket[i]; j++ ) {
            cout << (char)(i+minimum);
        }
    }

    return 0;
}
