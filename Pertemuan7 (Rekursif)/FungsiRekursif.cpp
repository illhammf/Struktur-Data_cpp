#include <iostream>
#include <conio.h>
using namespace std;
int factorial (int n){
    if (n==1){
        return 1;
    } else {
        return n*factorial(n-1);
    }
}

int main(int argc, char** argv){
    int bil;

    cout << "Program Faktorial dengan Rekursif" << endl;
    cout << "=================================" << endl;
    cout << endl;
    cout << "Masukkan Bilangan Bulat (integer)" << endl;
    cout << "Bilangan = ";cin >> bil;
    cout << factorial(bil);

}