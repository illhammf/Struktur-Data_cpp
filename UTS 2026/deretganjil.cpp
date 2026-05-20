#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung jumlah deret ganjil
int jumlahGanjil(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + jumlahGanjil(n - 2);
    }
}

// Fungsi rekursif untuk menampilkan deret
void tampilDeret(int n)
{
    if (n == 1)
    {
        cout << "1";
    }
    else
    {
        tampilDeret(n - 2);
        cout << " + " << n;
    }
}

int main()
{
    int n;

    cout << "\n====== Program Deret Bilangan Ganjil ======" << endl;
    cout << "\nMasukkan nilai n (ganjil): ";
    cin >> n;

    // Validasi bilangan ganjil
    if (n % 2 == 0)
    {
        cout << "Input harus bilangan ganjil!" << endl;
    }
    else
    {
        cout << "\nDeret bilangan ganjil:\n";
        tampilDeret(n);

        cout << "\n\nJumlah deret = "
             << jumlahGanjil(n) << endl;
    }
    cout << "---------------------------------------------" << endl;

    return 0;
}