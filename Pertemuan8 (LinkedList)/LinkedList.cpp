# include <iostream>
using namespace std;

// Node Struct untuk merepsentasikan node dalam Linked List
struct Node{
    int data;
    Node* next;
};

// Fungsi untuk membuat node baru
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}

// Fungsi untuk menambahkan node di awal Linked List
void data_baru(Node*& head, int data) {
    Node* newNode = createNode(data);
    newNode -> next = head;
    head = newNode;
}

// Fungsi untuk mencetak Linked List
void printlist(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* head = NULL;

    // Menambahkan node ke Linked List
    data_baru(head, 3);
    data_baru(head, 7);
    data_baru(head, 9);

    // Mencetak Linked List
    cout << "Linked List: ";
    printlist(head);

    return 0;
}