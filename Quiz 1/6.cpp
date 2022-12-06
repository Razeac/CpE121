#include <iostream>
using namespace std;
#define PI 3.1415926525
//Created by Mendez, Kenneth Carl Ceazar F.
int main()
{
    char X;
    float A, P, C;
    int H, W, B, R;
        cout << "1. Triangle\n";
        cout << "2. Circle\n";
        cout << "3. Rectangle\n";
        cout << "Enter Your Choice\n";
            cin >> X;
    switch (X) {
        case '1':    
            cout << "Enter Height: \n";
                cin >> H;
            cout << "Enter Base: \n";
                cin >> B;
            A = 0.5 * H * B;
            cout << fixed << "Area of the Triangle is: " << A << endl;
        break;
        case '2':   
            cout << "Enter Radius: \n";
                cin >> R;
            A = PI * R * R;
            cout << fixed << "Area of the Circle is: " << A << endl;
            C = 2 * PI * R;
            cout << fixed << "Circumference of the Circle is: " << C << endl;
        break;
        case '3':
            cout << "Enter Height:";
                cin >> H;
            cout << "Enter Weight:";
                cin >> W;
            A = H * W;
            cout << fixed << "Area of the Rectangle is: \n" << A << endl;
            P = 2 * H * W;
            cout << fixed << "Perimeter of the Rectangle is: \n" << P << endl;
            break;
        default:
            cout << "Invalid Choice!! \n";
        }
    return 0;
}