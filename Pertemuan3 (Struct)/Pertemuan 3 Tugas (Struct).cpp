#include <iostream>
#include <conio.h>

using namespace std;

struct mahasiswa {
	char Nim[15];
	char Nama[15];
	char Prodi[15];
	char Fakultas[15];
};

struct nilai {
	float tugas1;
	float tugas2;
	float tugas3;
	float tugas4;
};

int main() {
	int a;
	cout << "Masukkan jumlah mahasiswa = ";
	cin >> a;

	mahasiswa mhs[a];
	nilai nil[a];
	float rata[a];

	for (int i = 0; i < a; i++) {
		cout << "\nMasukkan data mahasiswa ke-" << i + 1 << endl;
		cout << "NIM      = "; cin >> mhs[i].Nim;
		cout << "Nama     = "; cin >> mhs[i].Nama;
		cout << "Prodi    = "; cin >> mhs[i].Prodi;
		cout << "Fakultas = "; cin >> mhs[i].Fakultas;

		cout << "\nMasukkan Nilai Mahasiswa ke-" << i + 1 << endl;
		cout << "Nilai 1 = "; cin >> nil[i].tugas1;
		cout << "Nilai 2 = "; cin >> nil[i].tugas2;
		cout << "Nilai 3 = "; cin >> nil[i].tugas3;
		cout << "Nilai 4 = "; cin >> nil[i].tugas4;

		rata[i] = (nil[i].tugas1 + nil[i].tugas2 + nil[i].tugas3 + nil[i].tugas4) / 4;
	}

	cout << "\n\nData " << a << " Mahasiswa" << endl;
	cout << "==============================" << endl;
	for (int i = 0; i < a; i++) {
		cout << "\nMahasiswa ke-" << i + 1 << endl;
		cout << "NIM      : " << mhs[i].Nim << endl;
		cout << "Nama     : " << mhs[i].Nama << endl;
		cout << "Prodi    : " << mhs[i].Prodi << endl;
		cout << "Fakultas : " << mhs[i].Fakultas << endl;

		cout << "Nilai Tugas 1 : " << nil[i].tugas1 << endl;
		cout << "Nilai Tugas 2 : " << nil[i].tugas2 << endl;
		cout << "Nilai Tugas 3 : " << nil[i].tugas3 << endl;
		cout << "Nilai Tugas 4 : " << nil[i].tugas4 << endl;
		cout << "Rata-rata     : " << rata[i] << endl;
	}

	return 0;
}

