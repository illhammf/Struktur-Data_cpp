#include <iostream>
using namespace std;

typedef struct {
    int nim[2];
    string nama[2];
    float ipk[2];
} Mahasiswa;

int main() {
    Mahasiswa m;
    Mahasiswa* p = &m;

    int jumlah = 2; 

    for (int i = 0; i < jumlah; i++) {
        cout << "\nMahasiswa " << i + 1 << ":\n";
        cout << "NIM: ";
        cin >>m.nim[i];
        cout << "Nama: ";
        cin >>m.nama[i];
        cout << "IPK: ";
        cin >>m.ipk[i];
    }

    p->nim[0] = 54321;
    p->nama[0] = "aku";
    p->ipk[0] = 3.00;

    p->nim[1] = 12345;
    p->nama[1] = "kami";
    p->ipk[1] = 3.99;

    for (int i = 0; i < jumlah; i++) {
        cout << "\nData ke-" << i + 1 << endl;
        cout << "nim = " << p->nim[i] << endl;
        cout << "nama = " << p->nama[i] << endl;
        cout << "ipk = " << p->ipk[i] << endl;
    }

    return 0;
}
