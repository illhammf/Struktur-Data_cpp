#include <iostream>
using namespace std;

int main(int argc, char** argv){
    int bil;
    int hasil = 1;

    cout << "Program Faktorial dengan Perulangan (for)" << endl;
    cout << "====================== =============" << endl;
    cout << endl;
    cout << "Masukkan Bilangan Bulat (integer)" << endl;
    cout << "Bilangan = "; cin >> bil;

    for (int i = bil; i >= 1; i--) {
        hasil *= i;
    }
    cout << "Faktorial dari " << bil << " = " << hasil << endl;
    return 0;
}
