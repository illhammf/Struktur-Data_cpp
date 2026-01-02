#include <iostream>
using namespace std;

int main(){

    // Materi for Loop
    // for (int i = 1; i <= 5; i++){
    //     cout << i << endl;
    // }

    // Materi while Loop
    


    
    // Materi do While
    // string pass;
    // do {
    //     cout << "Masukkan Password: ";
    //     cin >> pass;

    // } while (pass != "fasilkom123");
    // cout << "Password Benar" << endl;


    // contoh FOR LOOP
    // for (int i = 1; i <=20; i++){
    //     if(i % 2 !=0){
    //         cout << i << " ";
    //     }
    // }


    // contoh FOR LOOP
    // int total = 0;
    // for (int i = 1; i <=10; i++){
    //     total += i;
    //     cout << i << " || " << total << endl;
    // }


    //  contoh WHILE LOOP
    // int harga, total = 0;
    // cout << "Masukkan harga barang (0 untuk selesai) : ";
    // cin >> harga;
    // while(harga != 0 )
    // {
    //     total += harga;
    //     cout << "Masukkan harga barang (0 untuk selesai) : ";
    //     cin >> harga;
    // }
    // cout << "Total belanja anda : Rp " << total;

    // contoh DO WHILE
    // int pilihan;
    // do {
    //     cout << " \nMenu :\n";
    //     cout << "1. Cetak Nama\n";
    //     cout << "2. Cetak NIM\n";
    //     cout << "3. Keluar\n";
    //     cout << "Pilih : ";
    //     cin >> pilihan;

    //     switch (pilihan)
    //     {
    //     case 1:
    //         cout << "Nama: Andi\n";
    //         break;

    //     case 2:
    //         cout << "NIM: 1234\n";
    //         break;

    //     case 3:
    //         cout << "Keluar dari program\n";
    //         break;

    //     default:
    //         cout << "Pilihan tidak valid!\n";
    //         break;
    //     }
    // } while (pilihan !=3);



    // SOAL 1 (Deret Bilangan)
    cout << "DERET BILANGAN" << endl;
    for (int i = 5; i <=50; i++){
        if(i % 5 ==0){
            cout << i << " ";
        }
    }


    // // SOAL 2 (Input Validasi)
    cout << "INPUT VALIDASI" << endl;
    int angka;
        cout << "Masukkan angka (jangan negatif, kalo negatif berhenti): ";
        cin >> angka;

    while (angka >= 0);
    cout << "Program berhenti" << endl;


    // SOAL 3 (Jumlah Deret)
    cout << "JUMLAH DERET" << endl;
    int N, total = 0, i = 1;
    cout << "Masukkan nilai N: ";
    cin >> N;

    do {
        total += i; i++;
    } while (i <= N);
    cout << "N = " << N << " Jumlah deret = " << total << endl;

  
    // SOAL 4 (Menu Kasir)
    int kasir, total = 0, harga;
    do {
        cout << "===== MENU KASIR =====" << endl;
        cout << "1. Tambah belanja" << endl;
        cout << "2. Lihat total" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih : ";
        cin >> kasir;

        switch (kasir)
        {
            case 1:
                cout << "Masukkan Harga = " << endl;
                cin >> harga;
                total += harga;
            break;

            case 2:
            cout << "Total Belanja = " << total << endl;
            break;

            case 3:
            cout << "Anda telah keluar, Terima kasih...😁" << endl;
            break;

            default:
            cout << "Tidak Valid, harus angka 1-3" << endl;
        } 
    } while (kasir != 3);


}





