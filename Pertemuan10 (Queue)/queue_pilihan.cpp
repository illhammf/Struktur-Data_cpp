#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#define max 15
using namespace std;

typedef struct queue // Mendefinisikan queue dengan menggunakan struct
{
    int head;
    int tail;
    char data [15][20]; // menampung 15 data dengan jumlah string max 20 huruf
};
queue antri; // definisi variabel "antri"

void enqueue (char d[20]) // Menginput data pada queue
{
    antri.head = 0;
    antri.tail++;
    strcpy(antri.data[antri.tail], d);
    cout << "Data berhasil dimasukkan" << endl;
}

void dequeue() // Mengambil data dari queue
{
    printf ("data %s terambil", antri.data[antri.head]);
    for (int i = antri.head; i <= antri.tail; i++)
        strcpy (antri.data[i], antri.data[i+1]);
    antri.tail--;
}

int isEmpty() // Mengecek apakah antrian kosong
{
    if (antri.tail == -1)
    {
        antri.head = -1;
        return 1;
    }
    else
        return 0;
}

int isFull() // isFull (mengecek apakah antrian penuh?)
{
    if (antri.tail ==max-1)
        return 1;
    else
        return 0;
}

void clear() // Clear (membersihkan seluruh isi antrian)
{
    antri.head = antri.tail = -1;
    printf ("Semua data terhapus.");
}

void print() // print (mencetak)
{
    if (isEmpty()){
        cout << "Data Kosong!" << endl;
    }
    for (int i = 0; i <= antri.tail; i++)
    printf ("%s\n", antri.data[i]);
}

int main() {
    int pil, batas;
    char data[20];
    cout << "Masukkan batasan input: "; cin >> batas;
    for (int i = 0; i < batas; i++){
        cout << "Inputkan queue: "; cin >> data;
        enqueue (data);
    }
    print();

 do
    {
        system ("cls");
        cout << "1. Input data" << endl;
        cout << "2. Ambil data" << endl;
        cout << "3. Clear (hapus semua data)" << endl;
        cout << "4. Print Data (tampilkan data)"  << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan :" << endl;
        cin >> pil;
        switch(pil)
        {
            case 1: cout << "Masukkan data = ";
            cin >> data;
            enqueue(data);
            break;

            case 2: dequeue();
            break;

            case 3: clear();
            break;

            case 4: print();
            break;

            case 5: cout << "Terima kasih, tekan enter untuk keluar";   
        }
        
        getch();
    } 
        while(pil!=5);

    return 0;
}