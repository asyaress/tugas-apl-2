#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int R, C;
    cout << "Masukkan jumlah baris (R): ";
    cin >> R;
    cout << "Masukkan jumlah kolom (C): ";
    cin >> C;

    vector<vector<double>> A(R, vector<double>(C));
    double sum = 0;

    cout << "\nMasukkan elemen array/matriks (" << R << "x" << C << "):\n";
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
            sum += A[i][j];
        }
    }

    cout << "\nIsi array multidimensi (matriks):\n";
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << setw(8) << A[i][j] << " ";
        }
        cout << "\n";
    }

    double avg = sum / (R * C);

    cout << fixed << setprecision(2);
    cout << "\nRata-rata elemen = " << avg << "\n";

    return 0;
}
