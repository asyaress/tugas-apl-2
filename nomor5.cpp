#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cout << "Masukkan ukuran matriks (n): ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < n - 1)
                cout << setw(2) << 9 << " ";
            else if (i + j == n - 1)
                cout << setw(2) << 0 << " ";
            else
                cout << setw(2) << 1 << " ";
        }
        cout << "\n";
    }
    return 0;
}
