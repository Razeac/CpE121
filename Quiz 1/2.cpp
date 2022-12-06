#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Created by Mendez, Kenneth Carl Ceazar F.
int main() {
    srand(time(0));
    int RN = 10 + rand() % 91;
        cout << "The generated random number is: " << RN << endl;
    if (RN > 50) {
        cout << "The generated random number is greater than 50." << endl;
    } 
    else if (RN < 50) {
        cout << "The generated random number is below 50." << endl;
    } 
    else {
        cout << "The generated random number is equal to 50." << endl;
    }
    return 0;
}