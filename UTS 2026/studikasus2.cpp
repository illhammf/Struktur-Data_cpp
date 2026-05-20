#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung pangkat
int pangkat(int angka, int pangkatnya)
{
    if (pangkatnya == 0)
    {
        return 1;
    }
    else
    {
        return angka * pangkat(angka, pangkatnya - 1);
    }
}

int main()
{
    int jumlahData;

    cout << "\n====== Program Perhitungan Pangkat ======" << endl;
    cout << "\nMasukkan jumlah data: ";
    cin >> jumlahData;

    // Array dinamis
    int *angka = new int[jumlahData];
    int *pangkatData = new int[jumlahData];

    // Input data
    for (int i = 0; i < jumlahData; i++)
    {
        cout << "\nData ke-" << i + 1 << endl;
        cout << "Masukkan angka  : ";
        cin >> angka[i];
        cout << "Masukkan pangkat: ";
        cin >> pangkatData[i];
    }

    // Output hasil
    cout << "\n===== HASIL PERHITUNGAN PANGKAT =====" << endl;

    for (int i = 0; i < jumlahData; i++)
    {
        cout << angka[i] << "^" << pangkatData[i]
             << " = " << pangkat(angka[i], pangkatData[i]) << endl;
    }
    cout << "---------------------------------------" << endl;

    // Menghapus array dinamis dari memori
    delete[] angka;
    delete[] pangkatData;

    return 0;
}