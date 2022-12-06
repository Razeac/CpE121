#include <iostream>
using namespace std;
//Created by Mendez, Kenneth Carl Ceazar F.
int main() {
    int V;
    cout << "Enter a value: ";
    cin >> V;
    if (V < 0) {
    cout << "The entered value is a negative number." << endl;
    }
    else {
    cout << "The entered value is a positive number." << endl;
    }
    return 0;
}