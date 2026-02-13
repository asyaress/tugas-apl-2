#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, d;
    cout << "Masukkan elemen matriks 2x2:\n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "d = ";
    cin >> d;

    double det = a * d - b * c;

    cout << "\nDeterminan = " << det << "\n";

    if (det == 0)
    {
        cout << "Matriks tidak memiliki invers (determinan = 0).\n";
        return 0;
    }

    double inv00 = d / det;
    double inv01 = -b / det;
    double inv10 = -c / det;
    double inv11 = a / det;

    cout << fixed << setprecision(4);
    cout << "\nInvers matriks:\n";
    cout << "[ " << setw(10) << inv00 << "  " << setw(10) << inv01 << " ]\n";
    cout << "[ " << setw(10) << inv10 << "  " << setw(10) << inv11 << " ]\n";

    return 0;
}
