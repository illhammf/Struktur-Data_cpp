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
    newNode -> next = nullptr;
    return newNode;
}

// Fungsi untuk menambahkan node di awal Linked List
void tambah_data(Node*& head, int data) {
    Node* newNode = createNode(data);
    newNode -> next = head;
    head = newNode;
}

void tambah_belakang(Node*& head, int data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        head = newNode;
        
    } else {
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    }
}

// Fungsi untuk mencetak Linked List
void printlist(Node* head) {
    Node* temp = head;
    cout << "Linked List: ";
    while(temp != nullptr) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

// Fungsi untuk menghapus node dari Linked lIst berdasarkan nilai yang diberikan
void deleteNode(Node*& head, int key){
    Node* temp = head;
    Node* prev = nullptr;

    if (temp != nullptr && temp -> data == key){
        head = temp -> next;
        delete temp;
        return;
    }

    while (temp != nullptr &&  temp -> data != key){
        prev = temp;
        temp = temp -> next;
    }

    if (temp == nullptr) {
        cout << "Data " << key << " tidak ditemukan dalan Linked List." << endl;
        return;
    }
    
    prev -> next = temp -> next;
    delete temp;
    cout << "Data " << key << " berhasil dihapus dari Linked List." << endl;
}

int main() {
    Node* head = nullptr;
    int pilihan, data;

    do {
        cout << "\nMenu: \n1. Tambah Data (depan)\n2. Tambah Data (belakang)\n3. Hapus Data\n4. Tampilkan Linked List\n5. Keluar\nPilih: ";
        cin >> pilihan;

        switch(pilihan){
            case 1:
                cout << "Masukkan data yang ingin ditambahkan (depan): ";
                cin >> data;
                tambah_data(head, data);
                break;
            case 2:
                cout << "Masukkan data yang ingin ditambahkan (belakang): ";
                cin >> data;
                tambah_belakang(head, data);
                break;
            case 3:
                cout << "Masukkan data yang ingin dihapus: ";
                cin >> data;
                deleteNode(head, data);
                break;
            case 4:
                printlist(head);
                break;
            case 5:
                cout << "Keluar dari program.";
                break;
            default:
            cout << "\nPilihan tidak valid. Silahkan coba lagi. \n";
        }

    } while (pilihan != 4);
    
    return 0;
}