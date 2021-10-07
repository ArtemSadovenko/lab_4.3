#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x, xp, xk, dx, y, a, b, c;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "b = "; cin >> b;
    cout << "a = "; cin >> a;
    cout << "c = "; cin >> c;

    cout << fixed;     cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |" << setw(7) << "F" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk) {
        if (x < 0 && b != 0) {
            y = (a * x * x) - (b * x * x);
        }
        else if (x > 0 && b == 0) {
            y = (x - a) / (x - c);
        }
        else {
            y = (x + 5) / (c * (x - 10));
        }

        cout << "|" << setw(7) << setprecision(2) << x << "   |" << setw(10) << setprecision(3) << y << "    |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
