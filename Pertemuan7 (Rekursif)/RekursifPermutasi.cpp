#include <iostream>
#include <conio.h>
using namespace std;

int bil_ganjil(int n){
    if (n==1)
        return (n);
    else
        return (n + bil_ganjil(n-1)); 
}

int main(){

    int bil;

    cout << "Fungsi Rekursid Permutasi" << endl;
    cout << "=================================" << endl;
    cout << "Masukkan Bilangan = ";cin>>bil;

    cout << "Permutasi ("<<bil<<") = " << bil_ganjil(bil);

    return 0;
}