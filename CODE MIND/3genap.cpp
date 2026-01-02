#include <iostream>
using namespace std;

bool isGenap(int n) {
    cout << "= ";
    return n % 2 == 0;
}

int main() {
    int a;

    cout << "\n==== GENAP ATAU GANJIL ====" << endl;
    cout << "Jika 1 = true" << endl;
    cout << "Jika 0 = false" << endl;
    cout << "\nMasukkan angka: ";
    cin >> a;
    cout << isGenap(a);
}