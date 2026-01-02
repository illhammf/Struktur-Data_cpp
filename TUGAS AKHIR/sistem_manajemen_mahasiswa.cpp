#include <iostream>
using namespace std;

// Struct untuk menyimpan data mahasiswa
struct Mahasiswa
{
    string nama;
    string nim;
    string jurusan;
    string kampus;
    float ipk;
};

// Node linked list
struct Node
{
    Mahasiswa data; // data mahasiswa
    Node *next;     // pointer ke node berikutnya
};

// Pointer ke awal linked list
Node *head = nullptr;

void tambahMahasiswa()
{
    // Buat struct baru untuk diisi
    Mahasiswa mhs;
    cout << "\n=== Tambah Data: ===" << endl;
    cout << "Masukkan Nama     : ";
    getline(cin >> ws, mhs.nama);
    cout << "Masukkan NIM      : ";
    getline(cin, mhs.nim);
    cout << "Masukkan Jurusan (Teknik Informatika / Sistem Informasi)  : ";
    getline(cin, mhs.jurusan);

    // Pilihan kampus
    int pilihKampus;
    cout << "Pilih Kampus: " << endl;
    cout << "1. Jakarta" << endl;
    cout << "2. Bekasi" << endl;
    cout << "3. Tangerang" << endl;
    cout << "Kampus (1/2/3): ";
    cin >> pilihKampus;

    switch (pilihKampus)
    {
    case 1:
        mhs.kampus = "Jakarta";
        break;
    case 2:
        mhs.kampus = "Bekasi";
        break;
    case 3:
        mhs.kampus = "Tangerang";
        break;
    default:
        mhs.kampus = "Kampus tidak valid";
        break;
    }

    cout << "Masukkan IPK      : ";
    cin >> mhs.ipk;

    // Buat node baru
    Node *baru = new Node;
    baru->data = mhs;
    baru->next = nullptr;

    // Masukkan ke linked list
    if (head == nullptr)
    {
        head = baru; // kalau kosong, node pertama
    }
    else
    {
        Node *cek = head;
        while (cek->next != nullptr)
        {
            cek = cek->next;
        }
        cek->next = baru; // tambah di akhir
    }

    cout << "\nData mahasiswa berhasil ditambahkan!" << endl;
}

void tampilkanData()
{
    if (head == nullptr)
    {
        cout << "\nBelum ada data mahasiswa!" << endl;
        return;
    }

    cout << "\n======== DATA MAHASISWA ========" << endl;
    Node *cek = head; // mulai dari node pertama
    int no = 1;

    while (cek != nullptr)
    {
        cout << "Data ke-" << no++ << ": " << endl;
        cout << "Nama     : " << cek->data.nama << endl;
        cout << "NIM      : " << cek->data.nim << endl;
        cout << "Jurusan  : " << cek->data.jurusan << endl;
        cout << "Kampus   : " << cek->data.kampus << endl;
        cout << "IPK      : " << cek->data.ipk << endl;
        cout << "-------------------------------" << endl;

        cek = cek->next; // pindah ke node berikutnya
    }
}

void cariMahasiswa()
{
    if (head == nullptr)
    {
        cout << "\nData masih kosong!" << endl;
        return;
    }

    int pilihan;
    cout << "\n=== Cari berdasarkan: ===" << endl;
    cout << "1. Nama" << endl;
    cout << "2. NIM" << endl;
    cout << "3. Kampus" << endl;
    cout << "Pilih (1/2/3): ";
    cin >> pilihan;

    string keyword;
    cout << "Masukkan keyword pencarian: ";
    cin.ignore(); // biar bisa input string setelah cin >> pilihan
    getline(cin, keyword);

    Node *cek = head;
    bool ditemukan = false;
    int urutan = 1;

    while (cek != nullptr)
    {
        bool cocok = false;
        if (pilihan == 1 && cek->data.nama == keyword)
            cocok = true;
        if (pilihan == 2 && cek->data.nim == keyword)
            cocok = true;
        if (pilihan == 3 && cek->data.kampus == keyword)
            cocok = true;

        if (cocok)
        {
            cout << "\nDitemukan pada data ke-" << urutan << ": " << endl;
            cout << "Nama     : " << cek->data.nama << endl;
            cout << "NIM      : " << cek->data.nim << endl;
            cout << "Jurusan  : " << cek->data.jurusan << endl;
            cout << "Kampus   : " << cek->data.kampus << endl;
            cout << "IPK      : " << cek->data.ipk << endl;
            ditemukan = true;
        }

        cek = cek->next;
        urutan++;
    }

    if (!ditemukan)
    {
        cout << "\nData tidak ditemukan, silahkan cek kembali!" << endl;
    }
}

