# include <iostream>
# include <conio.h>
using namespace std;

typedef struct{
    int nim[2];
    string nama[2];
    float ipk[2];
}Mahasiswa;

Mahasiswa m;
Mahasiswa *p = &m;
int main(int argc, char** argv){
for (int i = 0; i < jumlah; i++) {
    cout << "\nMahasiswa " << i + 1 << ":\n";
    cout << "NIM: ";
    cin >> data[i].nim;
    cout << "Nama: ";
    cin >> data[i].nama;
    cout << "IPK: ";
    cin >> data[i].ipk;
}

    p->ipk[0] = 3.00;
    p->ipk