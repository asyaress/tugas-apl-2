#include <iostream>
#include <algorithm>
using namespace std;

bool isTripelPythagoras(int a, int b, int c)
{
    int s[3] = {a, b, c};
    sort(s, s + 3); // s[2] terbesar dianggap sisi miring
    long long x = s[0], y = s[1], z = s[2];
    return (x * x + y * y == z * z);
}

int main()
{
    int a, b, c;
    cout << "Masukkan a: ";
    cin >> a;
    cout << "Masukkan b: ";
    cin >> b;
    cout << "Masukkan c: ";
    cin >> c;

    int s[3] = {a, b, c};
    sort(s, s + 3);
    long long x = s[0], y = s[1], z = s[2];

    long long pyth = x * x + y * y;
    long long hyp = z * z;

    cout << "\nNilai pythagoras (a^2 + b^2) = " << pyth << "\n";
    cout << "Nilai c^2 = " << hyp << "\n";

    if (isTripelPythagoras(a, b, c))
    {
        cout << "Termasuk tripel pythagoras\n";
    }
    else
    {
        cout << "Bukan tripel pythagoras\n";
    }

    return 0;
}
