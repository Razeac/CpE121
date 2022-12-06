#include <iostream>
using namespace std;
//Created by Mendez, Kenneth Carl Ceazar F.
int main() {
    int N;
    cout << "Enter a positive number: ";
    cin >> N;
    if (N % 3 == 0 && N % 5 == 0) {
    cout << "The entered number is divisible by 3 and 5." << endl;
    }
    else {
    cout << "The entered number is not divisible by 3 and 5." << endl;
    }
    return 0;
}