void urutkanMahasiswa()
{
    if (head == nullptr || head->next == nullptr)
    {
        cout << "\nData kurang dari 2, tidak perlu diurutkan!" << endl;
        return;
    }

    int pilihan;
    cout << "\n=== Urutkan berdasarkan: ===" << endl;
    cout << "1. Nama (A-Z)" << endl;
    cout << "2. IPK (Tinggi ke Rendah)" << endl;
    cout << "Pilih (1/2): ";
    cin >> pilihan;

    bool tukar;
    do
    {
        tukar = false;
        Node *a = head;
        while (a->next != nullptr)
        {
            Node *b = a->next;

            bool kondisi = false;
            if (pilihan == 1 && a->data.nama > b->data.nama)
                kondisi = true;
            if (pilihan == 2 && a->data.ipk < b->data.ipk)
                kondisi = true;

            if (kondisi)
            {
                swap(a->data, b->data); // tukar isi data (bukan node)
                tukar = true;
            }
            a = a->next;
        }
    } while (tukar);

    cout << "\nData berhasil diurutkan!" << endl;
}

void editMahasiswa()
{
    if (head == nullptr)
    {
        cout << "\nBelum ada data, silahkan tambahkan dulu!" << endl;
        return;
    }

    int pilihan;
    cout << "\n=== Edit berdasarkan: ===" << endl;
    cout << "1. Nama" << endl;
    cout << "2. NIM" << endl;
    cout << "Pilih (1/2): ";
    cin >> pilihan;

    string keyword;
    cout << "Masukkan data yang ingin dicari: ";
    cin.ignore();
    getline(cin, keyword);

    Node *cek = head;
    bool ditemukan = false;

    while (cek != nullptr)
    {
        if ((pilihan == 1 && cek->data.nama == keyword) ||
            (pilihan == 2 && cek->data.nim == keyword))
        {

            cout << "\nData ditemukan! Masukkan data baru: " << endl;
            cout << "Nama baru     : ";
            getline(cin, cek->data.nama);
            cout << "NIM baru      : ";
            getline(cin, cek->data.nim);
            cout << "Jurusan baru  : ";
            getline(cin, cek->data.jurusan);

            int pilihKampus;
            cout << "Pilih Kampus baru: " << endl;
            cout << "1. Jakarta" << endl;
            cout << "2. Bekasi" << endl;
            cout << "3. Tangerang" << endl;
            cout << "Kampus (1/2/3): " << endl;
            cin >> pilihKampus;
            switch (pilihKampus)
            {
            case 1:
                cek->data.kampus = "Jakarta";
                break;
            case 2:
                cek->data.kampus = "Bekasi";
                break;
            case 3:
                cek->data.kampus = "Tangerang";
                break;
            default:
                cek->data.kampus = "Tidak Diketahui, cek kembali";
                break;
            }

            cout << "IPK baru      : ";
            cin >> cek->data.ipk;

            cout << "\nData berhasil diperbaharui!" << endl;
            ditemukan = true;
            break;
        }
        cek = cek->next;
    }

    if (!ditemukan)
    {
        cout << "\nData tidak ditemukan!" << endl;
    }
}

void hapusMahasiswa()
{
    if (head == nullptr)
    {
        cout << "\nData masih kosong!, apa yang mau dihapus?" << endl;
        return;
    }

    int pilihan;
    cout << "\n=== Hapus berdasarkan: ===" << endl;
    cout << "1. Nama" << endl;
    cout << "2. NIM" << endl;
    cout << "Pilih (1/2): ";
    cin >> pilihan;

    string keyword;
    cout << "Masukkan data yang ingin dihapus: ";
    cin.ignore();
    getline(cin, keyword);

    Node *hapus = head;
    Node *sebelum = nullptr;
    bool ditemukan = false;

    while (hapus != nullptr)
    {
        bool cocok = (pilihan == 1 && hapus->data.nama == keyword) ||
                     (pilihan == 2 && hapus->data.nim == keyword);

        if (cocok)
        {
            if (sebelum == nullptr)
            {
                // Hapus node pertama
                head = hapus->next;
            }
            else
            {
                // Hapus node di tengah/akhir
                sebelum->next = hapus->next;
            }

            delete hapus; // bebaskan memori
            cout << "\nData berhasil dihapus!" << endl;
            ditemukan = true;
            break;
        }

        sebelum = hapus;
        hapus = hapus->next;
    }

    if (!ditemukan)
    {
        cout << "\nData tidak ditemukan" << endl;
    }
}

int main()
{
    int pilihan;
    do
    {
        cout << "\n======= SISTEM MANAJEMEN DATA MAHASISWA FASILKOM 24 =======" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Tampilkan Semua Data" << endl;
        cout << "3. Cari" << endl;
        cout << "4. Urutkan" << endl;
        cout << "5. Edit" << endl;
        cout << "6. Hapus" << endl;
        cout << "7. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            tambahMahasiswa();
            break;
        case 2:
            tampilkanData();
            break;
        case 3:
            cariMahasiswa();
            break;
        case 4:
            urutkanMahasiswa();
            break;
        case 5:
            editMahasiswa();
            break;
        case 6:
            hapusMahasiswa();
            break;
        case 7:
            cout << "\nProgram selesai. Terima kasih!" << endl;
            break;
        default:
            cout << "\nPilihan tidak valid, silahkan cek kembali!" << endl;
        }
    } while (pilihan != 7);

    return 0;
}