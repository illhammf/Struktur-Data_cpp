# include <iostream>
# include <conio.h>
using namespace std;

int main(int argc, char** argv){
    int a = 25, b = 12, t;
    int *p, *q;
    p = &a;
    q = &b;



    cout<<"Nilai yang ditunjuk p = " << *p << " di alamat "<< p << endl;
    cout<<"Nilai yang ditunjuk q = "<< *q << " di alamat "<< q << endl;
    
   t = *p;
   *p = *q;
   *q = t;

   cout<<"Nilai yang ditunjuk p sekarang adalah = "<<*p<< " di alamat "<< p << endl;
   cout<<"Nilai yang ditunjuk q sekarang adalah = "<<*q<< " di alamat "<< q << endl;

    return 0;
}