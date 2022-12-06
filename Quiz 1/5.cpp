#include <iostream>
using namespace std;
//Created by Mendez, Kenneth Carl Ceazar F.
int main() {
    int N[] = {25, 35, 67, 29, 2};
    int C;
    cout << "Choose a box from 0 to 4: ";
    cin >> C;
    if (C < 0 || C > 4) {
    cout << "Invalid choice. Please choose a number from 0 to 4." << endl;
    }
    else {
    cout << "The number in the chosen box is: " << N[C] << endl;
    }
    return 0;
}