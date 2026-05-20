#include <iostream>
#include <string>
using namespace std;

int main()
{
    string kalimat, cari;
    int vokal = 0, konsonan = 0, numerik = 0;

    cout << "\n====== Program Pencarian Data dan Penghitung Vokal, Konsonan, Numerik ======" << endl;
    cout << "\nInput : ";
    getline(cin, kalimat);

    cout << "\n-------- Output --------" << endl;

    // Menampilkan huruf vokal
    cout << "Vokal = ";
    for (int i = 0; i < kalimat.length(); i++)
    {
        char c = tolower(kalimat[i]);

        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
        {
            vokal++;
            cout << c << " ";
        }
    }

    cout << "\nJumlah Vokal = " << vokal << endl;

    // Menampilkan huruf konsonan
    cout << "Konsonan = ";
    for (int i = 0; i < kalimat.length(); i++)
    {
        char c = tolower(kalimat[i]);

        if (c >= 'a' && c <= 'z' &&
            !(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o'))
        {

            konsonan++;
            cout << c << " ";
        }
    }

    cout << "\nJumlah Konsonan = " << konsonan << endl;

    // Menghitung numerik
    for (int i = 0; i < kalimat.length(); i++)
    {
        char c = kalimat[i];

        if (c >= '0' && c <= '9')
        {
            numerik++;
        }
    }

    cout << "Jumlah Numerik = " << numerik << endl;
    cout << "------------------------" << endl;

    // Pencarian data
    cout << "\nMasukkan data yang akan Anda cari: ";
    cin >> cari;

    // Cek apakah data ada
    if (kalimat.find(cari) != string::npos)
    {
        cout << "\nData \"" << cari << "\" ditemukan!!!" << endl;
        cout << "------------------------" << endl;
    }
    else
    {
        cout << "\nData \"" << cari << "\" tidak ada!!!" << endl;
        cout << "------------------------" << endl;
    }

    return 0;
}