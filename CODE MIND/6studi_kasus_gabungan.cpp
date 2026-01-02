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

int lebihBesar(int a, int b) {
    cout << "= ";

    // return (a > b)? a:b;

    if (a > b) {
        return a;
    } else (b > a); {
        return b;
    }
}

bool isGenap(int n) {
    cout << "= ";
    return n % 2 == 0;
}

int jumlah(int a, int b) {
    cout << "= ";
    return a + b;
}

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int pilihan, r, p, l, t, n, a, b;

    cout << "\n==== STUDI KASUS - FUNCTION ====" << endl;
    cout << "1. Luas Lingkaran" << endl;
    cout << "2. Volume Balok" << endl;
    cout << "3. Perbandingan Angka" << endl;
    cout << "4. Genap atau Ganjil" << endl;
    cout << "5. Penjumlahan" << endl;
    cout << "6. Fibonacci" << endl;
    cout << "\nPilih rumus: ";
    cin >> pilihan;

    switch(pilihan){
        case 1:
        cout << "Masukkan jari-jari: ";
        cin >> r;
        cout << "Luas Lingkaran = " << luas_lingkaran(r);
        break;

        case 2:
        cout << "Masukkan Panjang, Lebar, Tinggi (pake spasi): ";
        cin >> p >> l >> t;
        cout << "Volume Balok = " << volume_balok(p, l , t);
        break;

        case 3:
        cout << "\n==== BILANGAN MANA YANG LEBIH BESAR ====" << endl;
        cout << "Masukkan angka pertama: ";
        cin >> a;
        cout << "Masukkan angka kedua: ";
        cin >> b;
        cout << "Bilangan yang lebih besar adalah = " << lebihBesar(a, b);
        break;

        case 4:
        cout << "\n==== GENAP ATAU GANJIL ====" << endl;
        cout << "Jika 1 = true/genap" << endl;
        cout << "Jika 0 = false/ganjil" << endl;
        cout << "\nMasukkan angka: " << endl;
        cin >> n;
        cout << "= " << isGenap(n);
        break;

        case 5:
        cout << "\n==== MODIF ANGKA PENJUMLAHAN ====" << endl;
        cout << "Masukkan angka pertama: ";
        cin >> a;
        cout << "Masukkan angka kedua: ";
        cin >> b;
        cout << "Jumlahnya adalah = " << jumlah(a, b);
        break;

        case 6:
        cout << "\n==== DERET FIBONACCI ====" << endl;
        cout << "Masukkan angka: ";
        cin >> a;
        cout << "Jumlahnya adalah = " << fibonacci(a);
        break;

        default:
        cout << "Pilihan tidak valid, PILIH YANG BENER!!";
    }
    return 0;
}