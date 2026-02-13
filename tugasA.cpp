#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Masukkan sisi 1: ";
    cin >> a;
    cout << "Masukkan sisi 2: ";
    cin >> b;
    cout << "Masukkan sisi 3: ";
    cin >> c;

    // validasi sisi positif
    if (a <= 0 || b <= 0 || c <= 0)
    {
        cout << "Tidak bisa membentuk segitiga (sisi harus > 0)\n";
        return 0;
    }

    // urutkan agar a <= b <= c
    double s[3] = {a, b, c};
    sort(s, s + 3);
    a = s[0];
    b = s[1];
    c = s[2];

    // cek syarat segitiga
    if (a + b <= c)
    {
        cout << "Tidak bisa membentuk segitiga\n";
        return 0;
    }

    const double EPS = 1e-9;
    double lhs = a * a + b * b;
    double rhs = c * c;

    // prioritas: siku-siku dulu, lalu sama kaki, lalu sembarang
    if (fabs(lhs - rhs) < EPS)
    {
        cout << "Segitiga siku-siku\n";
    }
    else if (fabs(a - b) < EPS || fabs(b - c) < EPS || fabs(a - c) < EPS)
    {
        cout << "Segitiga sama kaki\n";
    }
    else
    {
        cout << "Segitiga sembarang\n";
    }

    return 0;
}
