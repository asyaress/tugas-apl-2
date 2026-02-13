#include <iostream>
using namespace std;

long long pangkat(long long a, int b)
{
    if (b == 0)
        return 1;
    return a * pangkat(a, b - 1);
}

int main()
{
    long long a;
    int b;
    cout << "Masukkan a (bilangan dasar): ";
    cin >> a;
    cout << "Masukkan b (pangkat): ";
    cin >> b;

    if (b < 0)
    {
        cout << "Pangkat negatif tidak dibahas pada versi ini.\n";
        return 0;
    }

    cout << "Hasil " << a << "^" << b << " = " << pangkat(a, b) << "\n";
    return 0;
}
