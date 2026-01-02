#include <iostream>
using namespace std;

int lebihBesar(int a, int b) {
    cout << "= ";

    // return (a > b)? a:b;

    if (a > b) {
        return a;
    } else (b > a); {
        return b;
    }
}

int main() {
    int a, b;

    cout << "\n==== BILANGAN MANA YANG LEBIH BESAR ====" << endl;
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    cout << lebihBesar(a, b);

}