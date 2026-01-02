#include <iostream>
using namespace std;

int penjumlahan(int a, int b){
    cout << "= ";
    return a + b;
}

int pengurangan(int a, int b){
    cout << "= ";
    return a - b;
}

int perkalian(int a, int b){
    cout << "= ";
    return a * b;
}

int pembagian(float a, float b){
    cout << "= ";
    return a / b;
}

int main(){
    int pilihan, x, y;

    cout << "\n==== KALKULATOR SEDERHANA ====" << endl;
    cout << "1. +" << endl;
    cout << "2. -" << endl;
    cout << "3. x" << endl;
    cout << "4. /" << endl;

    cout << "\nPilih Menu (1, 2, 3 ,4): ";
    cin >> pilihan;

    cout << "Masukkan dua angka (pake spasi): ";
    cin >> x >> y;

    switch(pilihan) { // pake switch karena lebih efisien, karena kita ada menu
        case 1:
            cout << penjumlahan(x, y);
            break;

        case 2:
            cout << pengurangan(x, y);
            break;

        case 3:
            cout << perkalian(x, y);
            break;

        case 4:
            cout << pembagian(x, y);
            break;

        default:
            cout << "Pilihan tidak valid!!!";
    }

    return 0;
}