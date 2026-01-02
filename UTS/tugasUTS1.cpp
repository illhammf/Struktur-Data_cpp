#include <iostream>
using namespace std;

int main() {
    string kalimat, cari;
    string vokal = "", konsonan = "", numerik = "";
    int jumlvokal = 0, jumlkonsonan = 0, jumlnumerik = 0;

    cout << "\n===== PROGRAM MENCARI DATA DARI INPUT KALIMAT =====" << endl;
    cout << "Input kalimat : ";
    getline(cin, kalimat);

    for (int i = 0; i < kalimat.length(); i++) {
        char n = kalimat[i];

        // Vokal (huruf vokal besar atau kecil)
        if (n == 'a' || n == 'i' || n == 'u' || n == 'e' || n == 'o' ||
            n == 'A' || n == 'I' || n == 'U' || n == 'E' || n == 'O') 
            {
            jumlvokal++;
            vokal += n;
            vokal += ' ';
        }
        // Konsonan (huruf selain vokal)
        else if ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z')) 
        {
           jumlkonsonan++;
            konsonan += n;
            konsonan += ' ';
        }
        // Numerik (angka)
        else if (n >= '0' && n <= '9') 
        {
            jumlnumerik++;
            numerik += n;
            numerik += ' ';
        }
    }
    cout << "\n------------------------------------" << endl;
    cout << "Output:" << endl;
    cout << "Vokal : " << jumlvokal << " = " << vokal << endl;
    cout << "Konsonan : " << jumlkonsonan << " = " << konsonan << endl;
    cout << "Numerik : " << jumlnumerik << " = " << numerik << endl;
    cout << "------------------------------------" << endl;

    cout << "Masukkan data yang akan dicari: ";
    cin >> cari;

    if (kalimat.find(cari) != string :: npos) {
        cout << "Data " << cari << " ditemukan dalam kalimat." << endl;
        cout << "------------------------------------" << endl;
    } else {
        cout << "Data " << cari << " tidak ada." << endl;
        cout << "------------------------------------" << endl;
    }

    return 0;
}
