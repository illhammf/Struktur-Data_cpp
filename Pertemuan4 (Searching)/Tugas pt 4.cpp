#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main() {
    int t[5];
    int val, i = 0, hasil = -1, index = 0;

    cout<<"Masukkan 5 angka:\n";
    for(int j = 0; j < 5; j++){
        cout<<"Angka ke-"<<j<<": ";
        cin>>t[j];
    }
    
    cout<<"Masukkan angka yang dicari = ";
    cin>>val;

    while((i < 5) && (hasil == -1)){
        if(t[i] == val){
            hasil = 1;
            index = i;
        }
        i++;
    }

    if(hasil==1)
        cout<<"Data ditemukan! pada index ke- "<<index<<endl;
    else
        cout<<"Data tidak ditemukan!"<<endl;

    return 0;
}

