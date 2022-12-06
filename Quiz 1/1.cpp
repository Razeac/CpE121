#include <iostream>
using namespace std;
//Created by Mendez, Kenneth Carl Ceazar F.
int main() {
    int A, B, C, D;
    int Z;
    cout << "Enter the value for A: ";
    cin >> A;
    cout << "Enter the value for B: ";
    cin >> B;
    cout << "Enter the value for C: ";
    cin >> C;
    cout << "Enter the value for D: ";
    cin >> D;
    Z = (A * B * C) / (2 * D) + (A / C) - (B * D);
    cout << "The value for Z is: " << Z << endl;
    return 0;
}