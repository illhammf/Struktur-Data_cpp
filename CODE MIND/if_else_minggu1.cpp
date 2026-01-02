#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
    // Latihan IF ELSE
    // int umur;
    
    // cout << "Masukkan umur : ";
    // cin >> umur;

    // if (umur >= 17){
    //     cout << "Boleh membuat KTP" << endl;
    // } 
    // else{
    //     cout << "Belum cukup umur";
    // }

    // PENILAIAN
    // int nilai;
    // cout << "Masukkan Nilai : ";
    // cin >> nilai;

    // if (nilai >= 80 && nilai <=100){
    //     cout << "Nilai kamu A" << endl;
    // }
    // else if (nilai >= 60 && nilai <= 80 ){
    //     cout << "Nilai kamu B" << endl;
    // }
    // else if (nilai >=40 && nilai <=60 ){
    //   cout << "Nilai kamu C" << endl;
    // }
    // else {
    //     cout << "Nilai kamu D";
    // }


    cout << "==== Studi Kasus 1: WIFI ====" << endl;
    string mhs, ukt;
    cout << "Status Mahasiswa (aktif/tidak): ";
    cin >> mhs;
    cout << "Status Pembayaran (sudah/belum): ";
    cin >> ukt;

    if (mhs == "aktif" && ukt == "sudah"){
        cout << " Akses Wifi diberikan 😁" << endl;
    }
    else{
        cout << "Akses Wifi ditolak!!!\n";
    }

    
    cout << "==== Studi Kasus 2: Kendaraan ====" << endl;
    int kendaraan;
    cout << "Pilih kendaraan :" << endl;
    cout << "1. Jalan Kaki\n";
    cout << "2. Motor\n";
    cout << "3. Angkot\n" << endl;
    // \n dan endl itu sama aja

    cout << "Pilihan kamu : ";
    cin >> kendaraan;

    switch (kendaraan){ // if else bisa masuk switch
        case 1 :
            cout << "Keren, Sehat, dan Hemat 🤩" << endl;
            break;
        case 2 :
            cout << "Cepat dan Praktis 😊" << endl;
            break;
        case 3 :
            cout << "Murah tapi Padat! 😵" << endl;
            break;
        default:
            cout << ("Pilihan tidak valid!!! (harus 1, 2, atau 3)") << endl;
    }


    cout << "\n==== Studi Kasus 3: Absensi ====" << endl;
    int absen;
    cout <<"Masukkan persentase kehadiran : ";
    cin >> absen;

    if (absen >= 90 && absen <= 100){
        cout << "status absen: Sangat baik 🥇" << endl;
    }
    else if (absen >= 75 && absen < 90){
        cout << "status absen: Baik 🥈" << endl;
    }
    else if (absen >= 50 && absen < 75){
        cout <<  "status absen: Cukup 🥉" << endl;
    }
    else{
        cout << "status absen: Buruk!!! " << endl;
    }
}