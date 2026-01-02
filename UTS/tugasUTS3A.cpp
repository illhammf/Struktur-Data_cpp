#include <iostream>
using namespace std;

void cetakDeret(int n) {
    if (n == 1) {
        cout << "1";
    } else {
        cetakDeret(n - 1);
        cout << "+" << (2 * n - 1);
    }
}

int jumlahGanjil(int n) {
    if (n == 1)
        return 1;
    else
        return (2 * n - 1) + jumlahGanjil(n - 1);
}

int main() 
{
    int n;
    cout << "\n======= FUNGSI REKURSIF DERET (Studi Kasus 1) =======" << endl;
    cout << "Masukkan banyaknya bilangan ganjil: ";
    cin >> n;

    cout << "-------------------------------------" << endl;
    cout << "S = ";
    cetakDeret(n);
    int hasil = jumlahGanjil(n);
    cout << " = " << hasil << endl;
    cout << "-------------------------------------" << endl;

    return 0;
}
