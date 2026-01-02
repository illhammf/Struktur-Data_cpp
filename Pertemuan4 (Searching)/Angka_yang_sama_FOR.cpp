#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main() {
    int data[5];
    int cari, jumlah = 0, n = 5;

    cout << "Masukkan 5 angka:\n";
    for (int i = 0; i < n; i++) {
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    cout << "\nMasukkan angka yang ingin dicari: ";
    cin >> cari;

    for (int i = 0; i < n; i++) {
        if (data[i] == cari) {
            jumlah++;
        }
    }

    if (jumlah > 0) {
        cout << "Data ditemukan: " << cari << " sebanyak " << jumlah << " kali." << endl;
    } else {
        cout << "Data tidak ditemukan!" << endl;
    }

    return 0;
}

