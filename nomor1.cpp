#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int main() {
    int R, C;
    cout << "Masukkan jumlah baris (R): ";
    cin >> R;
    cout << "Masukkan jumlah kolom (C): ";
    cin >> C;

    long long sum = 0;
    long long minVal = numeric_limits<long long>::max();
    long long maxVal = numeric_limits<long long>::min();

    cout << "\nMasukkan elemen matriks (" << R << "x" << C << "):\n";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            long long x;
            cout << "A[" << i << "][" << j << "] = ";
            cin >> x;

            sum += x;
            if (x < minVal) minVal = x;
            if (x > maxVal) maxVal = x;
        }
    }

    double avg = (double)sum / (R * C);

    cout << "\nHasil:\n";
    cout << "Nilai minimum  = " << minVal << "\n";
    cout << "Nilai maksimum = " << maxVal << "\n";
    cout << fixed << setprecision(2);
    cout << "Rata-rata      = " << avg << "\n";

    return 0;
}
