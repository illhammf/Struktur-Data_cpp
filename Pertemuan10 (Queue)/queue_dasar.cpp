#include <iostream>
#include <string.h>
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
    cout << "\nDATA QUEUE: " << endl;
    for (int i = 0; i <= antri.tail; i++)
    printf ("%s\n", antri.data[i]);
}

int main() {
    int pil, batas;
    char data[20];
    cout << "Masukkan batasan input: "; cin >> batas;
    for (int i = 0; i < batas; i++){
        cout << "\nInputkan queue: "; cin >> data;
        enqueue (data);
    }
    print();
}
