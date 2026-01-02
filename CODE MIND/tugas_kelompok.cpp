#include <iostream>
#include <string>
using namespace std;

// Struktur data untuk menu
struct Menu {
    string nama;
    int harga;
};

// Fungsi menampilkan menu
void tampilkanMenu(Menu menu[], int jumlah) {
    cout << "\n----- Daftar Menu -----" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << ". " << menu[i].nama << " - Rp" << menu[i].harga << endl
    }
}

// Fungsi pemesanan
void pesanMenu(Menu menu[], int jumlah) {
    int pilihan, jumlahPesan, total = 0;
    char ulang;

    do {
        tampilkanMenu(menu, jumlah);

        cout << "Pilih menu (1-" << jumlah << "): ";
        cin >> pilihan;

        if (pilihan < 1 || pilihan > jumlah) {
            cout << "Pilihan tidak valid!" << endl;
        } else {
            cout << "Jumlah pesanan: ";
            cin >> jumlahPesan;
            total += menu[pilihan - 1].harga * jumlahPesan;
        }

        cout << "Pesan lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Total yang harus dibayar: Rp" << total << endl;
}

// Fungsi searching (pencarian nama menu)
void cariMenu(Menu menu[], int jumlah, string keyword) {
    bool ditemukan = false;
    for (int i = 0; i < jumlah; i++) {
        if (menu[i].nama.find(keyword) != string::npos) {
            cout << "Ditemukan: " << menu[i].nama << " - Rp" << menu[i].harga << endl;
            ditemukan = true;
        }
    }
    if (!ditemukan) {
        cout << "Menu tidak ditemukan." << endl;
    }
}

// Fungsi sorting (harga ascending)
void sortingHarga(Menu menu[], int jumlah) {
    for (int i = 0; i < jumlah - 1; i++) {
        for (int j = i + 1; j < jumlah; j++) {
            if (menu[i].harga > menu[j].harga) {
                swap(menu[i], menu[j]);
            }
        }
    }
    cout << "Menu berdasarkan harga (termurah):" << endl;
    tampilkanMenu(menu, jumlah);
}

// Main function
int main() {
    const int jumlah_menu = 5;
    Menu daftarMenu[jumlah_menu] = {
        {"Pecel Ayam", 15000},
        {"Pecel Lele", 12000},
        {"Tahu", 5000},
        {"Tempe", 5000},
        {"Es Teh Manis", 4000}
    };

    int pilihan;
    string keyword;

    do {
        cout << "\n===== WARUNG PECEL =====" << endl;
        cout << "1. Tampilkan Menu" << endl;
        cout << "2. Pesan Makanan" << endl;
        cout << "3. Cari Menu" << endl;
        cout << "4. Sorting Harga" << endl;
        cout << "5. Keluar" << endl;
        cout << "\nPilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tampilkanMenu(daftarMenu, jumlah_menu);
                break;
            case 2:
                pesanMenu(daftarMenu, jumlah_menu);
                break;
            case 3:
                cout << "Masukkan nama menu yang dicari: ";
                cin.ignore();
                getline(cin, keyword);
                cariMenu(daftarMenu, jumlah_menu, keyword);
                break;
            case 4:
                sortingHarga(daftarMenu, jumlah_menu);
                break;
            case 5:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid, Coba Cek Kembali!" << endl;
        }
    } while (pilihan != 5);

    return 0;
}
