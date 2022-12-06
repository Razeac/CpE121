#include <iostream>
using namespace std;

double computeFormula1(double A, double B, double C);
double computeFormula2(double X, double Y, double Z);
double computeFormula3(double P, double Q, double R);

int main() {
    double A, B, C;
    double X, Y, Z;
    double P, Q, R;
        cout << "Choose a formula to be used: " << endl;
        cout << "1. Formula 1" << endl;
        cout << "2. Formula 2" << endl;
        cout << "3. Formula 3" << endl;
        cout << "Enter your choice: ";
    int choice;
        cin >> choice;
    if (choice == 1) {
        cout << "Enter the value for A: ";
            cin >> A;
        cout << "Enter the value for B: ";
            cin >> B;
        cout << "Enter the value for C: ";
            cin >> C;
    double result = computeFormula1(A, B, C);
        cout << "The result of Formula 1 is: " << result << endl;
    }
    else if (choice == 2) {
        cout << "Enter the value for X: ";
            cin >> X;
        cout << "Enter the value for Y: ";
            cin >> Y;
        cout << "Enter the value for Z: ";
            cin >> Z;
    double result = computeFormula2(X, Y, Z);
        cout << "The result of Formula 2 is: " << result << endl;
    }
    else if (choice == 3) {
        cout << "Enter the value for P: ";
            cin >> P;
        cout << "Enter the value for Q: ";
            cin >> Q;
        cout << "Enter the value for R: ";
            cin >> R;
    double result = computeFormula3(P, Q, R);
        cout << "The result of Formula 3 is: " << result << endl;
    }
    else {
        cout << "Invalid choice. Please choose a number from 1 to 3." << endl;
    }

    return 0;
}

double computeFormula1(double A, double B, double C) {
    return (A + B) * C;
}

double computeForm