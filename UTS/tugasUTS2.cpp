#include <iostream>
#include <cstring>
using namespace std;

typedef struct {
    int tgl;
    int bln;
    int thn;
} Tanggal;

typedef struct {
    char noID[5];
    char nama[30];
    char jenis_kelamin; 
    Tanggal t;
} KTP;

typedef struct {
    KTP ktp[100];
    int jml;
} Data_KTP;

Data_KTP data_ktp;
Data_KTP *p = &data_ktp;

void tambahData() {
    cout << "Jumlah data yang ingin ditambahkan: ";
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nData ke-" << (p->jml + 1) << endl;
        cout << "No ID: ";
        cin.getline(p->ktp[p->jml].noID, 5);
        cout << "Nama: ";
        cin.getline(p->ktp[p->jml].nama, 30);
        cout << "Jenis Kelamin (L/P): ";
        cin >> p->ktp[p->jml].jenis_kelamin;
        cout << "Tanggal lahir (contoh: 10 07 2006): ";
        cin >> p->ktp[p->jml].t.tgl >> p->ktp[p->jml].t.bln >> p->ktp[p->jml].t.thn;
        cin.ignore(); 
        p->jml++;
    }
}

// Fungsi cari, pake tahun lahir
void cariTahun(int tahun) {
    cout << "------------------------------------" << endl;
    cout << "Data dengan tahun lahir " << tahun << ":" << endl;
    for (int i = 0; i < p->jml; i++) {
        if (p->ktp[i].t.thn == tahun) {
            cout << "No ID: " << p->ktp[i].noID << endl;
            cout << "Nama : " << p->ktp[i].nama << endl;
            cout << "Jenis Kelamin: " << p->ktp[i].jenis_kelamin << endl;
            cout << "Tanggal Lahir: " << p->ktp[i].t.tgl << "-"
                 << p->ktp[i].t.bln << "-" << p->ktp[i].t.thn << endl;
            cout << "------------------------------------" << endl;
        }
    }
}

// Fungsi cari, pake jenis kelamin
void cariJenisKel(char jenis_kelamin) {
    cout << "------------------------------------" << endl;
    cout << "Data dengan jenis kelamin " << jenis_kelamin << ":" << endl;
    for (int i = 0; i < p->jml; i++) {
        if (p->ktp[i].jenis_kelamin == jenis_kelamin) {
            cout << "No ID: " << p->ktp[i].noID << endl;
            cout << "Nama : " << p->ktp[i].nama << endl;
            cout << "Jenis Kelamin: " << p->ktp[i].jenis_kelamin << endl;
            cout << "Tanggal Lahir: " << p->ktp[i].t.tgl << "-"
                 << p->ktp[i].t.bln << "-" << p->ktp[i].t.thn << endl;
            cout << "------------------------------------" << endl;
        }
    }
}

int main() {
    p->jml = 0;
    int pilihan;

    do {
        cout << "\n======= MENU PROGRAM DATA KTP =======" << endl;
        cout << "1. Tambahkan Data" << endl;
        cout << "2. Cari berdasarkan Tahun Lahir" << endl;
        cout << "3. Cari berdasarkan Jenis Kelamin" << endl;
        cout << "4. Keluar" << endl;
        cout << "=====================================" << endl;
        cout << "\nPilih Menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahData();
                break;

            case 2:
                int tahun;
                cout << "Masukkan tahun lahir: ";
                cin >> tahun;
                cariTahun(tahun);
                break;

            case 3:
                char jeniskel;
                cout << "Masukkan jenis kelamin (L/P): ";
                cin >> jeniskel;
                cariJenisKel(jeniskel);
                break;

            case 4:
                cout << "Keluar dari program." << endl;
                break;

            default:
                cout << "Pilihan tidak valid (harus 1,2,3 atau 4)." << endl;
        }

    } while (pilihan != 4);

    return 0;
}
