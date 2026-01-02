#include <iostream>
using namespace std;

float luas_lingkaran(float r) {
    cout << "= ";
    return 3.14 * (r * r);
}

int volume_balok(int p, int l, int t) {
    cout << "= ";
    return p * l * t;
}

int main() {
    int pilihan, r, p, l, t;

    cout << "\nLuas Lingkaran dan Volume Balok" << endl;
    cout << "1. Luas Lingkaran" << endl;
    cout << "2. Volume Balok" << endl;
    cout << "\nPilih rumus: ";
    cin >> pilihan;

    switch(pilihan){
        case 1:
        cout << "Masukkan angka (pake spasi): ";
        cin >> r;
        cout << luas_lingkaran(r);
        break;

        case 2:
        cout << "Masukkan angka (pake spasi): ";
        cin >> p >> l >> t;
        cout << volume_balok(p, l , t);
        break;

        default:
        cout << "Pilihan tidak valid, PILIH YANG BENER!!";
    }
    return 0;
}