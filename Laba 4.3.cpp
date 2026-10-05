#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;
    double Xpoch, Xkin, dX;
    double x, F;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    cout << "Enter Xpoch: ";
    cin >> Xpoch;

    cout << "Enter Xkin: ";
    cin >> Xkin;

    cout << "Enter dX: ";
    cin >> dX;

    cout << "\n-----------------------------\n";
    cout << setw(10) << "x"
        << setw(15) << "F" << endl;
    cout << "-----------------------------\n";

    for (x = Xpoch; x <= Xkin; x += dX)
    {
        if (a < 0 && x != 0)
        {
            F = a * x * x + b * b * x;
        }
        else if (a > 0 && x == 0)
        {
            F = x - a / (x - c);
        }
        else
        {
            F = 1 + x / c;
        }

        cout << fixed << setprecision(4);
        cout << setw(10) << x
            << setw(15) << F << endl;
    }

    return 0;
}