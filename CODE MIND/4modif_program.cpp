#include <iostream>
using namespace std;

int jumlah(int a, int b) {
    cout << "= ";
    return a + b;
}

int main() {
    int a, b;

    cout << "\n==== MODIF ANGKA PENJUMLAHAN ====" << endl;
    cout << "Masukkan angka: ";
    cin >> a;
    cout << "Masukkan angka: ";
    cin >> b;
    cout << "Jumlahnya adalah: " << jumlah(a, b);
}