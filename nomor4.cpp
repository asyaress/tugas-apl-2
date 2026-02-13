#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cout << "Masukkan jumlah data (N): ";
    cin >> n;

    if (n <= 0)
    {
        cout << "N harus > 0.\n";
        return 0;
    }

    // Alokasi memori dinamis
    double *p = new double[n];

    cout << "\nMasukkan " << n << " angka:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << " = ";
        cin >> *(p + i); // akses pakai pointer
    }

    double sum = 0;
    double minVal = numeric_limits<double>::max();
    double maxVal = numeric_limits<double>::lowest();

    for (int i = 0; i < n; i++)
    {
        double x = *(p + i); // ambil nilai lewat pointer
        sum += x;
        if (x < minVal)
            minVal = x;
        if (x > maxVal)
            maxVal = x;
    }

    double avg = sum / n;

    cout << fixed << setprecision(2);
    cout << "\nHasil:\n";
    cout << "Minimum  = " << minVal << "\n";
    cout << "Maksimum = " << maxVal << "\n";
    cout << "Rata-rata= " << avg << "\n";

    // Hapus memori
    delete[] p;
    p = nullptr;

    return 0;
}
