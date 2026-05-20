#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    // Array angka (int) dan huruf (char)
    int angka[7] = {1, 2, 3, 4, 5, 6, 7};
    char huruf[5] = {'A', 'B', 'C', 'D', 'E'};

    // Menampilkan array angka
    for (int i = 0; i < 7; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;

    // Menampilkan array huruf
    for (int i = 0; i < 5; i++) {
        cout << huruf[i] << " ";
    }
    cout << endl;

    return 0;
}
