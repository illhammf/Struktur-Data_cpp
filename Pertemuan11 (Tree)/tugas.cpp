#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

struct node {
    char data;
    node *kiri;
    node *kanan;
};

node *akar = NULL;

node* addNode(node **akar, char isi) {
    if ((*akar) == NULL) {
        node *baru = new node;
        baru->data = isi;
        baru->kiri = NULL;
        baru->kanan = NULL;
        (*akar) = baru;
    }
    return *akar;
}

void preOrder(node *akar) {
    if (akar != NULL) {
        cout << " " << akar->data;
        preOrder(akar->kiri);
        preOrder(akar->kanan);
    }
}

void inOrder(node *akar) {
    if (akar != NULL) {
        inOrder(akar->kiri);
        cout << " " << akar->data;
        inOrder(akar->kanan);
    }
}

void postOrder(node *akar) {
    if (akar != NULL) {
        postOrder(akar->kiri);
        postOrder(akar->kanan);
        cout << " " << akar->data;
    }
}

int main() {
    char abjad;

    cout << "\nPosisi Awal Tree:\n\n";
    cout << "               A\n";
    cout << "             /   \\\n";
    cout << "           B      C\n";
    cout << "         /  \\    /  \\\n";
    cout << "       1     2  3    4\n";
    cout << "      / \\      / \\    \\\n";
    cout << "     D   E    F   G    H\n";
    cout << "             /\n";
    cout << "            9\n\n";


    addNode(&akar, abjad = 'A');

    addNode(&akar->kiri, abjad = 'B');
    addNode(&akar->kanan, abjad = 'C');

    addNode(&akar->kiri->kiri, abjad = '1');
    addNode(&akar->kiri->kanan, abjad = '2');
    addNode(&akar->kanan->kiri, abjad = '3');
    addNode(&akar->kanan->kanan, abjad = '4');

    addNode(&akar->kiri->kiri->kiri, abjad = 'D');
    addNode(&akar->kiri->kiri->kanan, abjad = 'E');
    addNode(&akar->kanan->kiri->kiri, abjad = 'F');
    addNode(&akar->kanan->kiri->kanan, abjad = 'G');
    addNode(&akar->kanan->kanan->kanan, abjad = 'H');

    addNode(&akar->kanan->kiri->kiri->kiri, abjad = '9');

    cout << "Tampilan PreOrder  :";
    preOrder(akar);
    cout << endl;

    cout << "Tampilan InOrder   :";
    inOrder(akar);
    cout << endl;

    cout << "Tampilan PostOrder :";
    postOrder(akar);
    cout << endl;

    cout << "--------------------------------" << endl;

    return 0;
}
