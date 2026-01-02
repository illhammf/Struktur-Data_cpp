#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

struct node // Linked List
{
    char data;
    node *kiri; // untuk data arah kiri
    node *kanan; // untuk data arah kanan
};

node *akar = NULL;

node *addNode(node **akar, char isi) { // Menambahkan Node
    if ((*akar) == NULL) {
        node *baru;
        baru = new node;
        baru -> data = isi;
        baru -> kiri = NULL;
        baru -> kanan = NULL;
        (*akar) = baru;
    }
    return *akar; // Biar ga error
}

void preOrder (node *akar) { // PRE ORDER 
    if (akar !=NULL) {
        cout << " " << akar -> data; // Cetak dulu Akar, cek kiri, cek kanan
        preOrder (akar -> kiri); 
        preOrder (akar -> kanan);
    }
}

void inOrder (node *akar) { // IN ORDER
    if (akar !=NULL) {
        inOrder (akar -> kiri); // Cetak kiri, Ke Akar, Cetak kanan
        cout << " " << akar -> data;
        inOrder (akar -> kanan);
    }
}

void postOrder (node *akar) { // POST ORDER
    if (akar !=NULL) {
        postOrder (akar -> kiri); // Cetak Kiri, Cetak Kanan, Ke Akar
        postOrder (akar -> kanan);
        cout << " " << akar -> data;
    }
}

int main () {
    char abjad;
    cout << "\n\n\tPosisi Awal Tree: \n\n";
    cout << "\t    A\n\t    / \\\n\t    B   C\n\t   D\n\t   / \\\n\t E   F\n\n";
    
    addNode (&akar, abjad = 'A');
    addNode (&akar -> kiri, abjad = 'B');
    addNode (&akar -> kanan, abjad = 'C');
    addNode (&akar -> kiri -> kiri, abjad = 'D');
    addNode (&akar -> kiri -> kiri -> kiri, abjad = 'E');
    addNode (&akar -> kiri -> kiri -> kanan, abjad = 'F');

    cout << "\nTampilkan PreOrder : ";
    preOrder(akar);

    cout << "\nTampilkan InOrder : ";
    inOrder(akar);

    cout << "\nTampilkan PostOrder : ";
    postOrder(akar);

    return 0;
}