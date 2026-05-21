#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung jumlah deret genap
int jumlahGenap(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + jumlahGenap(n - 2);
    }
}

// Fungsi rekursif untuk menampilkan deret
void tampilDeret(int n)
{
    if (n == 0)
    {
        cout << "0";
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

    cout << "\n====== Program Deret Bilangan Genap ======" << endl;
    cout << "\nMasukkan nilai n (genap): ";
    cin >> n;

    // Validasi bilangan genap
    if (n % 2 != 0)
    {
        cout << "Input harus bilangan genap!" << endl;
    }
    else
    {
        cout << "\nDeret bilangan genap:\n";
        tampilDeret(n);

        cout << "\n\nJumlah deret = "
             << jumlahGenap(n) << endl;
    }
    cout << "---------------------------------------------" << endl;

    return 0;
}