#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int a;

    cout << "\n==== DERET FIBONACCI ====" << endl;
    cout << "Masukkan angka: ";
    cin >> a;
    cout << "Jumlahnya adalah= " << fibonacci(a);
}