#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define max 10
using namespace std;

struct Tumpukan
{
    int atas;
    int data[max];
}T;

void awal()
{
    T.atas = -1;
}

int kosong()
{
    if(T.atas == -1)
    return 1;
    else
    return 0;
}

int penuh()
{
    if(T.atas == max-1)
    return 1;
    else
    return 0;
}

void input(int data)
{
    if(kosong()== 1)
    {
        T.atas++;
        T.data[T.atas]=data;
        cout << "Data " << T.data[T.atas] << " masuk ke stack";
    }

    else if(penuh()== 0)
    {
        T.atas++;
        T.data[T.atas]=data;
        cout << "Data " << T.data[T.atas] << " masuk ke stack";
    }

    else
        cout << "Tumpukan penuh";
}

void hapus()
{
    if(kosong()== 0)
    {
        cout << "Data teratas sudah terambil";
        T.atas--;
    }

    else
        cout << "Data kosong";
}

void tampil()
{
    if(kosong()== 0)
    {
        for(int i=T.atas;i>=0;i--)
        {
            cout << "\nTumpukan ke " << i << "=" << T.data[i];
        }
    }

    else
        cout << "Tumpukan kosong";
}

void bersih()
{
    T.atas = -1;

    cout << "Tumpukan kosong!";
}

int main()
{
    int pil,data;
    awal();
    do
    {
        system ("cls");
        cout << "1. Input" << endl;
        cout << "2. Hapus" << endl;
        cout << "3. Tampil" << endl;
        cout << "4. Bersihkan" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan :" << endl;
        cin >> pil;
        switch(pil)
        {
            case 1: cout << "Masukkan data = ";
            cin >> data;
            input(data);
            break;

            case 2: hapus();
            break;

            case 3: tampil();
            break;

            case 4: bersih();
            break;

            case 5: cout << "Terima kasig, tekan enter untuk keluar";   
        }
        
        getch();
    } 
        while(pil!=5);
}