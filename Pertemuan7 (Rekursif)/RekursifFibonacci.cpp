#include <iostream>
#include <conio.h>
using namespace std;

int fibo(int i){
    if(i==0)
        return 0;
    else if(i==1)
        return 1;
    else
        return fibo(i-1)+fibo(i-2);
}

int main(){

    int bil;

    cout << "Fungsi Rekursif Bilangan Fibonacci" << endl;
    cout << "=================================" << endl;
    cout << "Masukkan Bilangan = ";cin>>bil;

    cout << "Fibonacci ("<<bil<<") = " << fibo(bil);

    return 0;
}