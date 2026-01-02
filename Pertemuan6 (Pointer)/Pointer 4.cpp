# include <iostream>
# include <conio.h>
using namespace std;

int main(int argc, char** argv){
    int *p, a = 25, b;

    cout<<"Nilai a = " << a << " di alamat a = "<< &a << endl;
    cout<<"Nilai p di alamat = "<< p << endl;
    
    p = &a;
    cout<<"Nilai p = "<< *p << " di alamat"<< p << endl;
    
    b = *p;
    cout<<"Nilai b = "<< b << " di alamat"<< &b << endl;

    return 0;
}