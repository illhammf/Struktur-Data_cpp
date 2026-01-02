#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main() {
    int data[5];
    int cari, hasil;
    int a, b, c, n = 5, temu = 0;
    int index = 0;

    cout<<"\nMasukkan 5 Data (Angka):\n";
    for (int i = 0; i < n; i++) {
        cout<< "Data ke-" << i << ": ";
        cin >> data[i];
    }
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (data[i] > data[j]) {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }

    cout<<"\nData setelah diurutkan (ascending): ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout<<endl;

    cout<<"\nPencarian Data Binary Search"<<endl;
    cout<<"============================"<<endl;
    cout<<"============================"<<endl;
    cout<<"Masukkan Data yang ingin dicari = ";
    cin>>cari;

    a = 0; b = n - 1;
    while (a <= b && temu == 0) {
        c = (a + b) / 2;
        if (data[c] == cari) {
            temu = 1;
            index = c;
        } else if (data[c] > cari)
            b = c - 1;
        else
            a = c + 1;
    }

    hasil = temu;

    if (hasil == 1)
        cout<<"Data ditemukan! pada index ke-"<<index<<endl;
    else if (hasil == 0)
        cout<<"Data tidak ditemukan!"<<endl;
    else
        cout<<"ERROR!!!"<<endl;

    return 0;
}

